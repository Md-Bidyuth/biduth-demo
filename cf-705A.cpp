#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n==1)
        cout<<"I hate it";
    else
    {


    for(int i=1; i<=n; i++)
    {   if(i%2==0)
    {
        cout<<"I hate ";
    }
    else {
        cout<<"that ";
        cout<<"I love ";
    }

    }
         cout<<"it";
    }

    return 0;
}
