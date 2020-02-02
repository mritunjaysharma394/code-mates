#include <stdio.h>
#include <stdlib.h>

void profit(int arr[],int n)
{
	int i = 0,a=0,b=0;
	while (i<n-1)
	{
		while(i<n-1 && arr[i+1]<=arr[i])
		{
			i++;
		}
		if(i==n-1)
		{
			break;
		}
		a = i++;
		while(i<n && arr[i]>=arr[i-1])
		{
			i++;
		}
		b = i-1;
		printf("(%d  %d)",a,b);
	}
	if(a==0 && b ==0)
	{
		printf("No profit");
	}
}

int main()
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		int N,i;
		scanf("%d",&N);
		int arr[N];
		for(i=0; i<N; i++)
		{
			scanf("%d",&arr[i]);
		}
		profit(arr,N);
		printf("\n");

	}

	return 0;
}