#pragma once
#if _MSC_VER >= 1600  
#pragma execution_character_set("utf-8")  
#endif  

#include"HtmlLinkReader.h"
class HtmlLinkSearcher
{
public:
	HtmlLinkSearcher(QList<HtmlLink>&);
	int search(QString&);
	~HtmlLinkSearcher();
private:
	HtmlLinkReader reader;
};

