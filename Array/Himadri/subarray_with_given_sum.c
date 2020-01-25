#include <stdio.h>

int main() {
	//code
	int T, n, s, i, j;
	scanf("%d",&T);
	while(T--)
	{
	    scanf("%d %d",&n, &s);
	    int arr[n], sum=0, flag=1;
	    
	    for(i=0; i<n; i++){
	        scanf("%d",&arr[i]);
	        sum+=arr[i];
	        if(sum==s){
	            printf("%d %d\n",1, i+1);
	            flag = 0;
	            break;
	        }
	    }
	    
	    int start=0; sum=arr[0];
	    
	    if(flag){
	        for(i=1; i<=n; i++){
	            //printf("start=%d sum = %d\n",start, sum);
	            while(sum>s && start < i-1){
	                sum -= arr[start++];
	            }
	            if(sum==s){
	                printf("%d %d\n",start+1, i);
	                flag =0;
	                break;
	            }
	            
	            sum+=arr[i];
	    }
	    }
	    
	    
	    if(flag) printf("-1\n");
	    
	    
	}
	return 0;
}
