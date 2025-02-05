#include <iostream>
#include <deque>
using namespace std;

/*
 - Initializing
 - Iterators & Traversal
 - Insertion
 - Access
 - Modifying
 - Properties
*/

int main()
{
    // Initializing

    deque<int> d1 = { 1, 2, 3, 4, 5 };
    deque<int> d2(5, 10);  // 5 elements with value 10
    deque<int> d3(d1.begin(), d1.end());
    deque<int> d4(d3);

    // Iterators & Traversal

    deque<int>::iterator it;
    it = d1.begin();        // it will return the iterator to the first element
    it = d1.end();          // it will return the iterator to the last element
    deque<int>::reverse_iterator rit;  // reverse iterator
    rit = d1.rbegin();      // it will return the reverse iterator to the first element
    rit = d1.rend();
    deque<int>::const_iterator cit;   // Const iterator is used to iterate through the deque without changing the value of the elements
    cit = d1.cbegin();
    cit = d1.cend();
    deque<int>::const_reverse_iterator crit;  // Const reverse iterator
    crit = d1.crbegin();
    crit = d1.crend();

	// Insertion

	d1.push_back(6);                                            // insert at the end
	d1.push_front(0);                                           // insert at the beginning
	d1.emplace_back(7);                                         // insert at the end
	d1.emplace_front(-1);                                       // insert at the beginning
	d1.insert(d1.begin(), 2);                                   // insert at the beginning
	d1.insert(d1.begin(), 3, 3);                                // insert ( itr , n , value ) at the beginning
	d1.insert(d1.begin(), d2.begin(), d2.end());                // insert at the beginning
	d1.insert(d1.begin(), { 4, 5, 6 });                         // insert at the beginning
	d1.emplace(d1.begin(), 1);                                  // insert at the beginning

    // Access

    d1[0];                                       // Access using [] operator
    d1.at(0);                                    // Access using at() function
    d1.front();                                  // Access first element
    d1.back();                                   // Access last element

    // Modifying

    d1.clear();                                                 // Removes all elements from the deque
	d1.shrink_to_fit();                                         // Reallocation of memory
    d1.pop_back();                                              // Removes the last element
    d1.pop_front();                                             // Removes the first element
    d1.erase(d1.begin());                                       // Removes the element at the position
    d1.erase(d1.begin(), d1.begin() + 2);                       // Removes the elements in the range
    d1.swap(d2);                                                // Swaps the elements of two deques
    d1 = d2;                                                    // Replaces the elements of d1 with d2
    d1.resize(10);                                              // Resizes the deque to 10 elements
    d1.resize(10, 5);                                           // Resizes the deque to 10 elements with value 5
    d1.assign(5, 10);                                           // Replacing all existing elements --> ( n , value )
    d1.assign(d2.begin(), d2.end());                            // Replacing all existing elements with d2 --> ( itr , itr )
    d1.assign({ 1, 2, 3, 4, 5 });                               // Replacing all existing elements with initializer list

    // Properties

    d1.size();                 // `deque` does not have capacity() as it is dynamic in nature
    d1.max_size();              // Returns the maximum size of the deque
    d1.empty();                    // Returns true if the deque is empty
    d1.size();                      // Returns the size of the deque
    d1.front();                    // Returns the first element
    d1.back();                      // Returns the last element

    return 0;
}
