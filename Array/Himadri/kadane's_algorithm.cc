#include <iostream>
using namespace std;

int main() {
	//code
	int T, n, i;
	cin >> T;
	while(T--){
	   cin >> n;
	   int a[n], sum=0, max_sum;
	   for(i=0; i<n; i++) cin >> a[i];
	   max_sum = a[0];
	   for(i=0; i<n;i++) {
	       sum+=a[i];

	       if(sum > max_sum) max_sum = sum;
	       if(sum <0) sum =0;
	   }
	   cout << max_sum <<endl;
	}
	return 0;
}
