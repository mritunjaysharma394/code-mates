#include <stdio.h>

int main() {
	//code
	int T, n, i;
	scanf("%d",&T);
	while(T--){
	    scanf("%d",&n);
	    //elements are in range 0-3. Hence we can use counting sort!
	    int arr[n], output[n], count[3]={0,0,0};
	    for(i=0; i<n; i++){
	        scanf("%d",&arr[i]);
	        count[arr[i]]++;
	    }
	    
	    for(i=1; i<3;i++){
	        count[i]+=count[i-1];
	    }
	    
	    for(i=0; i<n; i++){
	        output[count[arr[i]]-1] = arr[i];
	        count[arr[i]]--;
	    }
	    
	    for(i=0; i<n; i++){
	        printf("%d ",output[i]);
	    }
	    
	    printf("\n");
	}
	return 0;
}
