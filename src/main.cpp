#include <iostream>
#include "Graph/AdjacencyMatrixGraph.cpp"

int main() {
    typedef AdjacencyMatrixGraph<char, int> Graph;

    Graph undirected(Graph::GraphType::Undirected);
    for (char v = 'A'; v <= 'D'; ++v) undirected.addVertex(v);
    undirected.addEdge('A', 'B', 1);
    undirected.addEdge('B', 'C', 1);
    undirected.addEdge('C', 'D', 1);

    std::cout << "Undirected neighbors of B: ";
    undirected.getNeighbours('B', [](char v) { std::cout << v << ' '; });
    std::cout << "\nDegree of B: " << undirected.getDegree('B').value() << '\n';

    Graph directed(Graph::GraphType::Directed);
    for (char v = 'A'; v <= 'D'; ++v) directed.addVertex(v);
    directed.addEdge('A', 'B', 1);
    directed.addEdge('B', 'C', 1);
    directed.addEdge('C', 'D', 1);

    std::cout << "\nDirected neighbors of B: ";
    directed.getNeighbours('B', [](char v) { std::cout << v << ' '; });
    std::cout << "\nIn-degree of B: " << directed.getInDegree('B').value()
              << "  Out-degree of B: " << directed.getOutDegree('B').value() << '\n';

    std::cout << "\nBFS from A:\n";
    int time = 0;
    directed.BFS('A', [&](char v) {
        std::cout << "Visit " << v << " discovery time " << time++ << '\n';
    });

    std::cout << "\nDFS recursive from A:\n";
    time = 0;
    directed.DFSRecursive('A', [&](char v) {
        std::cout << "Visit " << v << " discovery time " << time++ << '\n';
    });

    return 0;
}