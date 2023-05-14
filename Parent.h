#ifndef PARENT_H
#define PARENT_H

#include "Member.h"

#include <string>
#include <iostream>

using namespace std;

class Parent : public Member{
    public:
        Parent(string n, string r="Parent", string d=""): Member(n, d) {setRole(r); tier=2;};
        virtual string getRole() {return role;};
        virtual void setRole(string r);  
        int getTier() {return tier;}; 
        int getCol() {return 0;};     
    
    protected:
        int tier;
};

class Godparent : public Member{
    public:
        Godparent(string n, string r="Godparent", string d=""): Member(n, d) {setRole(r); tier=2;};
        virtual string getRole() {return role;};
        virtual void setRole(string r);
        int getTier() {return tier;};
        int getCol() {return 1;};
    
    protected:
        int tier;
};

class Auncle : public Member{
    public:
        Auncle(string n, string r="Auncle", string d=""): Member(n, d) {setRole(r); tier=2;};
        virtual string getRole() {return role;};
        virtual void setRole(string r);
        int getTier() {return tier;};
        int getCol() {return 2;};

    protected:
        int tier;
};

#endif