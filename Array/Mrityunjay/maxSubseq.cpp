#include <iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    for(int k=0;k<t;k++){
    int n;
    cin>>n;
    vector<int> arr;
    for(int l=0;l<n;l++){
        int p;
        cin>>p;
        arr.push_back(p);
    }
    int ans[arr.size()];
    ans[0]=arr[0];
    for(int i=1;i<arr.size();i++){
        int maxx=0;
        for(int j=0;j<i;j++){
            if(arr[j]<arr[i] and ans[j]>maxx){
                maxx=ans[j];
            }
            
        }
        ans[i]=arr[i]+maxx;
    }
    int maxx=ans[0];
    for(int i=0;i<arr.size();i++){
        if(ans[i]>maxx){
            maxx=ans[i];
        }

    }
    cout<<maxx<<endl;
}
}