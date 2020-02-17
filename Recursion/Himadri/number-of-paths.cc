#include <iostream>
using namespace std;

int count_paths(int m, int n){
    if(m==1 || n==1) return 1;
    return count_paths(m-1, n) + count_paths(m, n-1);
}

int main() {
	//code
	int t, m, n;
	cin >> t;
	while(t--){
	    cin >> m >> n;
	    cout << count_paths(m, n) << endl;
	}
	return 0;
}
