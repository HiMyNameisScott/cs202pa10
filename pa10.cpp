//Scott T. Koss
//
//
//
//
//


#include <iostream>
#include "bag.h"
#include "bag.cpp"

using namespace std;

void add_to_bag(Bag& testBag);
void how_many_items(Bag& testBag);
void is_bag_empty(Bag& testBag);
void insert_sixteen(Bag& testBag);

int main(){
    

    Bag testBag; 

    cout << "Main is running" << endl;

    add_to_bag(testBag);
    how_many_items(testBag);
    testBag.count(6);
    testBag.write();
    is_bag_empty(testBag);
    testBag.clear();
    is_bag_empty(testBag);
    testBag.insert(-1);
    
    testBag.write();
    
    testBag.erase_one(-1);

    testBag.write();
    insert_sixteen(testBag);
    testBag.write();
    testBag.insert(1);

    cout << "Main has ended" << endl;
    return 0;
};

void insert_sixteen(Bag& testBag){
    for (int i = 0; i < testBag.CAPACITY + 1 ; i++){
        testBag.insert(i);
    }
}

void add_to_bag(Bag& testBag)
{

    for (int i = 1 ; i < 6 ; i++){
        testBag.insert(i);
        cout << "added " << i << " to the bag." << '\n';
    }

};

void how_many_items(Bag& testBag){
    int how_many = testBag.size();

    cout << "The number of items in the bag is " << how_many << '\n';

};

void is_bag_empty(Bag& testBag){
    bool is_empty = testBag.empty();

    if (is_empty == true){
    cout << "The bag currently does not hold any items" << '\n';
    } else {
        cout << "The bag currently holds items" << '\n';
    };

};