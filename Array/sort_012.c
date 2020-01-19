#include <stdio.h>
#include <stdlib.h>

int main() {
	//code
	int T;
	scanf("%d", &T);
	while(T--) {

		long long i,N;
		scanf("%lld", &N);
		int *A;
		A = (int*)malloc((N+1)*sizeof(int));
		

		//input array
		for (i = 1; i<=N; i++) {
			scanf("%d",&A[i]);
		}

		int freqA[3] = {0};



		for(i=0; i<N; i++){
			freqA[A[i]]++;
		}

		printf("%d \n", freqA[0]);

		for(i=0;i<freqA[0];i++)
		{
			printf("0 ");
		}

		for(i=0;i<freqA[1];i++)
		{
			printf("1 ");
		}

		for(i=0;i<freqA[2];i++)
		{
			printf("2 ");
		}

		printf("\n");
	}
}
