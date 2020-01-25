#include <iostream>
using namespace std;

int main() {
	int m,n,t;
	cin>>t;
	for (int c=0;c<t;c++){
	    cin>>m;
	    cin>>n;
	    int* rows = new int[m]();
	    int* cols = new int[n]();
	    for (int i=0;i<m;i++){
            for (int j=0;j<n;j++){
                int temp;
                cin>>temp;
                if (temp>0){
                    rows[i]=1;
                    cols[j]=1;
                }
            }
	    } 
	    for (int i=0;i<m;i++){
            for (int j=0;j<n;j++){
                if (rows[i]==1 || cols[j]==1){
                    cout<<"1 ";
                }
                else{
                    cout<<"0 ";
                }
            }
            cout<<endl;
	        
	    }
	    
	    delete[] rows;
	    delete[] cols;
	}

	return 0;
}