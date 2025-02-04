#include <iostream>
#include <forward_list>
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

    forward_list<int> l1 = { 1, 2, 3, 4, 5 };
    forward_list<int> l2(5, 10);  // 5 elements with value 10
    forward_list<int> l3(l1.begin(), l1.end());
    forward_list<int> l4(l3);

    // Iterators & Traversal

    forward_list<int>::iterator it;
    it = l1.begin();        // it will return the iterator to the first element
    it = l1.end();          // it will return the iterator to the last element
	it = l1.before_begin(); // it will return the iterator before the first element
    forward_list<int>::const_iterator cit;   // Const iterator is used to iterate through the list without changing the value of the elements
    cit = l1.cbegin();
    cit = l1.cend();
	cit = l1.cbefore_begin();
 
    // Access --> Doesn't support [] operator or at() function

    l1.front();                         // Returns the first element

    // Insertion

    l1.push_front(0);                   // insert at the beginning
    l1.emplace_front(-1);               // insert at the beginning
    l1.insert_after(l1.begin(), 2);     // insert after the first element
    l1.insert_after(l1.begin(), 3, 3);  // insert ( itr , n , value ) after the first element
    l1.insert_after(l1.begin(), l2.begin(), l2.end());  // insert elements from l2 after the first element
    l1.insert_after(l1.begin(), { 4, 5, 6 }); // insert at the beginning
    l1.emplace_after(l1.begin(), 1);          // insert at the beginning

    // Modifying
   
    l1.clear();                         // Removes all elements from the list
    l1.pop_front();                     // Removes the first element
    l1.erase_after(l1.begin());         // Removes the element after the first element
    l1.erase_after(l1.begin(), l1.begin());  // Removes the elements in the range
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
	l1.splice_after(l1.begin(), l2);    // Moves all elements of l2 to l1
	l1.splice_after(l1.begin(), l2, l2.begin()); // Moves the first element of l2 to l1
	l1.splice_after(l1.begin(), l2, l2.begin(), l2.end()); // Moves the elements in the range of l2 to l1


    // Properties

    l1.max_size();                      // Returns the maximum size of the list
    l1.empty();                         // Returns true if the list is empty

    return 0;
}
