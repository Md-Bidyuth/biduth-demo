#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
   int n;
   cin>>n;
   int p,v,t;
   int sum=0;
   for (int i=0; i<n; i++){
    cin>>p>>v>>t;
    if(p+v+t>=2)
        sum++;
   }
   cout<<sum;
    return 0;
}
