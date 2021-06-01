//buy and sell
#include<iostream>
using namespace std;
int main()
{
    int n;cin>>n;int arr[n];
    for(int i=0;i<n;i++)
    {cin>>arr[i];}
    int sum=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]<arr[j])
            {
                if(sum<arr[j]-arr[i])
                {
                    sum=arr[j]-arr[i];
                }
            }
        }
    }
    cout<<sum;
}
//7,1,5,3,6,4