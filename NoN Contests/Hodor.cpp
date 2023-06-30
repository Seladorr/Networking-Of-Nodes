#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++)    cin>>v[i];
        sort(v.begin(),v.end());
        bool flag = true;
        int count_zero = 0; 
        for(int i= 0;i<n;i++)
        {
            if(v[i]==0) count_zero++;
        }
        for(int i =0;i<n-1;i++)
        {
            if(v[i]==v[i+1] && v[i]!=0)
            {
                flag = false;
                break;
            }
        }
        if(count_zero != 0)
            cout<< n-(count_zero)<<endl;
        else if(flag)
            cout<<n+1<<endl;
        else
            cout<<n<<endl;
    }
}