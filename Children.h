#ifndef CHILDREN_H
#define CHILDREN_H

#include "Member.h"

#include <string>
#include <iostream>

using namespace std;
class Pet : public Member{
    public:
        Pet(string n, string s, string r="pet", string d=""): Member(n, d) {setRole(r); setSound(s);};

        virtual string getRole() {return role;};
        virtual void setRole(string r);

        string getSound(){return sound;};
        void setSound(string s);

        virtual void getGreeting(int num); //number of times sound is done

    protected:
        string sound;
        
};

/*
hi ____
(name) the (role) says hi: meow meow meow meow (x num)
This is their description: 
*/

class Child : public Member{
    public:
        Child(string n, string r="Child", string d=""): Member(n, d) {setRole(r);};
        virtual string getRole() {return role;};
        virtual void setRole(string r);
};

class Grandchild : public Member{
    public:
        Grandchild(string n, string r="Grandchild", string d=""): Member(n, d) {setRole(r);};
        virtual string getRole() {return role;};
        virtual void setRole(string r);
};

#endif