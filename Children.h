#ifndef CHILDREN_H
#define CHILDREN_H

#include "Member.h"

#include <string>
#include <iostream>

using namespace std;
class Pet : public Relative{
    public:
        Pet(string n, string s, string r="pet", string d=""): Relative(n, d) {setRole(r); setSound(s); tier=4;};

        virtual string getRole() {return role;};
        virtual void setRole(string r);

        string getSound(){return sound;};
        void setSound(string s);

        virtual void getGreeting(int num); //number of times sound is done

        int getTier() {return tier;};
        int getCol() {return 0;};

    protected:
        string sound;
        int tier;
        
};

/*
hi ____
(name) the (role) says hi: meow meow meow meow (x num)
This is their description: 
*/

class Child : public Relative{
    public:
        Child(string n, string r="Child", string d=""): Relative(n, d) {setRole(r); tier=4;};
        virtual string getRole() {return role;};
        virtual void setRole(string r);
        int getTier() {return tier;};
        int getCol() {return 1;};

    protected:
        int tier;
};

class Grandchild : public Relative{
    public:
        Grandchild(string n, string r="Grandchild", string d=""): Relative(n, d) {setRole(r); tier=5;};
        virtual string getRole() {return role;};
        virtual void setRole(string r);
        int getTier() {return tier;};
        int getCol() {return 0;};
    
    protected:
        int tier;
};

#endif