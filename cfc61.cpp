
#include "bits/stdc++.h"
using namespace std;

int main() {
  long long n, k;
  cin >> n >> k;
  map<long long, long long> mp;
  long long go = 0;
  for (long long i = 0; i < n; i++) {

    long long a, b;
    cin >> a >> b;
    go += b;
    mp[a + 1] -= b;
  }
  for(auto u: mp)
    cout<<"     "<<u.first<<"   "<<u.second<<endl;
  if (go <= k) {
    cout << 1 << endl;
    return 0;
  }
  for (auto v : mp) {
    go += v.second;
    cout<<"Go"<<go<<endl;
    if (go <= k) {
      cout << v.first << endl;
      return 0;
    }
  }
}
