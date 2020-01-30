#include <iostream>
using namespace std;

//solution by user divyanshu3490

int main()
 {
	int t;
	cin>>t;
	while(t--){
	    int n,i,j,k,f;
	    cin>>n;
	    int a[n];
	    for(i=0;i<n;i++)
	        cin>>a[i];
	    f=0;
	    for(i=1;i<n;i++){
	        if(a[i-1]<a[i])
	            f=1;
	    }
	    if(f==0){
	        cout<<"No Profit"<<endl;
	        continue;
	    }
	    i=0,j=0;
	    for(k=1;k<n;k++){
	        if(a[k]>=a[k-1]){
	            j=k;
	        }
	        else{
	            if(i>=j)
	                i=k;
	            else{
	                cout<<"("<<i<<" "<<j<<") ";
	                i=k;
	            }
	        }
	    }
	    if(i<j)
	        cout<<"("<<i<<" "<<j<<") ";
	    cout<<endl;
	}
	return 0;
}
