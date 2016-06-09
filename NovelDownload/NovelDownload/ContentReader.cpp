#if _MSC_VER >= 1600  
#pragma execution_character_set("utf-8")  
#endif  

#include "ContentReader.h"
#include<QMessageBox>


ContentReader::ContentReader(const QString&web, QList<HtmlLink>&list,const QString&charset):searcher(list),count(0),webAddress(web),_charset(charset)
{
	manager = new QNetworkAccessManager(this);
	connect(manager, SIGNAL(finished(QNetworkReply*)),
		this, SLOT(onWebDowned(QNetworkReply*)));
	manager->get(QNetworkRequest(QUrl(web)));
}

void ContentReader::onWebDowned(QNetworkReply* reply)
{
	QTextCodec *codec = QTextCodec::codecForName(_charset.toStdString().c_str());
	Htmlweb = codec->toUnicode(reply->readAll());
	reply->deleteLater();
	emit Getpage();
}

ContentReader::~ContentReader()
{
}

void ContentReader::Read()
{
	count = searcher.search(Htmlweb);
}
