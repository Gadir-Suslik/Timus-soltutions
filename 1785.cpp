#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fs first
#define se second
#define all(v) v.begin(),v.end()

int main() {
  int n;
  cin>>n;
  if (n>=1000) {
    cout<<"legion\n";
    return 0;
  }
  if (n>=500) {
    cout<<"zounds\n";
    return 0;
  }
  if (n>=250) {
    cout<<"swarm\n";
    return 0;
  }
  if (n>=100) {
    cout<<"throng\n";
    return 0;
  }
  if (n>=50) {
    cout<<"horde\n";
    return 0;
  }
  if (n>=20) {
    cout<<"lots\n";
    return 0;
  }
  if (n>=10) {
    cout<<"pack\n";
    return 0;
  }
  if (n>=5) {
    cout<<"several\n";
    return 0;
  }
  cout<<"few\n";
}
