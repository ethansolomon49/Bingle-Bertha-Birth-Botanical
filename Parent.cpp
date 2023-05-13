#include "Parent.h"
#include <string>

using namespace std;

void Parent::setRole(string r){
    //must be "Parent", "Mother", or "Father"
    if(r!="Parent" || r!="Mother" || r!="Father"){
        cerr << "Please input a valid role: 'Parent', 'Mother', or 'Father'";
        exit(0);
    } else {
        role = r;
    }
}

void Godparent::setRole(string r){
    //must be 'Godparent','Godmother','Godfather'
    if(r!="Godparent" || r!="Godmother" || r!="Godfather"){
        cerr << "Please input a valid role: 'Godparent','Godmother','Godfather'";
        exit(0);
    } else {
        role = r;
    }
}

void Auncle::setRole(string r){
    //must be 'Auncle', 'Aunt', or 'Uncle'
    if(r!="Auncle" || r!="Aunt" || r!="Uncle"){
        cerr << "Please input a valid role: 'Auncle', 'Aunt', or 'Uncle'";
        exit(0);
    } else {
        role = r;
    }
}