#ifndef TREE_H
#define TREE_H
#include "Member.h"
#include <vector>

class Tree {
    public:
        Tree();
        void addToTree(Member* m);
        void print();
        void printGreeting();
    private:
        vector<vector<vector<Member*> > > v; 
};

#endif 
