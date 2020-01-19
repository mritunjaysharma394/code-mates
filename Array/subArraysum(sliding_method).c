#include <stdio.h>

int main() {
	//code
	int T;
	scanf("%d", &T);
	while(T--) {

		long long i,begin,N,target;
		int f = 0;
		scanf("%lld %lld", &N, &target);
		long long *A;
		A = (long long)malloc((N+1)*sizeof(long long));
		

		//input array
		for (i = 1; i<=N; i++) {
			scanf("%lld",&A[i]);
		}

		long long sum = 0;
		i = begin = 1;
		for (i = 1; i<=N;i++){
			sum = sum + A[i];

			while (sum>target){
				sum = sum- A[begin];
				begin++;
			}

			if (sum==target){
				f = 1;
				printf("%lld %lld \n", begin,i);
				break;
			}
		}

		if(f==0)
		{
			printf("-1\n");
		}
	}
}
