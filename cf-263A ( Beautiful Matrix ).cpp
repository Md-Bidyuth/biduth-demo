#include <iostream>
#include<bits/stdc++.h>
#include<cmath>
using namespace std;
 int main(){
 int i,j;int element;
 for(i=1; i<=5 ; i++){
    for (j=1; j<=5 ; j++){
        cin>>element;
        if(element==1)
            cout<<abs(3-i)+abs(3-j);
    }
 }



 return 0;
 }
