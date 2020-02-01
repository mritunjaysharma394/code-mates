#include <iostream>
#include <string>
using namespace std;

int main() {
	//code
	int t;
	string s;
	cin >> t;
	while(t--) {
	    cin >> s;
	    int n = s.length(), start=0, high, low, i, max=1;
	    for(i=1; i<n; i++) {
	        //even length
	        high=i;
	        low = i-1;
	        while(low>=0 && high <n && s[low]==s[high]) {
	            if(high-low+1 > max) {
	                start = low;
	                max = high - low +1;
	            }
	            low--;
	            high++;
	        }

	        //odd length
	        high=i+1;
	        low = i-1;
	        while(low>=0 && high <n && s[low]==s[high]) {
	            if(high-low+1 > max) {
	                start = low;
	                max = high - low +1;
	            }
	            low--;
	            high++;
	        }
	    }
	    cout << s.substr(start, max) << endl;

	}
	return 0;
}
