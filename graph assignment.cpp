#include <iostream>
#include <vector>
#include <queue>
#include <climits>
#include <algorithm>

using namespace std;


//task1//

/*

class GraphAdjList {

    int vertices;

    vector<pair<int, int>> adj[100];

public:

    GraphAdjList(int v) {
        vertices = v;
    }

    void addEdge(int u, int v, int weight) {

        adj[u].push_back(make_pair(v, weight));
        adj[v].push_back(make_pair(u, weight));
    }

    void displayGraph() {

        cout << "\nAdjacency List Representation:\n";

        for (int i = 0; i < vertices; i++) {

            cout << i << " -> ";

            for (auto x : adj[i]) {

                cout << "("
                     << x.first
                     << ", Weight: "
                     << x.second
                     << ") ";
            }

            cout << endl;
        }
    }
};

int main() {

    GraphAdjList g(4);

    g.addEdge(0, 1, 5);
    g.addEdge(0, 2, 3);
    g.addEdge(1, 2, 2);
    g.addEdge(2, 3, 4);

    g.displayGraph();

    return 0;
}

*/

//task2//

/*

struct Node {

    int vertex;
    int cost;

    bool operator<(const Node &other) const {

        return cost > other.cost;
    }
};

class GraphAStar {

    int V;

    vector<pair<int, int>> adj[100];

public:

    GraphAStar(int v) {
        V = v;
    }

    void addEdge(int u, int v, int w) {

        adj[u].push_back(make_pair(v, w));
        adj[v].push_back(make_pair(u, w));
    }

    void aStar(int start, int goal, vector<int> heuristic) {

        priority_queue<Node> pq;

        vector<int> gCost(V, INT_MAX);

        vector<int> parent(V, -1);

        gCost[start] = 0;

        pq.push({start, heuristic[start]});

        while (!pq.empty()) {

            int current = pq.top().vertex;

            pq.pop();

            if (current == goal)
                break;

            for (auto neighbor : adj[current]) {

                int next = neighbor.first;

                int weight = neighbor.second;

                int newCost = gCost[current] + weight;

                if (newCost < gCost[next]) {

                    gCost[next] = newCost;

                    int fCost = newCost + heuristic[next];

                    pq.push({next, fCost});

                    parent[next] = current;
                }
            }
        }

        vector<int> path;

        int temp = goal;

        while (temp != -1) {

            path.push_back(temp);

            temp = parent[temp];
        }

        reverse(path.begin(), path.end());

        cout << "\nShortest Path:\n";

        for (int i = 0; i < path.size(); i++) {

            cout << path[i];

            if (i != path.size() - 1)
                cout << " -> ";
        }

        cout << "\nTotal Cost = "
             << gCost[goal]
             << endl;
    }
};

int main() {

    GraphAStar g(6);

    g.addEdge(0, 1, 4);
    g.addEdge(0, 2, 3);
    g.addEdge(1, 3, 5);
    g.addEdge(2, 3, 2);
    g.addEdge(3, 4, 4);
    g.addEdge(4, 5, 1);

    vector<int> heuristic = {7, 6, 2, 1, 1, 0};

    g.aStar(0, 5, heuristic);

    return 0;
}

*/


// TASK 3//

/*

class GraphDFS {

    int V;

    vector<int> adj[100];

public:

    GraphDFS(int v) {
        V = v;
    }

    void addEdge(int u, int v) {

        adj[u].push_back(v);
    }

    void printAllPathsUtil(
        int src,
        int dest,
        vector<bool> &visited,
        vector<int> &path
    ) {

        visited[src] = true;

        path.push_back(src);

        if (src == dest) {

            for (int i = 0; i < path.size(); i++) {

                cout << path[i] << " ";
            }

            cout << endl;
        }
        else {

            for (int neighbor : adj[src]) {

                if (!visited[neighbor]) {

                    printAllPathsUtil(
                        neighbor,
                        dest,
                        visited,
                        path
                    );
                }
            }
        }

        path.pop_back();

        visited[src] = false;
    }

    void printAllPaths(int src, int dest) {

        vector<bool> visited(V, false);

        vector<int> path;

        cout << "\nAll Possible Paths:\n";

        printAllPathsUtil(src, dest, visited, path);
    }
};

int main() {

    GraphDFS g(5);

    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 3);
    g.addEdge(2, 3);
    g.addEdge(3, 4);

    g.printAllPaths(0, 4);

    return 0;
}

*/


