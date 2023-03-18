
#include<iostream>
#include<bits/stdc++.h>
 using namespace std;
 
int main(){
 
	#ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
	#endif
  
int n;
cin>>n;
int p,q;int ct=0;
while(n--){
    cin>>p>>q;
    if(p+2<=q)
        ct++;
 
}
cout<<ct;
 
 
 
 
return 0;
  }
