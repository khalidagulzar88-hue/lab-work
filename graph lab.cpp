#include <iostream>
#include <vector>
using namespace std;

//class Graph {
//    int V;
//    bool directed;
//    vector<vector<pair<int,int> > > adj;
//
//public:
//    // Constructor
//    Graph(int vertices, bool dir) {
//        V = vertices;
//        directed = dir;
//        adj.resize(V);
//    }
//
//    // Add edge
//    void addEdge(int u, int v, int w) {
//        adj[u].push_back(make_pair(v, w));
//
//        if(!directed) {
//            adj[v].push_back(make_pair(u, w));
//        }
//    }
//
//    // Remove edge
//    void removeEdge(int u, int v) {
//        // remove from u -> v
//        for(int i = 0; i < adj[u].size(); i++) {
//            if(adj[u][i].first == v) {
//                adj[u].erase(adj[u].begin() + i);
//                break;
//            }
//        }
//
//        // if undirected, remove v -> u also
//        if(!directed) {
//            for(int i = 0; i < adj[v].size(); i++) {
//                if(adj[v][i].first == u) {
//                    adj[v].erase(adj[v].begin() + i);
//                    break;
//                }
//            }
//        }
//    }
//
//    // Print graph
//    void display() {
//        cout << "\nGraph:\n";
//        for(int i = 0; i < V; i++) {
//            cout << i << " -> ";
//            for(int j = 0; j < adj[i].size(); j++) {
//                cout << "(" << adj[i][j].first 
//                     << "," << adj[i][j].second << ") ";
//            }
//            cout << endl;
//        }
//    }
//
//    // Print degrees
//    void printDegrees() {
//        cout << "\nDegrees of vertices:\n";
//
//        for(int i = 0; i < V; i++) {
//            cout << "Vertex " << i << " = " 
//                 << adj[i].size() << endl;
//        }
//    }
//};
//
//int main() {
//    int V, E, choice;
//    bool dir;
//
//    cout << "Enter number of vertices: ";
//    cin >> V;
//
//    cout << "Enter 1 for Directed graph, 0 for Undirected: ";
//    cin >> dir;
//
//    Graph g(V, dir);
//
//    cout << "Enter number of edges: ";
//    cin >> E;
//
//    for(int i = 0; i < E; i++) {
//        int u, v, w;
//        cout << "Enter u v weight: ";
//        cin >> u >> v >> w;
//        g.addEdge(u, v, w);
//    }
//
//    g.display();
//
//    // Remove edge test
//    int u, v;
//    cout << "\nEnter edge to remove (u v): ";
//    cin >> u >> v;
//    g.removeEdge(u, v);
//
//    g.display();
//
//    // Print degrees
//    g.printDegrees();
//
//    return 0;
//}
//

//task 2//
//
//int main() {
//
//    int V = 5;
//
//    // ----------- STEP 1: Create Adjacency Matrix -----------
//    int matrix[5][5];
//
//    // initialize matrix with 0
//    for(int i = 0; i < V; i++) {
//        for(int j = 0; j < V; j++) {
//            matrix[i][j] = 0;
//        }
//    }
//
//    // ----------- STEP 2: Create Adjacency List -----------
//    vector<vector<int> > adjList(V);
//
//    // ----------- STEP 3: Add SAME edges in both -----------
//
//    // Edge 0-1
//    matrix[0][1] = matrix[1][0] = 1;
//    adjList[0].push_back(1);
//    adjList[1].push_back(0);
//
//    // Edge 0-2
//    matrix[0][2] = matrix[2][0] = 1;
//    adjList[0].push_back(2);
//    adjList[2].push_back(0);
//
//    // Edge 1-3
//    matrix[1][3] = matrix[3][1] = 1;
//    adjList[1].push_back(3);
//    adjList[3].push_back(1);
//
//    // Edge 2-3
//    matrix[2][3] = matrix[3][2] = 1;
//    adjList[2].push_back(3);
//    adjList[3].push_back(2);
//
//    // Edge 3-4
//    matrix[3][4] = matrix[4][3] = 1;
//    adjList[3].push_back(4);
//    adjList[4].push_back(3);
//
//    // ----------- STEP 4: Print Adjacency Matrix -----------
//    cout << "Adjacency Matrix:\n";
//
//    for(int i = 0; i < V; i++) {
//        for(int j = 0; j < V; j++) {
//            cout << matrix[i][j] << " ";
//        }
//        cout << endl;
//    }
//
//    // ----------- STEP 5: Print Adjacency List -----------
//    cout << "\nAdjacency List:\n";
//
//    for(int i = 0; i < V; i++) {
//        cout << i << " -> ";
//
//        for(int j = 0; j < adjList[i].size(); j++) {
//            cout << adjList[i][j] << " ";
//        }
//
//        cout << endl;
//    }
//
//    return 0;
//}



// task 3

