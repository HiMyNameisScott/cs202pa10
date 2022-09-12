#include "bag.h"
using namespace std;

    /// Constructs the Bag.
   Bag::Bag()
   {
        used = 0;
   };
    
    /// Returns the number of items in the bag.
    /// @returns The number of items in the bag.
    Bag::size_type Bag::size() const
    {
       return used;
    };

    /// Checks if the bag has no items, ie whether size() == 0
    /// @returns true if the bag has no items, false otherwise.
    bool Bag::empty() const
    {
        bool success = true;
        if(used == 0){
            std::cout << "The bag is empty!" << '\n';
        } else {
            success = false;
        }
        return success;
    };
	
    /// Inserts an item into the bag.
    /// Internally, the items are not maintained in any particular order.
    /// @pre size() < CAPACITY
    /// @param value Element value to insert.
    void Bag::insert(const value_type& value)
    {
        data[used] = value;
        used ++;
    };
	
    /// If target was in the bag, then one copy has been removed;
    /// otherwise the bag is unchanged.
    /// Internally, the items are not maintained in any particular order.
    /// @param target Key value of the items to remove.
    /// @return true if one copy was removed; false if nothing removed.
    bool Bag::erase_one(const value_type& target)
    {
        value_type keep = 0;
        
        for (int i = 0; i < target ; i++){
            //figure out how to remove a single dupe
            
        }
        return 0;
    };
	
    /// After this call, size() returns zero.
    void Bag::clear()
    {
        used = 0;
        data[0] = 0;
        data[0];
    };
	
    // /// Returns the number of items equal to the target.
    // /// @param target Key value of the item(s) to count.
    // /// @returns Number of items with value equal to the target.
    // Bag::size_type Bag::count(const value_type& target) const
    // {
    //     int count = 0;
    //     for(int i = 0 ; i < used ; i ++){
            
    //         if (i = target){
    //             count ++;
    //         }
            
    //     }

    //     std::cout << "The number of target items is " << count << '\n';

    //     return 0;
    // };

    // /// Writes all items to an output stream in the format: {42,73,0,-59,7}
    // /// @param output The output stream (defaults to std::cout).
    // void Bag::write(std::ostream& output = std::cout) const
    // {
    //     std::cout << "check" << '\n';
    // };