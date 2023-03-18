#include<iostream>
#include<bits/stdc++.h>
 using namespace std;

int main(){

	#ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
	#endif


    string str;
    cin>>str;
    set<char>s;
    for(int i=0; i<str.size(); i++)
        s.insert(str[i]);

    if((s.size())%2==0)
        cout<<"CHAT WITH HER!";
    else cout<<"IGNORE HIM!";
	return 0;
}
