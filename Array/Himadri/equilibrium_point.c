
int main() {
	//code
	int T, n, i, j;
	scanf("%d",&T);
	while(T--){
	    scanf("%d",&n);
	    int arr[n], lsum[n], rsum[n], output;
	    for(i=0; i<n; i++){
	        scanf("%d",&arr[i]);
	        lsum[i] = arr[i];
	        rsum[i] = arr[i];
	    }
	    
	    if(n>=2){
	        for(i=1; i<n ;i++){
	            lsum[i]+=lsum[i-1];
	            //rsum[j]+=rsum[j+1];
	        }
	        for(j=n-2; j>=0 ;j--){
	            //lsum[i]+=lsum[i-1];
	            rsum[j]+=rsum[j+1];
	        }
	        
	        output = -1;
	        for(i=0;i<n;i++){
	            //printf("i = %d val = %d lsum = %d   rsum = %d\n",i,arr[i], lsum[i], rsum[i]);
	            if(lsum[i]==rsum[i]) output = i+1;
	        }
	    }
	    else output = n;
	    
	    printf("%d\n",output);
	    
	}
	return 0;
}
