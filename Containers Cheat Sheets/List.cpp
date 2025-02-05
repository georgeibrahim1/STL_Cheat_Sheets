#include <iostream>
#include <list>
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

    list<int> l1 = { 1, 2, 3, 4, 5 };
    list<int> l2(5, 10);  // 5 elements with value 10
    list<int> l3(l1.begin(), l1.end());
    list<int> l4(l3);

    // Iterators & Traversal

    list<int>::iterator it;
    it = l1.begin();                         // it will return the iterator to the first element
    it = l1.end();                           // it will return the iterator to the last element
    list<int>::reverse_iterator rit;         // reverse iterator
    rit = l1.rbegin();                       // it will return the reverse iterator to the first element
    rit = l1.rend();
    list<int>::const_iterator cit;           // Const iterator is used to iterate through the list without changing the value of the elements
    cit = l1.cbegin();
    cit = l1.cend();
    list<int>::const_reverse_iterator crit;  // Const reverse iterator
    crit = l1.crbegin();
    crit = l1.crend();

	// Access --> Doesn't support [] operator or at() function
    
    l1.front();                         // Returns the first element
    l1.back();                          // Returns the last element

    // Insertion

    l1.push_back(6);                    // insert at the end
    l1.push_front(0);                   // insert at the beginning
    l1.emplace_back(7);                 // insert at the end
    l1.emplace_front(-1);               // insert at the beginning
    l1.insert(l1.begin(), 2);           // insert at the beginning
    l1.insert(l1.begin(), 3, 3);        // insert ( itr , n , value ) at the beginning
    l1.insert(l1.begin(), l2.begin(), l2.end());  // insert at the beginning
    l1.insert(l1.begin(), { 4, 5, 6 }); // insert at the beginning
    l1.emplace(l1.begin(), 1);          // insert at the beginning

    // Modifying

    l1.clear();                         // Removes all elements from the list
    l1.pop_back();                      // Removes the last element
    l1.pop_front();                     // Removes the first element
    l1.erase(l1.begin());               // Removes the element at the position
    l1.erase(l1.begin(), l1.begin() + 2);  // Removes the elements in the range
    l1.swap(l2);                        // Swaps the elements of two lists
    l1 = l2;                            // Replaces the elements of l1 with l2
    l1.resize(10);                      // Resizes the list to 10 elements
    l1.resize(10, 5);                   // Resizes the list to 10 elements with value 5
    l1.assign(5, 10);                   // Replacing all existing elements --> ( n , value )
    l1.assign(l2.begin(), l2.end());    // Replacing all existing elements with l2 --> ( itr , itr )
    l1.assign({ 1, 2, 3, 4, 5 });       // Replacing all existing elements with initializer list
	l1.remove(5);                       // Removes all elements with value 5
	l1.remove_if([](int x) { return x % 2 == 0; }); // Removes all elements that satisfy the condition
	l1.unique();                        // Removes all duplicate elements
	l1.unique([](int x, int y) { return x == y; }); // Removes all elements that satisfy the condition
	l1.merge(l2);                       // Merges two lists
	l1.sort();                          // Sorts the list
	l1.reverse();                       // Reverses the list
	l1.splice(l1.begin(), l2);          // Moves all elements of l2 to l1
	l1.splice(l1.begin(), l2, l2.begin()); // Moves the first element of l2 to l1
	l1.splice(l1.begin(), l2, l2.begin(), l2.end()); // Moves the elements in the range of l2 to l1
	
    // Properties

    l1.size();                          // Returns the size of the list
    l1.max_size();                      // Returns the maximum size of the list
    l1.empty();                         // Returns true if the list is empty

    return 0;
}
