#ifndef MEMBER_H
#define MEMBER_H
#include <string>
#include <iostream>
#include <vector>
using namespace std;

class Member{ //abstract class
    public:
        Member(string n, string d=""): name(n), description(d) {};

        void setName(string n){name=n;};
        string getName(){return name;};
        
        virtual string getRole()=0;
        virtual void setRole(string r)=0;

        void setDescription(string d) { description = d;};
        string getDescription() {return description;};
        
        virtual void getGreeting();

    protected:
        string name;
        string role; //virtual
        string description; 


};

#endif