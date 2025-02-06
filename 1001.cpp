#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fs first
#define se second
#define all(v) v.begin(),v.end()

int main() {
  double n;
  vector<double> v;
  while(cin>>n) {
    v.push_back(n);
  }
  for (int i=v.size()-1;i>=0;i--) {
    printf("%.4f\n",sqrt(v[i]));
  }
}
