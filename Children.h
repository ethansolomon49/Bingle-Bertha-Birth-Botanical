#ifndef CHILDREN_H
#define CHILDREN_H

#include "Member.h"

#include <string>
#include <iostream>

using namespace std;
class Pet : public Member{
    public:
        Pet(string n, string r="pet", string d=""): Member(n, d) {setRole(r);};
        virtual string getRole() {return role;};
        virtual void setRole(string r);
        
};

class Child : public Member{
    public:
        Child(string n, string r="Child", string d=""): Member(n, d) {setRole(r);};
        virtual string getRole() {return role;};
        virtual void setRole(string r);
};

class Grandchild : public Member{
    public:
        Grandchild(string n, string r="Granchild", string d=""): Member(n, d) {setRole(r);};
        virtual string getRole() {return role;};
        virtual void setRole(string r);
};

#endif