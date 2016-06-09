#pragma once
#include<QFile>
#include<QTextStream>
class FileMaker
{
public:
	FileMaker(const QString&,bool);
	void setTitle(const QString&);
	bool ReadAndWrite(const QString&);
	void setStyle(bool a) { downstyle = a; };
	~FileMaker();
private:
	QFile file;
	QString title;
	bool downstyle;
};

