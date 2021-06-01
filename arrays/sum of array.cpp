#include<iostream>
using namespace std;
int main()
{
    int n;cin>>n;
    int arr[n];
    int sum;cin>>sum;
    int count=0;
    for(int i=0;i<n;i++)cin>>arr[i];
    for(int i=0;i<n;i++)
    {
        for(int i1=i;i1<n;i1++)
        {
            if(sum==arr[i]+arr[i1] && i!=i1)
            {
                count++;
            }
        }
    }
    cout<<count;
}
//1, 5, 7, -1, 5