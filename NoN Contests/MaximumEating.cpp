#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
 
int main() {
  ll n;cin>>n;
  vector<ll> v(n);
  for(int i=0;i<n;i++){
    cin>>v[i];
  }
  sort(v.begin(),v.end());
  int count = 0;
  for(int i=0;i<n;i++){
    if(v[i]>=count+1){
        count++;
    }
  }
  cout<<count<<endl;
}