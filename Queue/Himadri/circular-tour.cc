// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

struct petrolPump
{
    int petrol;
    int distance;
};

int tour(petrolPump [],int );

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        petrolPump p[n];
        for(int i=0;i<n;i++)
            cin>>p[i].petrol>>p[i].distance;
        cout<<tour(p,n)<<endl;
    }
}
// } Driver Code Ends
/*
The structure of petrolPump is
struct petrolPump
{
    int petrol;
    int distance;
};*/

/*You are required to complete this method*/
int tour(petrolPump p[],int n)
{
   //Your code here
   int i, start=0,end=1, petrol = p[start].petrol - p[start].distance;
   while(end!= start || petrol < 0) {

     //cout << endl << "Enterring Outer while loop" << endl;
     //cout << "start=" << start << "  "<< "end=" << end << "  "<< "petrol=" << petrol <<endl;

       while(petrol<0 && start!=end) {

         //cout << endl << "Enterring Inner while loop" << endl;
         //cout << "start=" << start << "  "<< "end=" << end << "  "<< "petrol=" << petrol <<endl;

           petrol -= p[start].petrol - p[start].distance;
           start = (start+1)%n;
           if(start==0) return -1;

           //cout << endl << "Exiting Inner while loop" << endl;
           //cout << "start=" << start << "  "<< "end=" << end << "  "<< "petrol=" << petrol <<endl;

       }
       petrol += p[end].petrol - p[end].distance;
       end = (end+1)%n;

       //cout << endl << "Exiting Outer while loop" << endl;
       //cout << "start=" << start << "  "<< "end=" << end << "  "<< "petrol=" << petrol <<endl;

   }
   return start;

}
