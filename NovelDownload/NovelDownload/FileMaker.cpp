#include "FileMaker.h"



FileMaker::FileMaker(const QString&filer,bool d):file(filer),downstyle(d)
{
}

void FileMaker::setTitle(const QString &t)
{
	title = t;
}

bool FileMaker::ReadAndWrite(const QString &htmlp)
{
	file.open(QIODevice::Append);
	QTextStream Fout(&file);
	Fout.setCodec("utf8");
	Fout << title << '\r'<<'\n';
	if (!downstyle)
	{
		int index = 0;
		int len = htmlp.length();
		while (true)
		{
			int findp = htmlp.indexOf("<p>", index, Qt::CaseInsensitive);
			if (findp == -1)break;
			int findpe = htmlp.indexOf("</p>", index, Qt::CaseInsensitive);
			if (findpe == -1)break;
			QString passage = htmlp.mid(findp + 3, findpe - findp - 3);

			int findtag = passage.indexOf('<');

			if (findtag != -1)
			{
				int tagend = passage.indexOf('>', findtag);
				if (tagend != -1)
				{
					QString tag = passage.mid(findtag, tagend - findtag + 1);
					if (tag.indexOf("br", 0, Qt::CaseInsensitive) == -1)
					{
						index = findpe + 4;
						continue;
					}
				}
			}

			int l = passage.length();
			bool foundx = false;
			for (int i = 0; i < l; i++)
			{
				if (passage[i] == '<')
				{
					Fout << '\r' << '\n';
					foundx = true;
				}
				if (!foundx)
				{
					Fout << passage[i];
				}
				if (passage[i] == '>')
				{
					foundx = false;
				}
			}
			Fout << '\r' << '\n';
			index = findpe + 4;
		}
	}
	else
	{
		bool gq = false;
		bool script = false;
		int l = htmlp.length();
		int countnbsp = 0;
		for (int i = 0; i < l; i++)
		{
			if (htmlp[i] == '&')
			{
				if (htmlp.indexOf("&nbsp;",i)==i)
				{
					i += 5;
					countnbsp = (countnbsp + 1) % 4;
					if (countnbsp == 0)
					{
						Fout << '\r' << '\n';
					}
					continue;
				}
			}
			if (htmlp[i] == '<')
			{
				gq = true;
				if (htmlp.indexOf("<script", i, Qt::CaseInsensitive) == i || htmlp.indexOf("<style", i, Qt::CaseInsensitive)==i || htmlp.indexOf("<a", i, Qt::CaseInsensitive) == i)
				{
					script = true;
				}

				if (htmlp.indexOf("<br>", i, Qt::CaseInsensitive) == i || htmlp.indexOf("</br>", i, Qt::CaseInsensitive) == i || htmlp.indexOf("<p", i, Qt::CaseInsensitive) == i)
				{
					Fout << '\r' << '\n';
				}

			}

			if (!gq && !script)
			{
				Fout << htmlp[i];
			}

			if (htmlp[i] == '>')
			{
				gq = false;
				if (htmlp.lastIndexOf("</script>", i, Qt::CaseInsensitive) == i - 8 || htmlp.lastIndexOf("</style>", i, Qt::CaseInsensitive) == i - 7 || htmlp.lastIndexOf("</a>", i, Qt::CaseInsensitive) == i - 3)
				{
					script = false;
				}
			}
		}
	}
	file.close();
	return true;
}


FileMaker::~FileMaker()
{
}
