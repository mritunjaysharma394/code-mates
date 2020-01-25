#include <stdio.h>
#include <stdlib.h>

int main() {
	//code
	int T;
	scanf("%d", &T);
	while(T--) {

		long long i,d,N;
		int f = 0;
		scanf("%lld %lld", &N, &d);
		long long *A;
		A = (long long*)malloc((N+1)*sizeof(long long));

		for (i = 0; i<N; i++){
			scanf("%lld",&A[i]);
		}

		for (i = d ; i<N; i++){
			printf("%lld ",A[i]);
		}

		for (i = 0; i<d; i++){
			printf("%lld ",A[i]);
		}

		printf("\n");

	}
	return 0;
}