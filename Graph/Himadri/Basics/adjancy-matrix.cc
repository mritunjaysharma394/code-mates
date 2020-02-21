#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
  int N, E, i, j;
  cout << endl << "Enter no.of nodes and edges: ";
  cin >> N >> E;
  int graph[N][N] = {0};
  cout << endl << "Enter edges: ";
  for(i=0; i<E; i++){
    int u, v;
    cin >> u >> v;
    graph[u][v] = 1;
    graph[v][u] = 1;
  }
  cout << endl << "Graph saved, Now Printing..." << endl;

  for(i=0; i<N; i++){
    for(j=0; j<N; j++) cout << graph[i][j]<<' ';
    cout <<endl;
  }

  return 0;
}
