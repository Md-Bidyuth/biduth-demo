
//#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int ct=0,num;
for(int i=0; i<n; i++)
{
    cin>>num;
    if(num==1)
    ct=1;
 
}
if(ct==1)
    cout<<"hard";
else cout<<"easy";
return 0;
}
