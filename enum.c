#include<stdio.h>
enum week{mon,tue,wed,thu,fri,sat,sun};
enum state{working=1,failed=0,freezed=0};
enum state curstate=2;
enum day{sunday=1,monday,tuesday=4,wednesday,thursday=8,friday,saturday};
int main()
{
	enum week day;
	day=wed;
	printf("%d\n",day);
	int i;
	for(i=mon;i<=sun;i++)
	{
		printf("%d  ",i);
	}
	printf("\n%d %d %d\n",working,failed,freezed);
	(curstate==working)? printf("working\n") : printf("not working\n");
	printf("%d %d %d %d %d %d %d",sunday,monday,tuesday,wednesday,thursday,friday,saturday);
}

