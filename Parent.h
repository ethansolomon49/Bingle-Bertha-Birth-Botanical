#ifndef PARENT_H
#define PARENT_H

#include "Member.h"

#include <string>
#include <iostream>

using namespace std;

class Parent : public Member{
    public:
        Parent(string n, string r="Parent", string d=""): Member(n, d) {setRole(r);};
        virtual string getRole() {return role;};
        virtual void setRole(string r);        
};

class Godparent : public Member{
    public:
        Godparent(string n, string r="Godparent", string d=""): Member(n, d) {setRole(r);};
        virtual string getRole() {return role;};
        virtual void setRole(string r);
        
};

class Auncle : public Member{
    public:
        Auncle(string n, string r="Auncle", string d=""): Member(n, d) {setRole(r);};
        virtual string getRole() {return role;};
        virtual void setRole(string r);
};

#endif