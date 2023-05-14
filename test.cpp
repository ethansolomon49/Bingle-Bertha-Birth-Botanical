#include "Member.h"
#include "Bingle.h"
#include "Children.h"
#include "GGParent.h"
#include "Parent.h"

#include <iostream>

using namespace std;

int main() {
    Pet cat("cattac", "meeowww", "cat", "demonic cat");
    cout <<"test" << endl;
    cat.getGreeting(8);

    // Grandchild g("Yerb", "Grandchild", "good mate");
    // g.getGreeting(0);

    return 0;
}