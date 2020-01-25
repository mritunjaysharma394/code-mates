#include <bits/stdc++.h>
using namespace std;

int maxLen(int arr[], int n);

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		cout<<maxLen(a,n)<<endl;
		
	}
	return 0;
}// } Driver Code Ends
/*You are required to complete this method*/
int maxLen(int arr[], int n)
{
//Your code here
    int i, j, sum, length = 0;
    for(i=0; i<n; i++){
        sum=0;
        //printf("starting at postition %d\n",i);
        for(j=i; j<n; j++){
            if(arr[j]==0) sum -= 1;
            else sum += arr[j];
            if(sum==0 && length < abs(i-j) ) length = abs(i-j);
            //printf("comparing till position %d sum=%d len=%d\n",j, sum,length);
        }
    }

    return length==0?0:length+1;

}
