
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int p;
    int sum=0;
    for(int i=0; i<n; i++)
    {
        cin>>p;
        sum=sum+p;
    }
    cout<<(double)sum/n;
    return 0;
}
