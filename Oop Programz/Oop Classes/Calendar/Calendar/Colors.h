#ifndef COLORS_H
#define COLORS_H
#include <windows.h>
#include <conio.h>

class Colors
{
public:
	  HANDLE color;
	  int startColors;
	  Colors();
	  ~Colors();
	  int getcolors() const;
	  void setcolors( int colors );
	  void setfg( int color );
	  void setbg( int color );
	  int getfg() const ;
	  int getbg() const;
  };
#endif