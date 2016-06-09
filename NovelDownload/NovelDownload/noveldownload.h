#ifndef NOVELDOWNLOAD_H
#define NOVELDOWNLOAD_H
#if _MSC_VER >= 1600  
#pragma execution_character_set("utf-8")  
#endif  

#include <QtWidgets/QMainWindow>
#include "ui_noveldownload.h"

#include"ContentReader.h"
#include"HtmlBookDownloader.h"
#include<QMessageBox>

class NovelDownload : public QMainWindow
{
	Q_OBJECT

public:
	NovelDownload(QWidget *parent = 0);
	~NovelDownload();

private:
	Ui::NovelDownloadClass ui;
	HtmlBookDownloader* downloader;
	ContentReader* reader;
	QList<HtmlLink> list;
	QString Urlhead;
	QString Url;
	void download();
	QString charset;
	int _countp;
private slots:
    void onBtClicked();
	void onContentIsEnd();
	void whenOneIsDownloaded(int);
	void whenDownloadedEnd();
};

#endif // NOVELDOWNLOAD_H
