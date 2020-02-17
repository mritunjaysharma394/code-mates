#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t, n, m, i;
	cin >> t;
	while(t--){
	    cin >> n >> m;
	    int a1[n], a2[m];
	    for(i=0; i<n; i++) cin >> a1[i];
	    for(i=0; i<m; i++) cin >> a2[i];
	    map<int, int> mp;
	    for(i=0; i<n; i++) mp[a1[i]]++;
	    for(i=0; i<m; i++){
	        if(mp.find(a2[i])!=mp.end()) {
	            while(mp[a2[i]]>0) {
	                cout << a2[i] << ' ';
	                mp[a2[i]]--;
	            }
	            mp.erase(a2[i]);
	        }
	    }
	    for(map<int, int> :: iterator itr=mp.begin(); itr!=mp.end(); itr++){
	        while(itr->second !=0) {
	            cout << itr->first << ' ';
	            itr->second--;
	        }
	    }
	    cout << endl;
	}
	return 0;
}
