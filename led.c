#include <REGX51.H>
sbit led=P1^0;
//sbit sw=P2^7;
void main()
{
	while(1)
	{
		led=~led;
	}
		
}
