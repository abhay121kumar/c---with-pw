
#include <bits/stdc++.h>
using namespace std;

// class Graph {
// 	int V;
// vector<list<int> > adj;

// public:
// 	Graph(int V);
// 	void addEdge(int v, int w);
// 	void BFS(int s);
// };

// Graph::Graph(int V)
// {
// 	this->V = V;
// 	adj.resize(V);
// }

// void Graph::addEdge(int v, int w)
// {
// 	adj[v].push_back(w);
// }

// void Graph::BFS(int s)
// {
// 	// Mark all the vertices as not visited
// 	vector<bool> visited;
// 	visited.resize(V, false);

// 	// Create a queue for BFS
// 	list<int> queue;

// 	// Mark the current node as visited and enqueue it
// 	visited[s] = true;
// 	queue.push_back(s);

// 	while (!queue.empty()) {
		
// 		// Dequeue a vertex from queue and print it
// 		s = queue.front();
// 		cout << s << " ";
// 		queue.pop_front();

// 		// Get all adjacent vertices of the dequeued
// 		// vertex s. If a adjacent has not been visited,
// 		// then mark it visited and enqueue it
// 		for (auto adjacent : adj[s]) {
// 			if (!visited[adjacent]) {
// 				visited[adjacent] = true;
// 				queue.push_back(adjacent);
// 			}
// 		}
// 	}
// }

// // Driver code
// int main()
// {
// 	// Create a graph given in the above diagram
// 	Graph g(4);
// 	g.addEdge(0, 1);
// 	g.addEdge(0, 2);
// 	g.addEdge(1, 2);
// 	g.addEdge(2, 0);
// 	g.addEdge(2, 3);
// 	g.addEdge(3, 3);

// 	cout << "Following is Breadth First Traversal "
// 		<< "(starting from vertex 2) \n";
// 	g.BFS(2);
// cout<<endl;
// 	return 0;
// }











/*
-> Generic Function for BFS traversal of a Graph
(valid for directed as well as undirected graphs
which can have multiple disconnected components)
-- Inputs --
-> V - represents number of vertices in the Graph
-> adj[] - represents adjacency list for the Graph
-- Output --
-> bfs_traversal - a vector containing bfs traversal
for entire graph
*/

vector<int> bfsOfGraph(int V, vector<int> adj[])
{
	vector<int> bfs_traversal;
	vector<bool> vis(V, false);
	for (int i = 0; i < V; ++i) {

		// To check if already visited
		if (!vis[i]) {
			queue<int> q;
			vis[i] = true;
			q.push(i);

			// BFS starting from ith node
			while (!q.empty()) {
				int g_node = q.front();
				q.pop();
				bfs_traversal.push_back(g_node);
				for (auto it : adj[g_node]) {
					if (!vis[it]) {
						vis[it] = true;
						q.push(it);
					}
				}
			}
		}
	}
	return bfs_traversal;
}
