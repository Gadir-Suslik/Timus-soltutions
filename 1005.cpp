#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fs first
#define se second
#define all(v) v.begin(),v.end()

int main() {
  ll n,res=1e18;
  cin>>n;
  vector<ll> arr(n+1,0);
  for (int i=1;i<=n;i++) cin>>arr[i];
  for (int i=0;i<(1<<n);i++) {
    ll sum=0;
    for (int j=0;j<n;j++) {
      if (i&(1<<j)) {
        sum+=arr[j+1];
      } else sum-=arr[j+1];
    }
    res=min(res,abs(sum));
  }
  cout<<res<<'\n';
}
