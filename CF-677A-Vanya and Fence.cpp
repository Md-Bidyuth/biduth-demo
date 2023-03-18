#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
   int n,h;
   cin>>n>>h;
   int ct=0;
   int a;
   for(int i=0; i<n; i++){
  cin >> a;
  if(a>h)
    ct=ct+2;
  else ct++;
   }

  cout<<ct;


return 0;
}
