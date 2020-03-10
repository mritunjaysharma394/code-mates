#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long int n;
        cin>>n;
        long int arr[n];
        for(int i=0;i<n;++i)
        {
            cin>>arr[i];
        }
        long int major;
        int count = 0;
        for(int i=0;i<n;++i){
            if(!count){
                major = arr[i];
                count=1;
            }
            else {
                if(major == arr[i]) {
                    ++count;
                }
                else {
                    count--;
                }
            }
        }
        count = 0;
        for(int i=0;i<n;++i){
            if(major == arr[i]){
                count++;
            }
        }
        if(count > (n/2)){
            cout<<major<<endl;
        }
        else {
            cout<<"-1"<<endl;
        }
    }
    return 0;
}