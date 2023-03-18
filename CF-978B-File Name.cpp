
#include<iostream>
#include<bits/stdc++.h>
 using namespace std;

int main(){

	#ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
	#endif

    int n;int ct=0;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0; i<n; i++){
        if(s[i]=='x' && s[i+1]=='x' && s[i+2]=='x')
            ct++;

      }
      cout<<ct;
	return 0;
    }
