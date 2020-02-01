#include <iostream>
using namespace std;
#include<stack>
int main() 
{
    int T;
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        int arr[N];
        for(int i=0;i<N;i++)
        {
            cin>>arr[i];
        }
        stack<int>s;
         for(int i=N-1;i>=0;i--)
         {
             
             if(s.empty())
             s.push(arr[i]);
             else
             {
                 if(arr[i]>=s.top())
                 s.push(arr[i]);
             }
         }
         while(!s.empty())
         {
             cout<<s.top()<<" ";
             s.pop();
         }
         cout<<endl;
    }

    return 0;
}