#include <iostream>
#include <array>
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

    array<int, 5> arr1 = { 1, 2, 3, 4, 5 };          // Array initialization
    array<int, 5> arr2 = { 10, 10, 10, 10, 10 };      // Array with specific value
    array<int, 5> arr3 = {};                         // Array with default values (zeros)

	// Iterators & Traversal

	array<int, 5>::iterator it;
	it = arr1.begin();        // it will return the iterator to the first element
	it = arr1.end();          // it will return the iterator to the last element
	array<int, 5>::reverse_iterator rit;  // reverse iterator
	rit = arr1.rbegin();      // it will return the reverse iterator to the first element
	rit = arr1.rend();
	array<int, 5>::const_iterator cit;   // Const iterator is used to iterate through the array without changing the value of the elements
	cit = arr1.cbegin();
	cit = arr1.cend();
	array<int, 5>::const_reverse_iterator crit;  // Const reverse iterator
	crit = arr1.crbegin();
	crit = arr1.crend();


	//insertion --> No push_back() or push_front() or insert() or emplace() functions

    // Access

    arr1[0];                         // Access using [] operator
    arr1.at(1);                       // Access using at() with bounds checking
	arr2.front();                     // Access the first element
    arr2.back();                      // Access the last element

    // Modifying

    arr1[0] = 100;                                   // Modify element at index 0
    arr1.at(0) = 10;                                   // Modify element at index 0
    arr3.fill(20);                                    // Fill all elements with 20
	arr1.swap(arr2);                                  // Swap the elements of two arrays
	arr1 = arr2;                                      // Replace the elements of arr1 with arr2


    // Properties

    arr1.size();   // Size of array
    arr1.max_size(); // Max size of the array
    arr1.empty() ; // Check if empty

    return 0;
}
