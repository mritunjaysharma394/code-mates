#include <iostream>
using namespace std;

long long kadane(long long arr[], long long n){
	long long curMax,gMax;
	curMax=arr[0];
	gMax = arr[0];
	for (long long i = 1; i<n; i++){
		curMax=max(arr[i], curMax+arr[i]);
		gMax=max(curMax,gMax);
	}

	return gMax;
}

int main(){
	long long T;
	cin>>T;
	while (T--){
		long long N; 
		long long A[1000000];
		cin>>N;
		for(long long i = 0; i<N; i++){
			cin>>A[i];
		}
		cout<<kadane(A,N)<<endl;

	}

	return 0;
	
}