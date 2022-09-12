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
//void is_bag_empty(Bag& testBag);

int main(){
    

    Bag testBag; 

    cout << "Main is running" << endl;

    add_to_bag(testBag);
    how_many_items(testBag);

    cout << "Main has ended" << endl;
    return 0;
};

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

//void is_bag_empty(Bag& testBag){
//
//};