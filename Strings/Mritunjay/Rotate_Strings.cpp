#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool checkShift(string &a, string &b) {
    
    string p1 = a.substr(2, a.size());
    string p2 = a.substr(0, 2);
    string left = p1 + p2;
    if (left == b) 
        return true;
    
    
    p1 = a.substr(a.size()-2, a.size());
    p2 = a.substr(0, a.size()-2);
    string right = p1 + p2;
    if (right == b) r
        eturn true;
    return false;
}

int main() {
	int t;  cin >> t;
	cin.ignore();
	while(t--) {
	    string a;   getline(cin, a);
	    string b;   getline(cin, b);
	    cout << checkShift(a, b) << "\n";
	}
	return 0;
}