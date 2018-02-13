#ifndef STRING_H
#define STRING_H
class MyString
{
	char *str;
	int strLength;
public:
	MyString();
	MyString(const char *);

	MyString(MyString &s);

	void operator = ( MyString&);

	void display();

	int getLength();

	~MyString();

	bool operator == (const MyString&) const;
	bool operator != (const MyString&) const;
	bool operator <= (const MyString&) const;
	bool operator < (const MyString&) const;
	bool operator >= (const MyString&) const;
	bool operator > (const MyString&) const;

	void operator + (const MyString&) const;

	void operator += (const MyString&);
};
#endif