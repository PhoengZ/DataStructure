#ifndef __DENSE_GRAPH_H__
#define __DENSE_GRAPH_H__

// Your code here
#include <vector>
using namespace std;
class DenseGraph{
public:
    DenseGraph() {
        Node.resize(3);
        n = 3;
        for (int i =0;i<n;i++){
            Node[i].resize(3);
        }
    }

    DenseGraph(int n_in) {
        n = n_in;
        Node.resize(n);
        for (int i =0;i<n;i++){
            Node[i].resize(n);
        }
    }

    DenseGraph(const DenseGraph& G) {
        n = G.n;
        Node = G.Node;
    }

    void AddEdge(int a, int b) {
        Node[a][b] = 1;
    }

    void RemoveEdge(int a, int b) {
        Node[a][b] = 0;
    }

    bool DoesEdgeExist(int a, int b) const {
        if (Node[a][b] == 1)return true;
        return false;
    }

    DenseGraph Transpose() const {
       DenseGraph d(n);
       d.Node.resize(n);
       for (int i =0;i<n;i++){
            d.Node[i].resize(n);
            for (int j =0;j<n;j++){
                d.Node[i][j] = Node[j][i];
            }
        }
       d.n = this->n;
       return d;
    }

protected:
    int n;
    vector <vector<int>> Node;
    // Your code here
};
#endif // __DENSE_GRAPH_H__
