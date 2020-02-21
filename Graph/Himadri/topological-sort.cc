// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// The Graph structure is as folows

/*  Function which sorts the graph vertices in topological form
*   N: number of vertices
*   adj[]: input graph
*   NOTE: You must return dynamically allocated array
*/

void topological_sort(int i, vector<int> adj[], bool visited[], stack<int> &s){
    visited[i] = true;
    for(vector<int>::iterator itr=adj[i].begin(); itr!=adj[i].end();itr++){
        if(!visited[*itr]) topological_sort(*itr, adj, visited, s);
    }
    s.push(i);

}


int* topoSort(int N, vector<int> graph[])
{
    stack<int> s;
    bool visited[N] = {false};
    int *ordering = new int[N];
    for(int i=0; i<N; i++) {
        if(!visited[i]) topological_sort(i, graph, visited, s);
    }
    int i = 0;
    while(!s.empty() && i<N){
        ordering[i++] = s.top();
        s.pop();
    }
    return ordering;




}



// { Driver Code Starts.

/*  Function to check if elements returned by user
*   contains the elements in topological sorted form
*   V: number of vertices
*   *res: array containing elements in topological sorted form
*   adj[]: graph input
*/
bool check(int V, int* res, vector<int> adj[]){
    bool flag =true;
    for(int i=0;i<V && flag;i++)
    {
        int n=adj[res[i]].size();
        for(auto j : adj[res[i]])
        {
            for(int k=i+1;k<V;k++)
            {
                if(res[k]==j )
                    n--;
            }
        }
        if(n!=0)
            flag =false;
    }
    if(flag==false)
        return 0;
    return 1;
}

// Driver Code
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N,E;
        cin>>E>>N;
        int u,v;

        vector<int> adj[N];

        for(int i=0;i<E;i++)
        {
            cin>>u>>v;
            adj[u].push_back(v);
        }

        int *res = topoSort(N, adj);

        cout<<check(N, res, adj)<<endl;

    }
}
  // } Driver Code Ends
