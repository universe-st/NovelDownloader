#include "noveldownload.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	NovelDownload w;
	w.show();
	return a.exec();
}
