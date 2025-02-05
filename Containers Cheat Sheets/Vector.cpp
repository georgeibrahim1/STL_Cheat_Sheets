#include <iostream>
#include <vector>
using namespace std;

/*
 - Initializing
 - Iterators & Traversal
 - Insertion
 - Access
 - Modifiying
 - Proberties
*/

int main()
{
	// Initializing

	vector<int> v1 = { 1, 2, 3, 4, 5 };
	vector<int> v2(5, 10); // 5 elements with value 10
	vector<int> v3(v1.begin(), v1.end());
	vector<int> v4(v3);

	// Iterators & Traversal

	vector<int>::iterator it;
	it = v1.begin();        // it will return the iterator to the first element
	it = v1.end();          // it will return the iterator to (after) last element
	vector<int>::reverse_iterator rit;                                                              //                          ↓
	rit = v1.rbegin();                  // it will return the reverse iterator to the first element , i++ --> { begin , - , - , - , end }
	rit = v1.rend();
	vector<int>::const_iterator cit;    // Const iterator is used to iterate through the vector without changing the value of the elements
	cit = v1.cbegin();
	cit = v1.cend();
	vector<int>::const_reverse_iterator crit;
	crit = v1.crbegin();
	crit = v1.crend();

	v1.data();                         // Returns the pointer (Not iterator) to the first element

	// Insertion

	v1.push_back(6);										    // insert at the end
	v1.emplace_back(7);									        // insert at the end
	v1.emplace(v1.begin(), 0);                                  // insert at the beginning
	v1.insert(v1.begin(), 2);                                   // insert at the beginning
	v1.insert(v1.begin(), 3, 3);                                // insert ( itr , n , value ) at the beginning
	v1.insert(v1.begin(), v2.begin(), v2.end());                // insert at the beginning
	v1.insert(v1.begin(), { 4, 5, 6 });                         // insert at the beginning
	

	// Access

	cout << v1[0] << endl;             // Access using [] operator , Can modify the value
	cout << v1.at(0) << endl;          // Access using at() function , Can't modify the value
	v1.front();                        // Returns the first element
	v1.back();                         // Returns the last element

	// Modifiying

	v1.clear();                                                 // Removes all elements from the vector
	v1.reserve(10);                                             // Reserves the memory for 10 elements
	v1.shrink_to_fit();                                         // Shrinks the capacity to fit the size
	v1.pop_back();                                              // Removes the last element
	v1.erase(v1.begin());                                       // Removes the element at the position
	v1.erase(v1.begin(), v1.begin() + 2);                       // Removes the elements in the range
	v1.swap(v2);                                                // Swaps the elements of two vectors
	v1 = v2;                                                    // Replaces the elements of v1 with v2
	v1.resize(10);                                              // Resizes the vector to 10 elements
	v1.resize(10, 5);                                           // Resizes the vector to 10 elements with value 5
	v1.assign(5, 10);                                           // Replacing all existing elements --> ( n , value )
	v1.assign(v2.begin(), v2.end());                            // Replacing all existing elements with v2 --> ( itr , itr )
	v1.assign({ 1, 2, 3, 4, 5 });                               // Replacing all existing elements with initializer list


	// proberites

	v1.capacity();                     // Returns the capacity of the vector
	v1.max_size();                     // Returns the maximum size of the vector
	v1.empty();                        // Returns true if the vector is empty
	v1.size();                         // Returns the size of the vector
	
	

    return 0;
}
