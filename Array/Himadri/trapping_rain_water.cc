// { Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


 // } Driver Code Ends


// function to find the trapped water in between buildings
// arr: input array
// n: size of array
int trappingWater(int arr[], int n){

    // Your code here
    int i, right[n], left[n], water=0;
    right[n-1] = arr[n-1];
    left[0] = arr[0];
    for(i=1; i<n; i++) left[i] = max(left[i-1], arr[i]);
    for(i=n-2; i>=0; i--) right[i] = max(right[i+1], arr[i]);


    for(i=0; i<n; i++) {
        water+=min(left[i],right[i]) - arr[i];
    }

    return water;

}

// { Driver Code Starts.

int main(){

    int t;
    cin >> t;

    while(t--){
        int n;

        cin >> n;

        int a[n];

        for(int i =0;i<n;i++){
            cin >> a[i];
        }

        cout << trappingWater(a, n) << endl;

    }

    return 0;
}  // } Driver Code Ends
