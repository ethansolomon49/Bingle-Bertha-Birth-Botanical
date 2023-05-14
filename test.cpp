#include "Member.h"
#include "Bingle.h"
#include "Children.h"
#include "GGParent.h"
#include "Parent.h"
#include "Tree.h"

#include <iostream>

using namespace std;

int main() {
    // Pet cat("cattac", "meeowww", "cat", "demonic cat");
    // cout <<"test" << endl;
    // cat.getGreeting(8);
    // cout << endl;
    // Grandchild g("Yerb", "Grandchild", "good mate");
    // g.getGreeting(0);
    Member *yaryar = new GreatGrandParent("Yarwin", "Great Grandmother", "An excellent coder");

    Member *jaja = new GrandParent("Jada", "Grandmother", "Actually a grandaunt; it's complicated...");

    Member *riri = new Parent("Riya", "Mother", "Birthed Bingle Bertha");
    Member *sasa = new Parent("Sam", "Father", "Went to buy milk and never came back");

    Member *amam = new Auncle("Amelie", "Aunt", "Carlos' mother");
    Member *sydsyd = new Auncle("Sydney", "Aunt", "Amelie's wife; wants to be a fairy godmother but was unsuccessful");
    Member *paupau = new Auncle("Paulina", "Aunt", "Just there");
    Member *alal = new Auncle("Ally", "Aunt", "Magical");
    Member *jenjen = new Auncle("Jennifer", "Aunt", "Rich aunt with two fluffy small white dogs");
    Member *corcor = new Auncle("Corey", "Uncle", "Carlos' mother but also tried to ask Bingle Bertha to be his valentine :/// (problematic)");
    Member *lizliz = new Auncle("Liz", "Aunt", "Cool Kid");

    Member *shivshiv = new Godparent("Shivani", "Godmother", "One of the founding fathers of the BBBB");
    Member *etheth = new Godparent("Ethan", "Godfather", "The best godfather");
    Member *gigi = new Godparent("Giselle", "Godmother", "Fairy godmother; Booie's mom");
    Member *concon = new Godparent("Conor", "Godfather", "Wannabe godfather");
    Member *hanhan = new Godparent("Hannah", "Godmother", "Actually a godaunt; not sure what that means");

    Member *bingle = new Bingle("Bingle Bertha", "Bingle Bertha", "The iconic phenomenon bringing our cohort together");
    
    Member *jessjess = new Partner("Jess", "Wife", "Ex-wife who is still willing to take back Bingle Bertha");

    Member *niknik = new Sibling("Nikhil", "Brother", "Schrodinger's Siblings; sometimes younger sometimes older ???");
    Member *sidsid = new Sibling("Sid", "Brother", "Just a brother");
    Member *cloocloo = new Sibling("Clooie", "Sister", "Riya's other child; a fluffy pillow pet");
    Member *jessiessi = new Sibling("Jessi", "Sister", "Bingle Bertha's bestie");
    Member *nugnug = new Sibling("Nugget the Octopus", "Brother", "Ethan's child; technically a godbrother");

    Member *javjav = new Cousin("Javin", "Cousin", "Honorary intellectual cousin");
    Member *carcar = new Cousin("Carlos the Capy", "Cousin", "Corey and Amelie's child");
    Member *juju = new Cousin("Julia", "Cousin", "Roommates with Bingle Bertha's sibling AND ex-wife");
    Member *booboo = new Cousin("Booie", "Cousin", "Giselle's child; a fluffy pillow pet");
    Member *moomoo = new Cousin("Mooie", "Cousin", "Nicole's child; a deflated fluffy pillow pet");

    Member *jerjer = new Pet("Jerry", "meeowww", "Cat", "Meows and nyas all day");
    Member *kevkev = new Pet("Kevin", "squeak", "Rat", "Not Kevin Burk");

    Member *dondon = new Grandchild("Donovan", "Grandson", "Has no parents and is lonely");

    Tree t;
    
    t.addToTree(yaryar);
    t.addToTree(jaja);
    t.addToTree(riri);
    t.addToTree(sasa);
    t.addToTree(amam);
    t.addToTree(sydsyd);
    t.addToTree(paupau);
    t.addToTree(alal);
    t.addToTree(jenjen);
    t.addToTree(corcor);
    t.addToTree(lizliz);
    t.addToTree(shivshiv);
    t.addToTree(etheth);
    t.addToTree(gigi);
    t.addToTree(concon);
    t.addToTree(hanhan);
    t.addToTree(bingle);
    t.addToTree(jessjess);
    t.addToTree(niknik);
    t.addToTree(sidsid);
    t.addToTree(cloocloo);
    t.addToTree(jessiessi);
    t.addToTree(nugnug);
    t.addToTree(javjav);
    t.addToTree(carcar);
    t.addToTree(juju);
    t.addToTree(booboo);
    t.addToTree(moomoo);
    t.addToTree(jerjer);
    t.addToTree(kevkev);
    t.addToTree(dondon);

    t.print();

    return 0;
}