// { Driver Code Starts
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
    int ans = 0, sum = 0, i;
    unordered_map <int, int> umap;
    for(i = 0; i < n; i++)
    {
        if(arr[i] == 0)
        arr[i] = -1;
    }
    umap[0] = -1;
    for(int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
        if(umap.find(sum) != umap.end()){
            ans = max(ans, i - umap[sum]);
        }
        else
            umap[sum] = i;

    }   
return ans;
}