#include <iostream>
using namespace std;

int main() {
	//code
	int T, n, i, temp;
	cin >> T;
	while(T--) {
	    cin >> n;
	    long a[n];
	    for(i=0;i <n; i++) {
	        cin >> a[i];
	    }
	    int max_index=n-1, min_index=0, max = a[n-1]+1;
	    for(i=0; i<n; i++) {
	        if(i%2 == 0) {
	            a[i] += (a[max_index] % max) *max;
	            max_index--;
	        }
	        else {
	            a[i] += (a[min_index] % max) * max;
	            min_index++;
	        }

	    }
	    for(i=0; i<n; i++) {
	        //cout << a[i] << " -> " ;
	        a[i] = a[i] /max;
	        cout << a[i] << ' ';
	    }
	    cout << endl;
	}
	return 0;
}
