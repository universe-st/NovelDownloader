#if _MSC_VER >= 1600  
#pragma execution_character_set("utf-8")  
#endif  
#include "noveldownload.h"
#include<QMessageBox>
NovelDownload::NovelDownload(QWidget *parent)
	: QMainWindow(parent),downloader(nullptr),reader(nullptr),charset("utf8")
{
	ui.setupUi(this);
	connect(ui.downloadButton, SIGNAL(clicked()), this, SLOT(onBtClicked()));
	ui.progressBar->setRange(0, 100);
}

void NovelDownload::onBtClicked()
{
	Url=ui.Urlget->text();
	charset=ui.setCLineEdit->text();
	if (Url != "")
	{
		int end = Url.indexOf('/', Url.indexOf("//") + 2);
		Urlhead = Url.left(end);
		download();
	}
}

void NovelDownload::download()
{
	if (reader != nullptr)
	{
		delete reader;
	}
	ui.textBrowser->append("正在下载目录");
	reader = new ContentReader(Url, list,charset);
	connect(reader, SIGNAL(Getpage()), this, SLOT(onContentIsEnd()));
}

void NovelDownload::onContentIsEnd()
{
	ui.textBrowser->append("目录下载完成，正在分析");
	reader->Read();
	_countp = list.size();
	ui.textBrowser->append("分析完成，总共"+tr("%1").arg(_countp)+"章");
	
	if (_countp == 0)
	{
		QMessageBox::information(this, "找不到标题", "该页面编码可能不为utf8，请查看网页源代码中的charset设置项，并将其填在本工具右上角的框中再次下载");
		ui.textBrowser->append("该页面编码可能不为utf8，请查看网页源代码中的charset设置项，并将其填在本工具右上角的框中再次下载");
	}

	if (downloader != nullptr)
	{
		delete downloader;
	}
	downloader = new HtmlBookDownloader(list, "下载.txt", Urlhead,Url);
	
	downloader->Download(charset);

	downloader->setDownStyle(ui.checkBox->isChecked());

	connect(downloader, SIGNAL(OneDownloaded(int)), this, SLOT(whenOneIsDownloaded(int)));
	connect(downloader, SIGNAL(AllDownloaded()), this, SLOT(whenDownloadedEnd()));
}

void NovelDownload::whenOneIsDownloaded(int i)
{
	ui.progressBar->setValue(i*100/ _countp);
	if(!list.empty())
	ui.textBrowser->append("下载章节："+ tr("%1").arg(i) + "章 "+list.begin()->text);
}

void NovelDownload::whenDownloadedEnd()
{
	ui.textBrowser->append("下载完成\n感谢您的使用！By_一匡天下 \nQt编程交流QQ群：530679704。");
	QMessageBox::information(this, "下载完成", "感谢您的使用！By_一匡天下 \nQt编程交流QQ群：530679704");
}

NovelDownload::~NovelDownload()
{
	if (downloader != nullptr)delete downloader;
	if (reader != nullptr)delete reader;
}
