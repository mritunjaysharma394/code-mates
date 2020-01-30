#include <iostream>
using namespace std;

int main() {
	int T, n, given_sum, current_sum, index;
	cin >> T;
	while(T--) {
	    cin >> n >> given_sum;
	    int a[n], flag=0;
	    for(int i=0; i<n; i++) {
	        cin >> a[i];
	    }

	    //cout << "Total sum : " << total_sum << endl;
	    index = 0;
	    current_sum = a[index];


	    for(int i=1; i<n; i++){
	        //cout << "i: " << i << "current: " << current_sum << "index: " << index << endl;
	        current_sum+= a[i];

	        while(current_sum > given_sum) {
	           current_sum -= a[index];
	           index++;
	        }
	        if(current_sum == given_sum) {
	            cout << index+1 << " " << i+1 << endl;
	            flag = 1;
	            break;
	        }

	    }

	    if(flag) continue;
	    else cout << "-1" << endl;
	}
	return 0;
}
