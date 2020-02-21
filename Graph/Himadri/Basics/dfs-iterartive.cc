#include <iostream>
#include <bits/stdc++.h>

using namespace std;

stack<int> s;

int main() {
  int N, E, i;
  cout << endl << "Enter no.of nodes and edges: ";
  cin >> N >> E;
  vector<int> graph[N];
  bool visited[N] = {false};
  cout << endl << "Enter edges: ";
  for(i=0; i<E; i++){
    int u, v;
    cin >> u >> v;
    graph[u].push_back(v);
    graph[v].push_back(u);
  }

  s.push(0);
  while(!s.empty()){
    int node = s.top();
    s.pop();
    if(!visited[node]) {cout << node << ' '; visited[node] = true;}

    for(auto neighbor = graph[node].begin(); neighbor!=graph[node].end(); neighbor++){
      if(visited[*neighbor]!=true) {
        s.push  (*neighbor);
    }
  }
}


  return 0;
}
