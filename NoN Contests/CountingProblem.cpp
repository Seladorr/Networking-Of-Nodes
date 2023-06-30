#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
 
int main()
{
    int t;cin>>t;
    while(t--)
    {
        string str;cin>>str;
        int counta=0,countb=0,countc=0;
        for(int i=0;i<str.size();i++){
            if(str[i]=='A') counta++;
            else if(str[i]=='B')    countb++;
            else    countc++;
        }   
        if(counta+countc==countb)   cout<<"YES\n";
        else    cout<<"NO\n";
    }
}