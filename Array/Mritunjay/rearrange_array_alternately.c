#include <stdio.h>
#include<stdlib.h>

void rearrange(long long *arr, int N)
{
	long long i,j;
	i = 0;
	j = N-1;
	while(i<j)
	{
		printf("%lld",arr[j--]);
		printf("%lld",arr[i++]);
	}
	if(i==j)
	{
		printf("%lld",arr[i]);
	}
}
int main()
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		long long N,i;
		scanf("%lld",&N);
		long long *arr = (long long*)malloc(N*sizeof(long long));

		for(i=0; i<N; i++)
		{
			scanf("%lld",&arr[i]);

		}
		rearrange(arr,N);
		printf("\n");
		
	}

	return 0;
}