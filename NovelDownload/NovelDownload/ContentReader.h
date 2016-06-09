#pragma once
#if _MSC_VER >= 1600  
#pragma execution_character_set("utf-8")  
#endif  
#include"HtmlLinkSearcher.h"
#include<QtNetwork>
class ContentReader:public QObject
{
	Q_OBJECT
public:
	ContentReader(const QString&,QList<HtmlLink>&,const QString&);
	~ContentReader();
	void Read();
	int getCount() { return count; };
signals:
	void Getpage();
private:
	QString _charset;
	HtmlLinkSearcher searcher;
	QNetworkAccessManager* manager;
	int count;
	QString webAddress;
	QString Htmlweb;
private slots:
    void onWebDowned(QNetworkReply*);
};

