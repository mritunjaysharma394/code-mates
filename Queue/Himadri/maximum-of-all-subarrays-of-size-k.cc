#include <iostream>
#include <queue>

using namespace std;

int main() {
	//code
	int t, n, k, i;
	cin >> t;
	while(t--) {
	    cin >> n >> k;
	    int a[n];
	    for(i=0; i<n; i++) cin >> a[i];
	    deque<int> dq;
	    for(i=0; i<k; i++) {
	        while(!dq.empty() && a[i] >= a[dq.back()]) dq.pop_back();
	        dq.push_back(i);
	    }
	    for(i=k;i<n; i++){
	        cout << a[dq.front()] << ' ';
	        while(!dq.empty() && dq.front() <= i-k) dq.pop_front();
	        while(!dq.empty() && a[i]>=a[dq.back()]) dq.pop_back();
	        dq.push_back(i);
	    }

	    cout << a[dq.front()] << endl;
	}


	return 0;
}
