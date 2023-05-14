#ifndef GGPARENT_H
#define GGPARENT_H

#include "Member.h"

#include <string>
#include <iostream>

using namespace std;
class GreatGrandParent : public Relative{
    public:
        GreatGrandParent(string n, string r="Great Grandparent", string d=""): Relative(n, d) {setRole(r); tier=0;};
        virtual string getRole() {return role;};
        virtual void setRole(string r);
        int getTier() {return tier;};
        int getCol() {return 0;};
        
    protected:
        int tier;
};

class GrandParent : public Relative{
    public:
        GrandParent(string n, string r="Grandparent", string d=""): Relative(n, d) {setRole(r); tier=1;};
        virtual string getRole() {return role;};
        virtual void setRole(string r);
        int getTier() {return tier;};
        int getCol() {return 0;};

    protected:
        int tier;
};

#endif