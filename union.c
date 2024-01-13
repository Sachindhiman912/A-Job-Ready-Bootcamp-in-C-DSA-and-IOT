#include<stdio.h>
union demo
{
	int i;
	char ch[2];
};
int main()
{
	union demo a;
	a.i=32770;
	printf("%d\n",a.i);
	printf("%d %d %d %d",a.ch[0],a.ch[1],a.ch[2],a.ch[3]);
}
