#include <iostream>
#include <cctype>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string str;
    cin>>str;
    set<char>s;
    for (int i=0; i<n; i++){
    str[i]=tolower(str[i]);
        s.insert(str[i]);}
    int p=s.size();
    if(p==26)
    cout<<"YES";
    else cout<<"NO";


return 0;
}
