#include<iostream>
#include<list>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long int n;
        cin>>n;
        long int arr[n];
        for(int i=0;i<n;++i){
            cin>>arr[i];
        }
        list<int> l = {};
        long int max = arr[n-1];
        l.push_back(max);
        for(int i = n-2;i>=0;--i){
            if(max <= arr[i]){
                l.push_front(arr[i]);
                max = arr[i];
            }
        }
        list<int> :: iterator it;
        for(it = l.begin();it != l.end(); ++it){
            cout<<*it<<" ";
        }
        cout<<endl;
    }
    return 0;
}