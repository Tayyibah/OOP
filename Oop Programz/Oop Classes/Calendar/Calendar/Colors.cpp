#include"Colors.h"
Colors::Colors()
{
	color= GetStdHandle( STD_OUTPUT_HANDLE );
	startColors = getcolors();
}

Colors::~Colors()
{
	setcolors( startColors );
}
int Colors::getcolors() const
{
	CONSOLE_SCREEN_BUFFER_INFO csbi;
	GetConsoleScreenBufferInfo( color, &csbi );
	return csbi.wAttributes;
}
void Colors::setcolors( int colors )
{
	SetConsoleTextAttribute( color, colors );
}
void Colors::setfg( int color )
{
	int current_colors = getcolors();
	setcolors( (current_colors & 0xF0) | (color & 0x0F) );
}
void Colors::setbg( int color )
{
	int current_colors = getcolors();
	setcolors( ((color & 0x0F) << 4) | (current_colors & 0x0F) );
}
 int Colors::getfg() const 
 {
	 return  getcolors() & 0x0F;
 }
 int Colors::getbg() const
 {
	  return (getcolors() >> 4) & 0x0F;
 }