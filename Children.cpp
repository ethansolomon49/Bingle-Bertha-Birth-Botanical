#include "Children.h"

#include <string>
using namespace std;

void Pet::setRole(string r) {
    role = r;
}

void Pet::setSound(string s) {
    sound = s;
}

void Pet::getGreeting(int num){
    cout << getName() << " the " << getRole() << " says hi: ";
    for(int i=0; i<num; ++i){
        cout << getSound() << " ";
    }
    cout << endl;

    cout << "This is my description: " << getDescription() << endl;
}

//Precondition: r can only be "Child", "Daughter", or "Son"
void Child::setRole(string r) {
    if(r != "Child" && r!= "Daughter" && r!= "Son"){
        cerr << "Please input a valid role: 'Child', 'Daughter', or 'Son'";
        exit(0);
    } else {
        role = r;
    }
}

//Precondition: r can only be "Grandchild", "Granddaughter", "Grandson"
void Grandchild::setRole(string r) {
    if((r != "Grandchild") && (r!= "Granddaughter") && (r!= "Grandson")){
        cerr << "Please input a valid role: 'Grandchild', 'Granddaughter', or 'Grandson'";
        exit(0);
    } else {
        role = r;
    }
}
