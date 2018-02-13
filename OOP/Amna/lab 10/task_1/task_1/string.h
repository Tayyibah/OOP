#ifndef STRING_H
#define STRING_H
class myString
{
private:
	char *str;
	int len;
public:
	myString();
	myString(char *n);
	~myString();
	myString(const myString & s);
	void operator &(char n);
	void insertString(int index, char *newstr);
	void display();
};
#endif