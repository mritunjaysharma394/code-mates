#include <bits stdc++.h="">
using namespace std;
int main()
{
int t;
cin >> t;
while(t--) {
int n, m = 0; cin >> n; int a[n], d[n], ans = 0;
for(int i = 0; i < n; i++) cin >> a[i];
for(int i = 0; i < n; i++) cin >> d[i];
sort(a, a + n);
sort(d, d + n);
int i = 0, j = 0;
while(i < n && j < n) {
if(a[i] <= d[j]) {
m += 1;
i++;
} else {
m -= 1;
j++;
}
ans = max(ans, m);
}
cout << ans << endl;
}
return 0;
}