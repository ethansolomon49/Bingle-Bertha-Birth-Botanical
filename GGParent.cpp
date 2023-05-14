#include "GGParent.h"

#include <string>
using namespace std;

//Precondition: r can only be "Great Grandparent", "Great Grandmother", or "Great Grandfather"
void GreatGrandParent::setRole(string r) {
    if(r != "Great Grandparent" && r!= "Great Grandmother" && r!= "Great Grandfather"){
        cerr << "Please input a valid role: 'Great Grandparent', 'Great Grandmother', or 'Great Grandfather'";
        exit(0);
    } else {
        role = r;
    }
}

//Precondition: r can only be "Grandparent", "Grandmother", or "Grandfather"
void GrandParent::setRole(string r) {
    if(r != "Grandparent" && r!= "Grandmother" && r!= "Grandfather"){
        cerr << "Please input a valid role: 'Grandparent', 'Grandmother', or 'Grandfather'";
        exit(0);
    } else {
        role = r;
    }

}