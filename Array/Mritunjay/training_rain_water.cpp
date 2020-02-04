#include<bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
   

// function to find the trapped water in between buildings
// arr: input array
// n: size of array
int trappingWater(int arr[], int n){

    int left[n], right[n], sum=0;
    left[0] = arr[0];
    right[n-1] = arr[n-1];
    for(int i=1; i<n-1; i++){ 
        if(left[i-1] > arr[i])
            left[i] = left[i-1];
        else
            left[i] = arr[i];
    }
    for(int i=n-2; i>=0; i--){
        if(right[i+1] > arr[i])
            right[i] = right[i+1];
        else
            right[i] = arr[i];
            sum += max(min(right[i], left[i]) - arr[i],0);
    }
    return sum;
    
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