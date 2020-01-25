#include <cmath>
#include <bits/stdc++.h>

using namespace std;

int main() {
	int T, X, Y, i, j;
	scanf("%d",&T);
	while(T--){
	    
	    scanf("%d %d",&X, &Y);
	    
	    int a1[X], a2[Y];
	    
	    //scan the first array
	    for(i=0;i<X; i++){
	        scanf("%d",&a1[i]);
	    }
	    //scan the second array
	    for(i=0;i<Y; i++){
	        scanf("%d",&a2[i]);
	    }
	    
	    int n = X+Y, gap = ceil(n/2);
	    
	    while (gap >= 1){
	        
	        //printf("gap = %d\n",gap);
	       
	        for(i=0; i<X+Y; i++){
	            
	            //printf("i=%d\n",i);
	            
	            if(i<X && i+gap<X && a1[i]>a1[i+gap]) {
                    swap(a1[i],a1[i+gap]);
                
	                //printf("c1 swapped %d and %d\n",a1[i], a1[i+gap]);
	            }
	            else if(i<X && i+gap>=X && i+gap-X<Y && a1[i]>a2[i+gap-X]){
	                swap(a1[i],a2[i+gap-X]);
	             
	                //printf("c2 swapped %d and %d\n",a1[i],a2[i+gap-X]);
	            }
	            else if(i>=X && i+gap-X<Y && a2[i-X]>a2[i+gap-X]){
	                swap(a2[i-X],a2[i+gap-X]);
	              
	                //printf("c3 swapped %d and %d\n",a1[i-X], a2[i+gap-X]);
	                    
	            }
	            else continue;
	            
	       }
	       if(gap<=3) gap--;
	       else gap = gap/2;
	    }
	    
	    
	    //printf("Printing arrays\n");
	    
	     
	    //print the first array
	    for(i=0;i<X; i++){
	        printf("%d ",a1[i]);
	    }
	    
	    //print the second array
	    for(i=0;i<Y; i++){
	        printf("%d ",a2[i]);
	    }
	    
	    printf("\n");
	    
	}
	return 0;
}