//
//
//class Graph {
//    int V;
//    vector<vector<int> > adj;
//
//public:
//    Graph(int v) {
//        V = v;
//        adj.resize(V);
//    }
//
//    // Add Edge (no range-based loop)
//    void addEdge(int u, int v) {
//
//        // check duplicate
//        for(int i = 0; i < adj[u].size(); i++) {
//            if(adj[u][i] == v) {
//                cout << "Duplicate edge not added: " << u << " - " << v << endl;
//                return;
//            }
//        }
//
//        adj[u].push_back(v);
//        adj[v].push_back(u);
//    }
//
//    // Self-loop check
//    bool hasSelfLoop() {
//        for(int i = 0; i < V; i++) {
//            for(int j = 0; j < adj[i].size(); j++) {
//                if(adj[i][j] == i)
//                    return true;
//            }
//        }
//        return false;
//    }
//
//    // Multi-edge check
//    bool hasMultiEdge() {
//        for(int i = 0; i < V; i++) {
//
//            vector<int> seen;
//
//            for(int j = 0; j < adj[i].size(); j++) {
//
//                int neighbor = adj[i][j];
//
//                for(int k = 0; k < seen.size(); k++) {
//                    if(seen[k] == neighbor)
//                        return true;
//                }
//
//                seen.push_back(neighbor);
//            }
//        }
//        return false;
//    }
//
//    // Display graph
//    void display() {
//        for(int i = 0; i < V; i++) {
//            cout << i << " -> ";
//
//            for(int j = 0; j < adj[i].size(); j++) {
//                cout << adj[i][j] << " ";
//            }
//
//            cout << endl;
//        }
//    }
//};
//
//int main() {
//
//    // Graph 1: Self-loop
//    Graph g1(4);
//    g1.addEdge(0,1);
//    g1.addEdge(1,2);
//    g1.addEdge(2,2); // self-loop
//
//    cout << "\nGraph 1:\n";
//    g1.display();
//
//    if(g1.hasSelfLoop())
//        cout << "Self-loop found\n";
//    else
//        cout << "No self-loop\n";
//
//    if(g1.hasMultiEdge())
//        cout << "Multi-edge found\n";
//    else
//        cout << "No multi-edge\n";
//
//
//    // Graph 2: Multi-edge
//    Graph g2(4);
//    g2.addEdge(0,1);
//    g2.addEdge(0,1); // duplicate
//
//    cout << "\nGraph 2:\n";
//    g2.display();
//
//    if(g2.hasSelfLoop())
//        cout << "Self-loop found\n";
//    else
//        cout << "No self-loop\n";
//
//    if(g2.hasMultiEdge())
//        cout << "Multi-edge found\n";
//    else
//        cout << "No multi-edge\n";
//
//    return 0;
//}


//task4 //


#include <iostream>
#include <vector>
using namespace std;

struct WEdge {
    int to, weight;
};

class WeightedGraph {
    int V;
    vector<vector<WEdge> > adj;

public:
    WeightedGraph(int vertices) {
        V = vertices;
        adj.resize(V);
    }

    // FIX: removed { } initializer list (C++98 issue fixed)
    void addEdge(int u, int v, int w) {
        WEdge e1;
        e1.to = v;
        e1.weight = w;
        adj[u].push_back(e1);

        WEdge e2;
        e2.to = u;
        e2.weight = w;
        adj[v].push_back(e2);
    }

    // FIX: NO initializer list in parameter
    int pathWeight(vector<int> path) {
        int total = 0;

        cout << "Path: ";

        for (int i = 0; i < (int)path.size() - 1; i++) {

            int u = path[i];
            int v = path[i + 1];
            bool found = false;

            for (int j = 0; j < (int)adj[u].size(); j++) {

                if (adj[u][j].to == v) {

                    cout << u << " --(" << adj[u][j].weight << ")--> ";
                    total += adj[u][j].weight;
                    found = true;
                    break;
                }
            }

            if (!found) {
                cout << "\nNo edge between " << u << " and " << v << endl;
                return -1;
            }
        }

        cout << path[path.size() - 1];
        cout << "  Total Weight = " << total << endl;

        return total;
    }

    void printGraph() {
        cout << "\nGraph:\n";

        for (int i = 0; i < V; i++) {
            cout << i << " -> ";

            for (int j = 0; j < (int)adj[i].size(); j++) {
                cout << "(" << adj[i][j].to
                     << ", w=" << adj[i][j].weight << ") ";
            }

            cout << endl;
        }
    }
};

int main() {

    WeightedGraph g(6);

    // Original edges
    g.addEdge(0, 1, 4);
    g.addEdge(0, 2, 2);
    g.addEdge(1, 3, 5);
    g.addEdge(2, 3, 1);
    g.addEdge(3, 4, 3);

    // New node F
    g.addEdge(3, 5, 2);
    g.addEdge(5, 4, 1);

    g.printGraph();

    cout << endl;

    // FIX: NO { } initializer lists (C++98 fix)
    vector<int> p1;
    p1.push_back(0);
    p1.push_back(1);
    p1.push_back(3);
    p1.push_back(4);

    vector<int> p2;
    p2.push_back(0);
    p2.push_back(2);
    p2.push_back(3);
    p2.push_back(4);

    vector<int> p3;
    p3.push_back(0);
    p3.push_back(2);
    p3.push_back(3);
    p3.push_back(5);
    p3.push_back(4);

    int w1 = g.pathWeight(p1);
    int w2 = g.pathWeight(p2);
    int w3 = g.pathWeight(p3);

    cout << "\nComparison:\n";

    if (w1 < w2 && w1 < w3)
        cout << "A-B-D-E is shortest\n";
    else if (w2 < w1 && w2 < w3)
        cout << "A-C-D-E is shortest\n";
    else
        cout << "A-C-D-F-E is shortest\n";

    return 0;
}
