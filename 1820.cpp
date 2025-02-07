#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fs first
#define se second
#define all(v) v.begin(),v.end()

int main() {
  double n,m;
  cin>>n>>m;
  if (m-n>=0) cout<<2<<'\n';
  else cout<<ceil(n/m*2)<<'\n';
}
