#include<iostream>
#include <cstring>
 using namespace std;

int main(){

	#ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
	#endif
        int a,b;
         cin>>a>>b;
            int i;
         for(i=0; i<100; i++){
            a=a*3;
            b=b*2;
            if(a>b){
                break;
            }


         }
         cout<<i+1;

	return 0;
}

