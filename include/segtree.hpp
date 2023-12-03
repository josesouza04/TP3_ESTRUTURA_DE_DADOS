// SegTree (Segment Tree) header
#ifndef SEGTREE_HPP 
#define SEGTREE_HPP

#include <iostream>

struct Matrix { // 2x2 identity matrix
    int x1 = 1, y1 = 0, 
        x2 = 0, y2 = 1;
};

struct MatrixL { // 2x1 matrix used for linear transformation
    int x1 = 0, 
        x2 = 0;
};

class SegTree {
    public:
        SegTree();
        SegTree(int size_);
        ~SegTree();
        
        Matrix multiply(Matrix *matrixA_, Matrix *matrixB);
        int getSize() {return size;};

        void build(int left_, int right_, int pos_);
        void update(int index_, int left_, int right_, int pos_);
        Matrix query(int a_, int b_, int left_, int right_, int pos_);
    private:
        int size;
        Matrix *treeArray;
        Matrix *tree;
};

#endif // SEGTREE_HPP
// Path: include/segtree.hpp