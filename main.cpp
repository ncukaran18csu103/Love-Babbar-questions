#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    for(int row=0;row<=n-1;row++)
    {
        for(int col=0;col<=n-1;col++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    cout<<endl<<endl;
    
    for(int row=0;row<=n-1;row++)
    {
        for(int col=0;col<=row;col++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    cout<<endl<<endl;
    for(int row=0;row<=n-1;row++)
    {
        for(int col=n-1;col>=row;col--)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    cout<<endl<<endl;
    for(int row=0;row<=n-1;row++)
    {
        for(int col=n;col>n-row;col--)
        {
            cout<<" ";
        }
        for(int col=0;col<n-row;col++)
        {
            cout<<"*";
        }
        
        cout<<endl;
    }
    cout<<endl;
    for(int row=0;row<=n-1;row++)
    {
        for(int col=0;col<n-row-1;col++)
        {
            cout<<" ";
        }
        for(int col=n-row;col<=n;col++)
        {
            cout<<"*";
        }
        
        cout<<endl;
    }
    cout<<endl;
    /*
        *
       **
      ***
     ****
    
    */
    
    for(int i=1;i<=n;i++)
    {
        for(int i1=1;i1<=n;i1++)
        {
            cout<<i;
        }
        cout<<endl;
    }
    cout<<endl;
    for(int i=1;i<=n;i++)
    {
        for(int i1=1;i1<=i;i1++)
        {
            cout<<i1;
        }
        cout<<endl;
    }
    cout<<endl;
    for(int i=1;i<=n;i++)
    {
        for(int i1=i;i1<=n;i1++)
        {
            cout<<i1;
        }
        cout<<endl;
    }
    cout<<endl;
    
    for(int i=1;i<=n;i++)
    {
        for(int i1=i;i1<=n;i1++)
        {
            cout<<i;
        }
        cout<<endl;
    }
    cout<<endl;
    
}
/*OUTPUT*/
/*
5
*****
*****
*****
*****
*****


*
**
***
****
*****


*****
****
***
**
*


*****
 ****
  ***
   **
    *

    *
   **
  ***
 ****
*****

11111
22222
33333
44444
55555

1
12
123
1234
12345

12345
2345
345
45
5

11111
2222
333
44
5

*/
