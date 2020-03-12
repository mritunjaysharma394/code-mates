#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        long int n;
        cin>>n;
        long int arr[n-1];
        long int sum = 0;
        for(int i=0;i<n-1;++i)
        {
            cin>>arr[i];
            sum += arr[i];
        }
        long int total_sum = (n*(n+1))/2;
        cout<<total_sum-sum<<endl;
    }
}