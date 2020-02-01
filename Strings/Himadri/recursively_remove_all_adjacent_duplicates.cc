#include <iostream>
#include <string>
using namespace std;

string RemoveDuplicates(string s, int n, char last_char, int flag) {
	int duplicate_check=0;
	if(s.empty() || flag==0) return s;
	else if(n==1 && last_char==s[0]) return "\0";
	else {
		char removed;
		int i=0, j;
		while(i<n) {
			//cout << endl << "beginning i= " << i << ' ' << s << endl;
			if(s[i]==s[i+1]) {
				j=i+1;
				while(s[i]==s[j]) j++;
				removed = s[i];
				//cout << endl << "before removal i= " << i << ' ' << s << endl;
				//cout << "j " << j << " diff " << j-i << endl;
				s.erase(i,j-i);
				//cout << endl << "after removal i= " << i << ' ' << s << endl;
				n-=j-i;
				duplicate_check = 1;
			}
			else {
				i++;
				//cout << endl << "else i= " << i << ' ' << s << endl;
			}
		}

		if(duplicate_check==1) return RemoveDuplicates(s,n, removed, 1);
		else return s;

	}

}

int main() {
	//code
	int t;
	cin >> t;
	while(t--) {
	    string s;
	    cin >> s;
	    cout << RemoveDuplicates(s,s.length(),'\0', 1) << endl;
	}
	return 0;
}
