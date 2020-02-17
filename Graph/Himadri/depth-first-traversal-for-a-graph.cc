/* Function to do DFS of graph
*  g[]: array of vectors to represent graph
*  vis[]: array to keep track of visited vertex
*/

void dfs(int s, vector<int> g[], bool vis[])
{
    // Your code here
    vis[s] = true;
    cout << s << ' ';
    for(int i = 0; i<g[s].size(); i++){
        if (vis[g[s][i]]!=true) dfs(g[s][i], g, vis);
    }
}
