// { Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
/* This function is used to detect a cycle in undirected graph
*  adj[]: array of vectors to represent graph
*  V: number of vertices
*/

bool dfs(int node, bool visited[], int parent, vector<int> adj[]) {
    visited[node] = true;
    for(vector<int>:: iterator itr=adj[node].begin(); itr!=adj[node].end(); itr++) {
        if(!visited[*itr]) {
            if(dfs(*itr, visited, node, adj)) return true;
        }
        else if(*itr!=parent) return true;
    }
    return false;
}

bool isCyclic(vector<int> adj[], int V)
{
   // Your code here
   bool visited[V] = {false};
   for(int node=0; node<V; node++){
       if(!visited[node]) {
           if(dfs(node, visited, -1, adj)) return true;
       }
   }
   return false;

}

// { Driver Code Starts.

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int V, E;
        cin>>V>>E;

        // array of vectors to represent graph
        vector<int> adj[V];

        int u, v;
        for(int i=0;i<E;i++)
        {
            cin>>u>>v;

            // adding edge to the graph
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        cout << isCyclic(adj, V)<<endl;

    }
}
  // } Driver Code Ends
