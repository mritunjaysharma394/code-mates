#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin >> t;
	while(t--) {
	    long long int n, i;
	    stack<long long int> s;
	    cin >> n;
	    long long int a[n], next_max[n];
	    for(i=0; i<n; i++) cin >> a[i];
	    for(i=n-1; i>=0; i--) {
	        while(!s.empty() && a[i] >= s.top()) s.pop();
	        if(s.empty()) next_max[i] = -1;
	        else next_max[i] = s.top();
	        s.push(a[i]);
	    }

	   for(i=0; i<n; i++) cout << next_max[i] << ' ';
	   cout << endl;

	}
	return 0;
}
