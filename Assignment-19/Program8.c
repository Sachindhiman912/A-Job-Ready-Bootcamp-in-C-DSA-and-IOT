#include<stdio.h>
int main()
{
	char s[10][20]={"the","bbs","srkjgb","the","quick","brown","the","fox"};
	char word1[]="the";
	char word2[]="quick";
	int i,w1=-1,w2=-1,min=10000,temp;
	
	
	for(i=0;i<10;i++)
	{
		if(strcmp(s[i],word1)==0)
		{
			w1=i;
		}
		if(strcmp(s[i],word2)==0)
		{
			w2=i;
		}
		if(w1!=-1 && w2!=-1)
		{
			temp=abs(w2-w1);
			if(temp<min)
			{
				min=temp;
			}
		}
	}
	
	printf("%d",min-1);
}
