#include<iostream>
 using namespace std;

int main(){

	#ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
	#endif

     string s;
     cin>>s;
     for(int i=0; i<s.size(); i++){
        if(s[0]>=97 || s[0]<=122)
            s[0]=toupper(s[0]);
     }

        cout<<s;

	return 0;
}
