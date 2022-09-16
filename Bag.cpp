#include "bag.h"
#include <iostream>
#include <cassert>

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
       return size() == 0;
    };
	
    /// Inserts an item into the bag.
    /// Internally, the items are not maintained in any particular order.
    /// @pre size() < CAPACITY
    /// @param value Element value to insert.
    void Bag::insert(const value_type& value)
    {
      assert(size() < CAPACITY);
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
       bool found = false;

       for (size_type i = 0 ; i < size() && !found; i++){
        if (data[i] == target){
            --used;
            data[i] = data[used];
            found = true;
        }
       }

        return found;
    };
	
    /// After this call, size() returns zero.
    void Bag::clear()
    {
        used = 0;
    };
	
    /// Returns the number of items equal to the target.
    /// @param target Key value of the item(s) to count.
    ///@returns Number of items with value equal to the target.
    Bag::size_type Bag::count(const value_type& target) const
    {
       size_type count = 0;

       for (size_type i = 0 ; i < size() ; i++){
        if (data[i] == target){
            count++;
        }
       }

        return count;
    };

    /// Writes all items to an output stream in the format: {42,73,0,-59,7}
    /// @param output The output stream (defaults to std::cout).
    void Bag::write(std::ostream& output) const
    {
        output << '{';
        for (size_type i = 0 ; i < size() ; i++){
            output << data[i];
            if (i < used - 1){
                output << ",";
            };
        };
        output << '}';
    };