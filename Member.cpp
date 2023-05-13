#include "Member.h"
#include<string>

using namespace std;

void Member::getGreeting(){
    cout << "Hi, my name is " << getName() << " and my role is " << getRole() << "!" << endl;
    cout << "A description of me is: " << getDescription() << endl;
}

        // Hi, my name is (name)! 
        // My role is : (role).
        // A description of me is: 