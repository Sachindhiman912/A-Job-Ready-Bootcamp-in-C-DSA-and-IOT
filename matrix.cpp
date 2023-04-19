#include<iostream>
using namespace std;
int main()
{
    int ar[6][6]={-1,-2,-3,-4,-5,-6,-7,-8,-9,-10,-11,-12,-13,-14,-15,-16,-17,-18,-19,-20,-21,-22,-23,-24,-25,-26,-27,-28,-29,-30,-31,-32,-33,-34,-35,-36};
    int i,j,k,l,c,sum=0,count=0,max=-2147483648,temp;
    for(i=0;i<=3;i++)
    {
        for(j=0;j<=3;j++)
        {
            for(k=i;k<=i+2;k++)
            {
                for(l=j;l<=j+2;l++)
                {
                	count++;
                	if(count==4 || count==6)
                	{
                		continue;
					}
                    c=ar[k][l];
                    sum=sum+c;
                    
                }
                
            }
            count=0;
            cout<<sum<<endl;
            temp=sum;
            if(max<temp)
            {
            	max=temp;	
			}
			
            sum=0;
        }
        
    }
    cout<<"MAXIMUM :"<<max;
    	
}
