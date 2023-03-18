#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,k;int ct=0;
    cin>>n>>k;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=0; i<n; i++)
    {    if(arr[i]!=0){
        if(arr[i]>=arr[k-1])
            ct++;
    }
    }
    cout<<ct;
    return 0;
}
