#if _MSC_VER >= 1600  
#pragma execution_character_set("utf-8")  
#endif  

#include "HtmlLinkSearcher.h"
#include<QMessageBox>


HtmlLinkSearcher::HtmlLinkSearcher(QList<HtmlLink>&link):reader(link)
{

}

int HtmlLinkSearcher::search(QString &htmlf)
{
	//QMessageBox::information(nullptr, "Test", "Here");
	int count = 0;
	int len = htmlf.length();
	int lastindex = 0;
	while (true)
	{
		int findst = htmlf.indexOf("<a", lastindex);
		if (findst == -1)break;
		int finded = htmlf.indexOf("</a>", findst);
		if (finded == -1)break;
		QString str = htmlf.mid(findst,finded+4-findst);
		bool ret = reader.add(str);
		if (ret)count++;
		lastindex = finded + 4;
	}
	return count;
}


HtmlLinkSearcher::~HtmlLinkSearcher()
{
}
