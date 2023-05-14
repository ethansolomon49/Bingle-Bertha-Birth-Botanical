#include "Bingle.h"

#include <string>
using namespace std;

//Precondition: r can only be "Bingle Bertha"
void Bingle::setRole(string r) {
    if(r != "Bingle Bertha"){
        cerr << "Please input a valid role: 'Bingle Bertha'";
        exit(0);
    } else {
        role = r;
    }
}

//Precondition: r can only be "Partner", "Wife", or "Husband"
void Partner::setRole(string r) {
    if(r != "Partner" && r!= "Wife" && r!= "Husband"){
        cerr << "Please input a valid role: 'Partner', 'Wife', or 'Husband'";
        exit(0);
    } else {
        role = r;
    }

}

//Precondition: r can only be "Sibling", "Sister", or "Brother"
void Sibling::setRole(string r) {
    if(r != "Sibling" && r!= "Sister" && r!= "Brother"){
        cerr << "Please input a valid role: 'Sibling', 'Sister', or 'Brother'";
        exit(0);
    } else {
        role = r;
    }

}

//Precondition: r can only be "Cousin"
void Cousin::setRole(string r) {
    if(r != "Cousin"){
        cerr << "Please input a valid role: 'Cousin'";
        exit(0);
    } else {
        role = r;
    }

}