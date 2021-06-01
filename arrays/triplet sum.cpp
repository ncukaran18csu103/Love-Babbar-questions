//triplet sum array
#include<iostream>
using namespace std;
int main()
{
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    int k;cin>>k;
    for(int i=0;i<n;i++)
    {
        for(int i1=i+1;i1<n;i1++)
        {
            for(int i2=i1+1;i2<n;i2++)
            {
                if((arr[i]+arr[i1]+arr[i2])==k )
                {
                    cout<<"yes"<<arr[i]<<" "<<arr[i1]<<" "<<arr[i2];
                }
            }
        }
    }
}