#include<iostream>
using namespace std;
int main()
{
    int a[10],target,i,j;
    for(i=0;i<4;i++)
    {
        cin>>a[i];
    }
    cout<<"target=";
    cin>>target;
    for(i=0;i<4;i++)
    {
        for(j=1;j<4;j++)
        {
            if(a[i]+a[j]==target)
            {
                cout<<i<<j;
            }
        }
    }
}
