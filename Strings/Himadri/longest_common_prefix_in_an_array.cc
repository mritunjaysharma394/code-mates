#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	//code
	int t, n, i;
	cin >> t;
	while(t--) {
	    cin >> n;
	    vector<string> input;
	    string str;
	    for(i=0; i<n; i++) {
	        cin >> str;
	        input.push_back(str);
	    }
	    sort(input.begin(), input.end());
			vector<string>::iterator itr;
	    /*for(itr=input.begin(); itr!=input.end(); ++itr) {
	        cout << *itr << ' ';
	    }*/
			int diff = min(input[0].size(), input[n-1].size()), flag=0;
			string var1 = input[0], var2 = input[n-1];
			for(i=0; i<diff; i++) {
				if(var1[i] == var2[i]) flag = 1;
				else break;
			}
			if(flag==1) cout << var2.substr(0,i) << endl;
			else cout << -1 << endl;
	}
	return 0;
}
