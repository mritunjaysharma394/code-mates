#include<bits/stdc++.h>
using namespace std;

int strstr(string ,string);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a;
        string b;
        
        cin>>a;
        cin>>b;
        
        cout<<strstr(a,b)<<endl;
    }
}
// } Driver Code Ends
/* The function should return position where the target string 
   matches the string str
Your are required to complete this method */
int strstr(string s, string x)
{
    int m,n;
   m=s.length();
   n=x.length();
   for(int pos=0;pos<=m-n;pos++)
   {
       int i;
       for(i=0;i<n;i++)
       {
           if(x[i]!=s[pos+i])
           break;
       }
       if(i==n)
        return pos;
   }
   return -1;
}
