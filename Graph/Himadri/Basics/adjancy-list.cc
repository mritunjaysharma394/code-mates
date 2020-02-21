#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
  int N, E, i;
  cout << endl << "Enter no.of nodes and edges: ";
  cin >> N >> E;
  vector<int> graph[N];
  cout << endl << "Enter edges: ";
  for(i=0; i<E; i++){
    int u, v;
    cin >> u >> v;
    graph[u].push_back(v);
    graph[v].push_back(u);
  }
  cout << endl << "Graph saved, Now Printing..." << endl;

  for(i=0; i<N; i++){
    vector<int> node = graph[i];
    cout << "Node: " << i << " edges: ";
    for(auto itr = node.begin(); itr!=node.end(); itr++) cout << *itr  << ' ';
    cout << endl;
  }

  return 0;
}
