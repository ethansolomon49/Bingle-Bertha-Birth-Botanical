#ifndef BINGLE_H
#define BINGLE_H

#include "Member.h"

#include <string>
#include <iostream>

using namespace std;
class Bingle : public Member{
    public:
        Bingle(string n, string r="Bingle Bertha", string d=""): Member(n, d) {setRole(r); tier = 3;};
        virtual string getRole() {return role;};
        virtual void setRole(string r);
        int getTier() {return tier;};
        int getCol() {return 0;};

    protected:
        int tier;
        
};

class Partner : public Member{
    public:
        Partner(string n, string r="Partner", string d=""): Member(n, d) {setRole(r); tier=3;};
        virtual string getRole() {return role;};
        virtual void setRole(string r);
        int getTier() {return tier;};
        int getCol() {return 1;};

    protected:
        int tier;
};

class Sibling : public Member{
    public:
        Sibling(string n, string r="Sibling", string d=""): Member(n, d) {setRole(r); tier=3;};
        virtual string getRole() {return role;};
        virtual void setRole(string r);
        int getTier() {return tier;};
        int getCol() {return 2;};
    
    protected:
        int tier;
};

class Cousin : public Member{
    public:
        Cousin(string n, string r="Cousin", string d=""): Member(n, d) {setRole(r);tier=3;};
        virtual string getRole() {return role;};
        virtual void setRole(string r);
        int getTier() {return tier;};
        int getCol() {return 3;};
    
    protected:
        int tier;
};

#endif