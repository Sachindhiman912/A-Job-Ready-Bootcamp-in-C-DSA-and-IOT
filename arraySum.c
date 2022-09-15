#include<stdio.h>

int main()
{
    int a[10],i,even=0,odd=0;
    printf("Enter 10 numbers :");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    
    for(i=0;i<10;i++)
    {
        if(a[i]%2==0)
        {
            even=even+a[i];
        }
        else
        {
            odd=odd+a[i];
        }
    }
    printf("even sum =%d",even);
    printf("\n");
    printf("odd sum =%d",odd);
    
    return 0;
}