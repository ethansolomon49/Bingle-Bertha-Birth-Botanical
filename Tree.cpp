#include "Tree.h"
#include "Bingle.h"
#include "Children.h"
#include "GGParent.h"
#include "Parent.h"
#include "Member.h"
#include <vector>
#include <iostream>


using namespace std;

Tree::Tree() {
    //push back tier number of vectors into v
    // and then push in however many empty vectors

    for(int i = 0; i < 6; i++) { //5 vectors
        vector<vector<Member*> > v1;
        v.push_back(v1);
    }

    //great grandparent
    Member *ggp = new GreatGrandParent("Great Grandparent(s): ");
    vector<Member*> v2; 
    v.at(0).push_back(v2);
    v.at(0).at(0).push_back(ggp);

    //grandparent
    Member *gp = new GrandParent("Grandparent(s): ");
    vector<Member*> v3; 
    v.at(1).push_back(v3);
    v.at(1).at(0).push_back(gp);


    //god, parent, auncle
    Member *g = new Godparent("Godrelative(s): ");
    Member *p = new Parent("Parents: ");
    Member *au = new Auncle("Auncle(s): ");
    vector<Member*> v4, v5, v6; 
    v.at(2).push_back(v4);
    v.at(2).push_back(v5);
    v.at(2).push_back(v6);
    v.at(2).at(0).push_back(g);
    v.at(2).at(1).push_back(p);
    v.at(2).at(2).push_back(au);


    //bingle
    vector<Member*> v7, v8, v9, v10; 
    Member *b = new Bingle("Bingle Bertha(s): ");
    Member *pt = new Partner("Partner(s): ");
    Member *sib = new Sibling("Sibling(s): ");
    Member *c = new Cousin("Cousin(s): ");
    v.at(3).push_back(v7);
    v.at(3).push_back(v8);
    v.at(3).push_back(v9);
    v.at(3).push_back(v10);
    v.at(3).at(0).push_back(b);
    v.at(3).at(1).push_back(pt);
    v.at(3).at(2).push_back(sib);
    v.at(3).at(3).push_back(c);



    //child
    Member *pet = new Pet("Pet(s): ", "");
    Member *child = new Child("Child(ren): ");
    vector<Member*> v11, v12;
    v.at(4).push_back(v11);
    v.at(4).push_back(v12);
    v.at(4).at(0).push_back(pet);
    v.at(4).at(1).push_back(child);


    //grandchild
    Member *gc = new Grandchild("Grandchild(ren): ");
    vector<Member*> v13;
    v.at(5).push_back(v13);
    v.at(5).at(0).push_back(gc);
}

void Tree::addToTree(Member* m) {
    //v.at(0).at(0).push_back(m);
    v.at(m->getTier()).at(m->getCol()).push_back(m);

}

void Tree::print() {

    for(int i = 0; i < int(v.size()); i++) {
        cout << "Group " << i << " of ";
        cout << endl;
        for(int j = 0; j < int(v.at(i).size()); j++) {
            for(int k = 0; k < int(v.at(i).at(j).size()); k++) {
                cout << v.at(i).at(j).at(k)->getName();   

                if(k==0) cout << "";   
                else if(k!=int(v.at(i).at(j).size()-1)) cout << ", ";    
                else cout << endl;      
            }
            cout << endl;
        }
        cout << endl;
    }
}

void Tree::printDescription(string name) {
    //find the person/pet/other and print their greeting
}