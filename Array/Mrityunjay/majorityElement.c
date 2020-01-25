#include <stdio.h>
#include <stdlib.h>

int main() {
	//code
	int T;
	scanf("%d", &T);
	while(T--) {

		long long i,begin,end,N;
		int f = 0;
		scanf("%lld", &N);
		long long *A;
		A = (long long*)malloc((N+1)*sizeof(long long));
		

		//input array
		for (i = 1; i<=N; i++) {
			scanf("%lld",&A[i]);
		} 

		/*for (i = 1; i<=N; i++) {
			printf("%lld",A[i]);
		}*/

		long long max = A[1];

		for (i = 1; i<=N; i++) {
			if(max<=A[i]){
				max = A[i];
			}
		}

		long long freqA[1000000] = {0};

		for (i = 1; i<=N; i++)
		{
			freqA[A[i]]++;
		}

		for (i = 0; i<=max; i++)
		{
			if(freqA[i]>(N/2))
			{
				printf("%lld\n", i );
				f = 1;
				break;
			}
		}

		if (f==0)
		{
			printf("-1\n");
		}
	}

	return 0;
}
