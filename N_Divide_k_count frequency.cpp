//Given an array of size n and a number k, 
//find all elements that appear more than n/k times
#include<iostream>
using namespace std;
int main()
{
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int k;cin>>k;
    int count=0;int real=0;
    for(int i=0;i<n;i++)
    {
        count=0;
        for(int i1=i+1;i1<n;i1++)
        {
            if(arr[i]==arr[i1] && i!=i1)
            {
                count++;
            }
        }
        if(count>=(n/k))
        {
            real++;
        }
    }
    cout<<real;
}
//4, 5, 6, 7, 8, 4, 4 