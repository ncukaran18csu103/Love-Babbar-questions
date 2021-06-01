//maximum of sumarray problem
#include<iostream>
using namespace std;
int main()
{
    int n;cin>>n;int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int sum=1,prev=1;
    for(int i=0;i<n;i++)
    {   
        for(int i1=i+1;i1<n;i1++)
        {
            
            for(int k=i;k<=i1;k++)
            {
                sum=sum*arr[k];
                if(prev<sum)
                {
                    prev=sum;
                }
            }
            sum=1;
        }
    }
    cout<<prev;
}

//2, 3, 4, 5, -1, 0