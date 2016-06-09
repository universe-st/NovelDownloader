#pragma once
#include"FileMaker.h"
#include"HtmlLinkReader.h"
#include<QtNetwork>
class HtmlBookDownloader:public QObject
{
	Q_OBJECT
public:
	HtmlBookDownloader(QList<HtmlLink>&,const QString&,const QString&,const QString&);
	void setDownStyle(bool a) { filemaker.setStyle(a); };
	void Download(const QString&);
	~HtmlBookDownloader();
signals:
	void OneDownloaded(int);
	void AllDownloaded();
private:
	QString _charset;
	QString temlk;
	QString Webhead;
	QString Url;
	FileMaker filemaker;
	QString passage;
	QList<HtmlLink>* list;
	int count;
	QNetworkAccessManager* manager;
private slots:
	void onDownloaded(QNetworkReply*);
};

