#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    string t;
    cin>>t;
    string r;
    for(int i=0; i<(s.size())/2; i++)
         swap(s[i],s[s.size()-1-i]);

    if(s==t) cout<<"YES";
    else cout<<"NO";

    return 0;

}