// TASK 4//

/*

class GraphDijkstraPath {

    int V;

    vector<pair<int, int>> adj[100];

public:

    GraphDijkstraPath(int v) {
        V = v;
    }

    void addEdge(int u, int v, int w) {

        adj[u].push_back(make_pair(v, w));
        adj[v].push_back(make_pair(u, w));
    }

    void shortestPath(int src, int dest) {

        priority_queue<
            pair<int, int>,
            vector<pair<int, int>>,
            greater<pair<int, int>>
        > pq;

        vector<int> dist(V, INT_MAX);

        vector<int> parent(V, -1);

        dist[src] = 0;

        pq.push(make_pair(0, src));

        while (!pq.empty()) {

            int u = pq.top().second;

            pq.pop();

            for (auto x : adj[u]) {

                int v = x.first;

                int weight = x.second;

                if (dist[u] + weight < dist[v]) {

                    dist[v] = dist[u] + weight;

                    pq.push(make_pair(dist[v], v));

                    parent[v] = u;
                }
            }
        }

        cout << "\nShortest Distance = "
             << dist[dest]
             << endl;

        vector<int> path;

        int temp = dest;

        while (temp != -1) {

            path.push_back(temp);

            temp = parent[temp];
        }

        reverse(path.begin(), path.end());

        cout << "Shortest Path:\n";

        for (int i = 0; i < path.size(); i++) {

            cout << path[i];

            if (i != path.size() - 1)
                cout << " -> ";
        }

        cout << endl;
    }
};

int main() {

    GraphDijkstraPath g(5);

    g.addEdge(0, 1, 2);
    g.addEdge(0, 2, 4);
    g.addEdge(1, 2, 1);
    g.addEdge(1, 3, 7);
    g.addEdge(2, 4, 3);
    g.addEdge(3, 4, 1);

    g.shortestPath(0, 4);

    return 0;
}

*/


// TASK 5//

class GraphDijkstra {

    int V;

    vector<pair<int, int>> adj[100];

public:

    GraphDijkstra(int v) {
        V = v;
    }

    void addEdge(int u, int v, int w) {

        adj[u].push_back(make_pair(v, w));
        adj[v].push_back(make_pair(u, w));
    }

    void dijkstra(int src) {

        priority_queue<
            pair<int, int>,
            vector<pair<int, int>>,
            greater<pair<int, int>>
        > pq;

        vector<int> dist(V, INT_MAX);

        dist[src] = 0;

        pq.push(make_pair(0, src));

        while (!pq.empty()) {

            int u = pq.top().second;

            pq.pop();

            for (auto x : adj[u]) {

                int v = x.first;

                int weight = x.second;

                if (dist[u] + weight < dist[v]) {

                    dist[v] = dist[u] + weight;

                    pq.push(make_pair(dist[v], v));
                }
            }
        }

        cout << "\nShortest Distances:\n";

        for (int i = 0; i < V; i++) {

            cout << "Node "
                 << i
                 << " = "
                 << dist[i]
                 << endl;
        }
    }
};

int main() {

    GraphDijkstra g(5);

    g.addEdge(0, 1, 10);
    g.addEdge(0, 4, 5);
    g.addEdge(1, 2, 1);
    g.addEdge(1, 4, 2);
    g.addEdge(2, 3, 4);
    g.addEdge(3, 0, 7);
    g.addEdge(4, 2, 9);
    g.addEdge(4, 3, 2);

    g.dijkstra(0);

    return 0;
}