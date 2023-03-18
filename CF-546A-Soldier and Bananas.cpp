#include<iostream>
#include<bits/stdc++.h>
 using namespace std;

int main(){


    int k,n,w;
    int c=1,sum=0;
    cin>>k>>n>>w;
    for(int i=1; i<=w; i++){
        c=k*i;
         sum=sum+c;
    }
    if(sum<=n)
        cout<<0;
    else
      cout<<sum-n;
    return 0;
}
