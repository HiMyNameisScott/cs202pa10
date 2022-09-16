#ifndef SEQUENCE_H
#define SEQUENCE_H

#include <initializer_list>
#include "bag.h"

/// A Sequence is a Bag that stores a set of values,
/// maintaining insertion order.

class Sequence : public Bag {
public:
    /// Default ctor.
    Sequence();

    /// Initializer list ctor.
    Sequence(const std::initializer_list<value_type>& ilist);

    /// If target was in the bag, then one copy has been removed;
    /// otherwise the bag is unchanged. 
    /// Internally, the items ARE maintained in insertion order.
    bool erase_one(const value_type& target);

    /// Removes a single item from the container.
    void erase(size_type pos);

    /// Access specified element.
    value_type& at(size_type pos);
    const value_type& at(size_type pos) const;

    /// Access the first element.
    value_type& front();
    const value_type& front() const;

    /// Access the last element.
    value_type& back();
    const value_type& back() const;

    /// Finds the first element equal to the given target.
    size_type find(const value_type& target, size_type pos = 0) const;
};

/// Returns true if the lhs parameter compares equal to the rhs parameter.
bool equal(const Sequence& lhs, const Sequence& rhs);

#endif /* SEQUENCE_H */