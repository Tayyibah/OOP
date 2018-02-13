#include"Media.h"
using namespace std;

Media::Media()
{
	title = NULL;
}

Media::Media(char * t)
{
	if (t != NULL)
	{
		title = new char[strlen(t) + 1];
		strcpy(title, t);
	}
	else
	{
		title = NULL;
	}
}

Media :: ~Media()
{
	if (title != NULL)
	{
		delete[] title;
		title = NULL;
	}
}