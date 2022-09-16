 #include "Sequence.h"
 #include <initializer_list>
 
 
    /// Default ctor.
    Sequence::Sequence(){

    };

    /// Initializer list ctor.
    Sequence::Sequence(const std::initializer_list<value_type>& ilist){

    };

    /// If target was in the bag, then one copy has been removed;
    /// otherwise the bag is unchanged. 
    /// Internally, the items ARE maintained in insertion order.
    bool Sequence::erase_one(const value_type& target){

    };

    /// Removes a single item from the container.
    void Sequence::erase(size_type pos){

    };

    /// Access specified element.
    Sequence::value_type& at(Sequence::size_type pos){

    };

    const Sequence::value_type& at(Sequence::size_type pos) const{

    };

    /// Access the first element.
    Sequence::value_type& front(){

    };
    const Sequence::value_type& front() const{

    };

    /// Access the last element.
    Sequence::value_type& back(){

    };
    const Sequence::value_type& back() const{

    };

    /// Finds the first element equal to the given target.
    Sequence::size_type find(const Sequence::value_type& target, Sequence::size_type pos = 0) const{

    };