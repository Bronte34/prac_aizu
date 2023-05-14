#include <stdio.h>
int main(void)
{
	int s,hour,min,sec;
	scanf("%d",&s);
	hour = s/3600;
	min = s%3600/60;
	sec = s%60;
	printf("%d:%d:%d\n",hour,min,sec);
	return 0;
}

