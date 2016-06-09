#include "HtmlBookDownloader.h"
#include<QMessageBox>


HtmlBookDownloader::HtmlBookDownloader(QList<HtmlLink>& qlist, const QString&loc, const QString& wh,const QString& u):filemaker(loc,false),list(&qlist),Webhead(wh),Url(u)
{
	count = list->size();
	manager = new QNetworkAccessManager(this);//ÎÞÐèÎö¹¹
	connect(manager, SIGNAL(finished(QNetworkReply*)),
		this, SLOT(onDownloaded(QNetworkReply*)));
}


void HtmlBookDownloader::Download(const QString& charset)
{
	_charset = charset;
	if (list->size() > 0)
	{
		
		QString lk = list->begin()->link;
		if (lk.indexOf("http",0,Qt::CaseInsensitive)!=0)
		{
			if (lk[0] == '/')
				lk = Webhead + lk;
			else
				lk = Url + lk;
		}
		temlk = lk;
		manager->get( QNetworkRequest( QUrl(lk) ) );
		filemaker.setTitle(list->begin()->text);
	}
	else
	{
		emit AllDownloaded();
	}
}

void HtmlBookDownloader::onDownloaded(QNetworkReply*reply)
{
	QTextCodec *codec = QTextCodec::codecForName(_charset.toStdString().c_str());
	passage = codec->toUnicode(reply->readAll());
	reply->deleteLater();
	filemaker.ReadAndWrite(passage);
	emit OneDownloaded(count-(list->size())+1);
	list->removeFirst();
	Download(_charset);
}


HtmlBookDownloader::~HtmlBookDownloader()
{
	
}
