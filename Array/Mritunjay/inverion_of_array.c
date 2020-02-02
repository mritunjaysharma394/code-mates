#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
//Using merge sort 

long long count = 0;
long long merge(long long *arr, long long p, long long mid, long long r)
{
	long long n1,n2,i,j;
	n1 = mid-p+1;
	n2 = r-mid;
	long long L[n1+1],R[n2+1];
	for(i=1;i<=n1;i++)
	{
		L[i] = arr[i+p-1];
	}
	for(i=1;i<=n2;i++)
	{
		R[i] = arr[i+mid];
	}

	L[n1+1] = LONG_MAX;
	R[n2+1] = LONG_MAX; //senitenel value to avoid checking
	i=1,j=1;
	long long k;
	//long long count = 0;
	for (k = p; k<=r; k++)
	{
		if(L[i]<=R[j])
		{
			arr[k] = L[i];
			//count = count + 1;
			i = i+1;
		}
		else
		{
			arr[k] = R[j];
			count = count + (n1-i+1);
			j = j+1;
		}
	}
	return count;
}

void merge_Sort(long long *arr, long long p, long long r)
{
	if(p<r)
	{
		long long mid = (p+r)/2;
		long long count = 0;
		//merge(arr,p,mid,q);
		merge_Sort(arr,p,mid);
		merge_Sort(arr,mid+1,r);
		merge(arr,p,mid,r);
		//return count;
	}
}

long long inv_count(long long *arr, long long N)
{
	count = 0;
	merge_Sort(arr,0,N-1);
	return count;
}


int main()
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		long long N; 
		scanf("%lld",&N);

		long long *arr;
		arr  = (long long*)malloc(N*sizeof(long long));

		for (long long i = 0; i<N;i++)
		{
			scanf("%lld",&arr[i]);
		}

		printf("%lld\n",inv_count(arr,N));

	}

	return 0;
}

