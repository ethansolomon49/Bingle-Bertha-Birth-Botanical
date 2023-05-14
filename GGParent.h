#ifndef GGPARENT_H
#define GGPARENT_H

#include "Member.h"

#include <string>
#include <iostream>

using namespace std;
class GreatGrandParent : public Member{
    public:
        GreatGrandParent(string n, string r="Great Grandparent", string d=""): Member(n, d) {setRole(r); tier=0;};
        virtual string getRole() {return role;};
        virtual void setRole(string r);
        
    protected:
        int tier;
};

class GrandParent : public Member{
    public:
        GrandParent(string n, string r="Grandparent", string d=""): Member(n, d) {setRole(r); tier=1;};
        virtual string getRole() {return role;};
        virtual void setRole(string r);

    protected:
        int tier;
};

#endif