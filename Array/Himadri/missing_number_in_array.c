#include <stdio.h>

int main(){    
    int i,itr, T, N;
	scanf("%d",&T);
	int missing[T];
	for(itr=0; itr<T; itr++){
	    scanf("%d", &N);
	   
	    int arr[N], sum=0, expected_sum=(N*(N+1))/2;
	    for(i=0; i<N-1; i++){
	        scanf("%d",&arr[i]);
	        sum+= arr[i];
	    }
	    
	    missing[itr] = expected_sum - sum;
	    
	   
	}
	
	for(i =0; i<T; i++){
	    printf("%d\n",missing[i]);
	}
	
	return 0;
}
