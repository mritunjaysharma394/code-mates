#include <stdio.h>

int main() {
	//code
	int T;
	scanf("%d", &T);
	while(T--) {

		long long i,N;
		scanf("%lld", &N);
		long long *C;
		C = (long long)malloc(N*sizeof(long long));
		

		//input array
		for (i = 1; i<=N-1; i++) {
			scanf("%lld",&C[i]);
		}

		//searching the missing number
	
		//calculate sum
		long long calc_sum = (N*(N+1))/2;
		long long real_sum = 0;

		for (i = 1; i<=N-1; i++) {
			real_sum = real_sum + C[i];
		}

		long long missing_num = calc_sum - real_sum;

		printf("%lld\n", missing_num);
		
	}
	return 0;
}