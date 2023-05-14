#ifndef TREE_H
#define TREE_H
#include "Member.h"
#include <vector>

class Tree {
    public:
        void addToTree(Member* m);
        void print();
    private:
        vector<vector<vector<Member*>>> v; 
        
};

#endif 
