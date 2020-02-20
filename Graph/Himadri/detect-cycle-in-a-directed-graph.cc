// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
/*  Function to check if the given graph contains cycle
*   V: number of vertices
*   adj[]: representation of graph
*/

bool dfs(int node, vector<int> adj[], bool visited[], bool recursive_stack[]){
    if(!visited[node]) {
        visited[node]= true;
        recursive_stack[node] = true;

        for(vector<int>::iterator itr=adj[node].begin(); itr!=adj[node].end(); itr++) {
            if(!visited[*itr]) {
                if(dfs(*itr, adj, visited, recursive_stack)) return true;
            }
            else if(recursive_stack[*itr]) return true;
        }
    }
    recursive_stack[node] = false;
    return false;
}

bool isCyclic(int V, vector<int> adj[])
{
    // Your code here
    vector<int> s;
    bool visited[V] = {false};
    bool recursive_stack[V] = {false};
    for(int i=0; i<V; i++) {
        if(dfs(i, adj, visited, recursive_stack)) return true;
    }

    return false;
}

// { Driver Code Starts.

int main() {

	int t;
	cin >> t;

	while(t--){

	    int v, e;
	    cin >> v >> e;

	    vector<int> adj[v];

	    for(int i =0;i<e;i++){
	        int u, v;
	        cin >> u >> v;
	        adj[u].push_back(v);
	    }

	    cout << isCyclic(v, adj) << endl;

	}

	return 0;
}  // } Driver Code Ends
