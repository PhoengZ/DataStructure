#ifndef __SPARSE_GRAPH_H__
#define __SPARSE_GRAPH_H__

// Your code here
#include <set>

using namespace std;

class SparseGraph{
public:
    SparseGraph() : n(3) {}

    SparseGraph(int n_in) : n(n_in) {}

    SparseGraph(const SparseGraph& G) : n(G.n), edge(G.edge) {}

    void AddEdge(int a, int b) {
        if (!transpose)edge.insert({a,b});
        else edge.insert({b,a});
        
    }

    void RemoveEdge(int a, int b) {
        if (!transpose)edge.erase({a,b});
        else edge.erase({b,a});
    }

    bool DoesEdgeExist(int a, int b) const {
        if (!transpose)return edge.count({a,b});
        else return edge.count({b,a});
    }

    SparseGraph Transpose() const {
        SparseGraph  s(n);
        s.edge = edge;
        s.transpose = !transpose;
        return s;
    }

protected:
    int n;
    set <pair<int,int>> edge;
    bool transpose = false;
};
#endif // __SPARSE_GRAPH_H__

