#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fs first
#define se second
#define all(v) v.begin(),v.end()

int main() {
  ll n,res=0,sum=0;
  cin>>n;
  vector<ll> arr(n+1,0),dp(2e6+5,0);
  for (int i=1;i<=n;i++) cin>>arr[i],sum+=arr[i];
  dp[0]=1;
  res=sum;
  sum/=2;
  for (int i=1;i<=n;i++) {
    for (int j=sum;j>=arr[i];j--) {
      dp[j]|=dp[j-arr[i]];
    }
  }
  for (int i=sum;i>=0;i--) {
    if (dp[i]) {
      cout<<abs(res-2*i)<<'\n';
      return 0;
    }
  }
}
