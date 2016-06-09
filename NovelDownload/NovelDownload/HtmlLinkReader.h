#pragma once
#if _MSC_VER >= 1600  
#pragma execution_character_set("utf-8")  
#endif  
#include<QString>
#include<QList>
struct HtmlLink
{
	QString text;
	QString link;
};
class HtmlLinkReader
{
public:
	HtmlLinkReader(QList<HtmlLink>& list);
	~HtmlLinkReader();
	bool add(const QString&in);
private:
	QList<HtmlLink>* linklist;
};

