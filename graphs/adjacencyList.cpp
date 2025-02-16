#include <iostream>
#include <stdio.h>
using namespace std;

class Solution
{
public:
  // Function to return the adjacency list for each vertex.
  vector<vector<int>> printGraph(int V, vector<pair<int, int>> &edges)
  {
    // Code here
    vector<vector<int>> ans(V);
    for (int i = 0; i < edges.size(); i++)
    {
      int u = edges[i].first;
      int v = edges[i].second;
      ans[u].push_back(v);
      ans[v].push_back(u);
    }
    return ans;
  }
};

/*
  Time Complexity: O(N) + O(2E)  -- where O(N) for all the nodes visited and O(2E) because for every node visited it visits
                                    its corresponding neighbors also called as degrees
                                        Total number of degrees = 2 * Edges;

  Space Complexity: O(3N) ~ O(N) -- bfs vector, queue, visited array
*/