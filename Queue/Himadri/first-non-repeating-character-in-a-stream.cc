#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

int main() {
	//code
	int t, n, i;
	cin >>t;
	while(t--) {
	    cin >> n;
	    char s[n];
      int freq[26] = {0};
	    queue<char> q;
	    for(i=0; i<n; i++) {
        cin >> s[i];
	    }
      for(i=0; i<n; i++) {
        freq[s[i]-'a']++;
        q.push(s[i]);
        while(!q.empty()) {
          if(freq[q.front() - 'a']>1) q.pop();
          else {
            cout << q.front() << ' ';
            break;
          }
        }
        if(q.empty()) cout << -1 << ' ';
      }
	    cout << endl;
	}
	return 0;
}
