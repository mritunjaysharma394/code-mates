#include <stdio.h>

int main() {
	//code
	int T, n, i, j, inversions;
	scanf("%d",&T);
	while(T--){
	    inversions=0;
	    scanf("%d",&n);
	    int a[n];
	    for(i=0;i<n;i++){
	        scanf("%d",&a[i]);
	    }
	    for(i=0; i<n-1; i++){
	        for(j=i+1; j<n; j++){
	            if(a[i]>a[j]) inversions++;
	        }
	    }
	    printf("%d\n",inversions);
	}
	return 0;
}
