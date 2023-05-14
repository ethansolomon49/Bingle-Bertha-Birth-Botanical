#ifndef OTHER_H
#define OTHER_H
#include "Member.h"

class Other : public Member {
    public:
        Other(string n, string r="Other", string d="one of the Other(s)"): Member(n,d) {setRole(r);};

        virtual string getRole(){return role;};
        virtual void setRole(string r){role=r;};

        virtual void getGreeting(int num);

        virtual int getTier(){return -1;}; 
        virtual int getCol(){return -1;};

    protected:
};

class Intellectual : public Other {
    public:
        Intellectual(string n, string e="", string r="Intellectual", string d="an intellectual"): Other(n, r, d) {setExpertise(e);};

        string getExpertise(){return expertise;};
        void setExpertise(string e){expertise=e;};

        virtual string getRole(){return role;};
        virtual void setRole(string r){role=r;};

        //virtual void getGreeting(int num);
    protected:
        string expertise;
};

class Neighbor : public Other {
    public:
        Neighbor(string n, string r="Neighbor", string d="a neighbor in the BBBB neighborhood"): Other(n, r, d) {};

    protected:
        
};

#endif