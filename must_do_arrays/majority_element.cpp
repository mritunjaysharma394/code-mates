#include <cmath>
using namespace std;

int main() {
	int T, size, mi, i, j, flag, count;
	scanf("%d",&T);
	while(T--){
	    scanf("%d",&size);
	    int a[size];
	    for(i=0; i<size;i++){
	        scanf("%d",&a[i]);
	    }
	    
	    count=1; mi=0;
	    for(i=1; i<size; i++){
	        if(a[mi]==a[i]) count++;
	        else count--;
	        if(count==0){mi = i;count =1;}
	        //printf("i=%d c=%d\n",i,count);
	    }
	    
	    count=0;
	    for(i=0;i<size; i++){
	        if(a[mi]==a[i]) count++;
	        
	    }
	    
	    //printf("c = %d m =%d\n", count, mi);
	    
	    flag=0;
	    if(count>size/2)flag=1;
	    
	    if(flag) printf("%d\n",a[mi]);
	    else printf("-1\n");
	    
	}
	return 0;
}
