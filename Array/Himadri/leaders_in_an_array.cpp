using namespace std;

int main() {
	//code
	int T,n,i;
	scanf("%d",&T);
	while(T--){
	    scanf("%d",&n);
	    int a[n];
	    bool leader[n];
	    for(i=0;i<n;i++){
	        scanf("%d",&a[i]);
	        leader[i]=false;
	    }
	    
	    int max = a[n-1];
	    leader[n-1] = true;
	    
	    for(i=n-2; i>=0; i--){
	        
	        if(a[i]>= max){
	            max = a[i];
	            leader[i]=true;
	        }
	    }
	    
	    for(i=0;i<n;i++){
	        if(leader[i]) printf("%d ",a[i]);
	    }
	    
	    printf("\n");
	}
	return 0;
}
