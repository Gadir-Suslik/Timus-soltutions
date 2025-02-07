#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fs first
#define se second
#define all(v) v.begin(),v.end()

int main() {
  vector<int> pos('h'+1);
  for (int i='a';i<='h';i++) pos[i]=int(i-'a'+1);
  int n;
  cin>>n;
  while(n--) {
    int sz='h'-'a'+1;
    int cnt=0;
    int i;int j;
    char c;
    cin>>c>>j;
    i=pos[c];
    if (i+1<=sz&&j+2<=sz) {
      cnt++;
    }
    if (i-1>0&&j+2<=sz) {
      cnt++;
    }
    if (i+1<=sz&&j-2>0) {
      cnt++;
    }
    if (i-1>0&&j-2>0) {
      cnt++;
    }
    swap(i,j);
    if (i+1<=sz&&j+2<=sz) {
      cnt++;
    }
    if (i-1>0&&j+2<=sz) {
      cnt++;
    }
    if (i+1<=sz&&j-2>0) {
      cnt++;
    }
    if (i-1>0&&j-2>0) {
      cnt++;
    }
    cout<<cnt<<'\n';
  }
}
