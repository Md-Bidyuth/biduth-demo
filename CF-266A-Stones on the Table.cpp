#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;int ct=0;
     cin>>n;
     string s;
     cin>>s;
     for(int i=0; i<n; i++)
     {  
         if(s[i]==s[i+1])
            ct++;
 
 
     }
    cout<<ct;
 
return 0;
}
