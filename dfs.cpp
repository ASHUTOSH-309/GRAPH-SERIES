#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void dfs(int node, vector<vector<int>> graph, vector<bool> &visited, vector<int>& ans)
{
    visited[node] = true;
    ans.push_back(node);
    for (auto it : graph[node])
    {
        if (!visited[it])
        {
            dfs(it, graph, visited, ans);
        }
    }
}

int main()
{

    vector<vector<int>> graph = {
        {1}, {2, 3}, {1, 4}, {1, 4, 5}, {2, 3, 6, 7}, {3, 8}, {4}, {4, 9}, {5, 9}, {7, 8}};

    vector<bool> visited(graph.size(), 0);

    vector<int> ans;
    dfs(0, graph, visited, ans);

    for (auto it : ans)
    {
        cout << it << "\t";
    }

    return 0;
}