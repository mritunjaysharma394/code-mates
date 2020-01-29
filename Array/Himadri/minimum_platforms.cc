#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
  int t, n, i, j, p, output;
  cin >> t;
  while(t--) {
    cin >> n;
    int a[n], d[n];
    for(i=0; i<n; i++) cin >> a[i];
    for(i=0; i<n; i++) cin >> d[i];
    sort(a, a+n);
    sort(d, d+n);
    p=1; i=1; j=0; output=p;
    while(i<n && j<n) {
      if(a[i] <= d[j]) {
        p++;
        i++;
        if(p>output) output = p;
      }
      else {
        p--;
        j++;
      }

    }
    cout << output <<endl;
  }
  return 0;
}
