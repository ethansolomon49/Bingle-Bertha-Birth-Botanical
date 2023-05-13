#ifndef BINGLE_H
#define BINGLE_H

#include "Member.h"

#include <string>
#include <iostream>

using namespace std;
class Bingle : public Member{
    public:
        Bingle(string n, string r="Bingle Bertha", string d=""): Member(n, d) {setRole(r);};
        virtual string getRole() {return role;};
        virtual void setRole(string r);
        
};

class Partner : public Member{
    public:
        Partner(string n, string r="Partner", string d=""): Member(n, d) {setRole(r);};
        virtual string getRole() {return role;};
        virtual void setRole(string r);
};

class Sibling : public Member{
    public:
        Sibling(string n, string r="Sibling", string d=""): Member(n, d) {setRole(r);};
        virtual string getRole() {return role;};
        virtual void setRole(string r);
};

class Cousin : public Member{
    public:
        Cousin(string n, string r="Cousin", string d=""): Member(n, d) {setRole(r);};
        virtual string getRole() {return role;};
        virtual void setRole(string r);
};

#endif