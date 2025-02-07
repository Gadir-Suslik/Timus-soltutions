#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fs first
#define se second
#define all(v) v.begin(),v.end()

int main() {
  int n,m,res=0;
  cin>>m>>n;
  for (int i=1;i<=n;i++) {
    int x;cin>>x;
    res+=x;
    res=max(0,res-m);
  }
  cout<<res<<'\n';
}
