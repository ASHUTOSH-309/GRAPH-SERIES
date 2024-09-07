#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<int> bfs(int Start, vector<vector<int>> graph)
{

    vector<bool> visited(graph.size(), 0);
    queue<int> q;
    vector<int> bfs;

    q.push(Start);
    visited[Start] = true;

    while (!q.empty())
    {

        int front = q.front();//Extract front element 
        q.pop();// Dequeue front element
        bfs.push_back(front);

        for (auto it : graph[front])
        {
            if (!visited[it])
            {
                q.push(it);
                visited[it] = true;
            }
        }
    }

    return bfs;
}

int main()
{
    // graph is stored in the form of a adjacenecy list;
    vector<vector<int>> graph = {
        {1}, {2, 3}, {1, 4}, {1, 4, 5}, {2, 3, 6, 7}, {3, 8}, {4}, {4, 9}, {5, 9}, {7, 8}};

       for(int node :bfs(0,graph)){

            cout<<node<<"\t";

       } 


}