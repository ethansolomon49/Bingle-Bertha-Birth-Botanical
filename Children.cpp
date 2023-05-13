#include "Children.h"

#include <string>
using namespace std;

void Pet::setRole(string r) {
    role = r;
}

//Precondition: r can only be "Child", "Daughter", or "Son"
void Child::setRole(string r) {
    if(r != "Child" || r!= "Daughter" || r!= "Son"){
        cerr << "Please input a valid role: 'Child', 'Daughter', or 'Son'";
        exit(0);
    } else {
        role = r;
    }

}

//Precondition: r can only be "Grandchild", "Granddaughter", "Grandson"
void Grandchild::setRole(string r) {
    if(r != "Grandchild" || r!= "Granddaughter" || r!= "Grandson"){
        cerr << "Please input a valid role: 'Grandchild', 'Granddaughter', or 'Grandson'";
        exit(0);
    } else {
        role = r;
    }

}