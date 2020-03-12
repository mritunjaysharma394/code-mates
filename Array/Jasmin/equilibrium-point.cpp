#include<iostream>
#include<list>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long int arr[n];
        list<long int> before, after;
        before.push_back(-1);
        int pos;
        cin>>pos;
        arr[0] = pos;
        for(int i=1;i<n;++i){
            cin>>arr[i];
            if(i>1){
                pos += arr[i-1];
                before.push_back(pos);
            }
            else {
                before.push_back(pos);
            }
        }
        pos = arr[n-1];
        after.push_front(-1);
        for(int i = n-2;i>=0;--i){
            if(i<n-2){
                pos += arr[i+1];
                after.push_front(pos);
            }
            else {
                after.push_front(pos);
            }
        }
        // for(int i=0;i<n;++i){
        //     cout<<arr[i]<<" ";
        // }
        // cout<<endl;
        list<long int> :: iterator it_b;
        list<long int> :: iterator it_a = after.begin();
        // for(it_b = before.begin(); it_b!=before.end(); ++it_b){
        //     cout<<*it_b<<" ";
        // }
        // cout<<endl;
        // for(it_a = after.begin(); it_a!=after.end(); ++it_a){
        //     cout<<*it_a<<" ";
        // }
        // cout<<endl;
        if(n==1){
            cout<<"1"<<endl;
        }
        else if(n==2){
            cout<<"-1"<<endl;
        }
        else {
            int flag = 0, i=0;
            for(it_b=before.begin(); it_b!=before.end();++it_b){
                i++;
                if(*it_b == *it_a){
                    flag=1;
                    cout<<i<<endl;
                    break;
                }
                it_a++;
            }
            if(!flag){
                cout<<"-1"<<endl;
            }
        }
    }
    return 0;
}