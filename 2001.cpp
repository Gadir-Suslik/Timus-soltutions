#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fs first
#define se second
#define all(v) v.begin(),v.end()

int main() {
  int a[3],b[3];
  for (int i=1;i<=3;i++) cin>>a[i-1]>>b[i-1];
  int diff=a[1]-a[0];
  cout<<b[2]-diff-b[1]<<" "<<diff<<'\n';
}
