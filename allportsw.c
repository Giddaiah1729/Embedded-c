#include <REGX51.H>
sfr led=0xa0;
sbit sw=P1^0;
void main()
{
	int i;
	sw=1;
	led=0;
	while(1)
	{
		if(sw==0)
		{
	led=0xFF;
	for(i=0;i<3000;i++);
	led=0x00;
	for(i=0; i<3000;i++);
}

}
	}