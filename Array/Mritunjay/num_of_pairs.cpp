#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#define ll long long int
int main()
 {
     int t;
     cin>>t;
     
     while(t--)
     {
         int m,n;
         cin>>m>>n;
         
         int arr1[m];
         int arr2[n];
         
         for(int i=0;i<m;i++)
         cin>>arr1[i];
         
         int count1=0;
         int count2=0;

         
         for(int j=0;j<n;j++)
         {cin>>arr2[j];
         
         if(arr2[j]==1)
         count1++;
         
         if(arr2[j]==2)
         count2++;
         }
         
         sort(arr1,arr1+m);
         sort(arr2,arr2+n);
         ll sum=0;
         
         for(int i=0;i<m;i++)
         {
             if(arr1[i]==1)
             continue;
          
             
             if(arr1[i]==3)
             {
                 sum+=(count2);
             }
             
             
             //find the number of elements greater than arr1[i] 
             
             if(arr1[i]==2)
             arr1[i]=4;
             
             int low=0;
             int high=n-1;
             
             int ans=-1;
             
             while(low<=high)
             {
                 int mid=low+(high-low)/2;
                 
                 if(arr2[mid]<=arr1[i])
                 {
                     low=mid+1;
                 }
                 else
                 {
                     ans=mid;
                     high=mid-1;
                 }
             }
             
             sum+=count1;
             if(ans==-1)
             continue;
             
             //now the index of first greater element is ans
             
             int grtElements=n-ans;
             
             sum+=(grtElements);
             
         }
        
         cout<<sum<<"\n";
         
     }
     
	return 0;
}