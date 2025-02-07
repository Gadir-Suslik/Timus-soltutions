#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fs first
#define se second
#define all(v) v.begin(),v.end()

int main() {
  int a,b,c;
  cin>>a>>b>>c;
  cout<<min({
    a+b+c,a+b-c,a+b*c,
    a-b+c,a-b-c,a-b*c,
    a*b+c,a*b-c,a*b*c,
  })<<'\n';
}
