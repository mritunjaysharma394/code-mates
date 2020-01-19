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

		begin = 1;
		end = N;

		long long sum_f = 0;
		long long sum_b = 0;
        long long sum = 0;
        for(i=1; i<=N; i++)
        {
        	sum = sum + A[i];
        }

        for(i=1; i<=N; i++)
        {
        	
        	sum = sum - A[i];
        	if (sum_f == sum){

        		f = 1;
        		printf("%lld\n", i);
        		break;
        	}
        	sum_f = sum_f + A[i];
        }
		
		/*if(N==1)
	    {
	        printf("1\n");
	        f=1;    
	    }*/

		if (f==0){

			printf("-1\n");

		}
	}

	return 0;
}
		
