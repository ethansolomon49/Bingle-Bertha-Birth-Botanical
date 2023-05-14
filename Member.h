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
        
        virtual void getGreeting(int num);

        //trying to figure out how to remove this so that Other doesn't need a tier and column
        //or maybe we want to eventually tier Other?
        virtual int getTier()=0; 
        virtual int getCol()=0;

    protected:
        string name;
        string role; //virtual
        string description; 


};

class Relative : public Member { //doesn't really do anything
    public:
        Relative(string n, string d): Member(n, d) {};
        virtual int getTier()=0;
        virtual int getCol()=0;
};

#endif