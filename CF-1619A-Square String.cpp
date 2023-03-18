#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
int ct=0;
    for (int i=0; i<t; i++)
    {   string s;
        cin>>s;
        int length=s.size();
        if(length%2==1)
            {
            cout<<"No"<<"\n";
            length=0;
            }
        else
        {  if(length>0){
             for(int j=0; j<length;j++)
                {
            if(s[j]==s[j+(length/2)])
                ct++;
                }

        if(ct>0 && ct==length/2)
          {
              cout<<"Yes"<<"\n";
              ct=0;
          }
        else
        {cout<<"No"<<"\n";
        ct=0;
        }
        }
        }
    }


    return 0;
}
