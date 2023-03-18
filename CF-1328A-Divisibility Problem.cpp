#include<iostream>
#include<bits/stdc++.h>
 using namespace std;

int main(){

	#ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
	#endif

int t;
cin>>t;
int a,b;
int ct=0;
while(t--){
   cin>>a>>b;
   if(a%b==0)
    cout<<0<<endl;
else {
   int p=a/b;
  cout<<((p+1)*b)-a<<endl;
}
}
return 0;
  }
