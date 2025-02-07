#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fs first
#define se second
#define all(v) v.begin(),v.end()

int main() {
  int a,b;
  cin>>a>>b;
  a++,b++;
  cout<<((a&1||!(b&1))?"yes\n":"no\n");
}
