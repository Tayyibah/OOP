#ifndef STRING_H
#define STRING_H
class String
{
	char *buff;

public:
	String();
	String(char *n);
	String(const String &s);
	void  setBuff(char *b);
	char* getBuff();
	void  operator =(const String&s);
	~String();
};
#endif