//given 3 array sorted find the common part in it
#include<iostream>
using namespace std;
int main()
{
    int n,m,p;cin>>n>>m>>p;
    int arr[n],arr1[m],arr2[p];
    int k;
    int arr3[k];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<m;i++)
    {
        cin>>arr1[i];
    }
    for(int i=0;i<p;i++)
    {
        cin>>arr2[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int i1=0;i1<m;i1++)
        {
            if(arr[i]==arr1[i1])
            {
                arr3[k++]=arr[i++];
            }
        }
    }
    for(int i=0;i<p;i++)
    {
        for(int i1=0;i1<sizeof(arr3)-1;i1++)
        {
            if(arr[i]==arr3[i1] && i!=i1)
            {
                cout<<arr3[i1];
            }
        }
    }
}
/*
n1 = 6; A = {1, 5, 10, 20, 40, 80}
n2 = 5; B = {6, 7, 20, 80, 100}
n3 = 8; C = {3, 4, 15, 20, 30, 70, 80, 120}
*/