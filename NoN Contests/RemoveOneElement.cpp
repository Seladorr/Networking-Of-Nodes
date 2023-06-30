#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
 
int main()
{
        int n;cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        int dif1 = v[n-1]-v[1];
        int dif2 = v[n-2]-v[0];
        int diff = min(dif1,dif2);
        cout<<diff<<endl;
}