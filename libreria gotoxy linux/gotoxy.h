#ifndef GOTOXY_H
#define GOTOXY_H
#include <stdio.h>



void gotoxy(int x, int y)
{
	printf("%c[%d;%df",0x18,x,y);
}
#endif
