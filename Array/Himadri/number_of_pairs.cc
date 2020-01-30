#include <iostream>
#include <bits/stdc++.h>
using namespace std;

long Count(int xi, int y[], int n, int ye[]) {
    long count=0;
    if(xi==0) return 0;
    if(xi==1) return ye[0];
    int *i = upper_bound(y, y+n, xi);
    count = (y+n) - i;
    count += (ye[0] + ye[1]);
    if(xi==2) count -= (ye[3] + ye[4]);
    if(xi==3) count += ye[2];
    return count;
}

long CountPairs(int x[], int y[], int ye[], int m, int n) {
    long count=0, i;

    for(i=0;i<m; i++) count+= Count(x[i],y,n, ye);

    return count;
}

int main() {
    int T, m, n, i, j;
    long count;
    cin >> T;
	while(T--) {
	    count = 0;
	    cin >> m >> n;
	    int x[m], y[n], y_exceptions[5] = {0};
	    for(i=0; i<m; i++) cin >> x[i];
	    for(i=0; i<n; i++) {
	        cin >> y[i];
	        if(y[i] < 5) y_exceptions[y[i]]++;
	    }
	    sort(y, y+n);
	    count = CountPairs(x, y, y_exceptions, m, n);
	    cout << count << endl;
	}

	return 0;
}
