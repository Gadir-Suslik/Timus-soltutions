#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fs first
#define se second
#define all(v) v.begin(),v.end()

int main() {
  int r;
  cin>>r;
  int l=1;
  if (l>r) swap(l,r);
  cout<<(r-l+1)*(l+r)/2<<'\n';
}
