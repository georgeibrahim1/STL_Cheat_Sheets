#include <iostream>
#include <set>
#include <unordered_set>
using namespace std;

/*
 - Initializing
 - Iterators & Traversal
 - Insertion
 - Access
 - Searching
 - Modifiying
 - Proberties
 - Key comparison & value comparison
   - In Initialize
   - Compare Function
- Multiset Syntax
- Unordered set & Multiset
 - Syntax
 - Special Member Functions
*/

int main()
{

	//Initializing

	set<int> s;
	set<int> s2 = { 1 , 2, 3 , 3 , 4 }; // set 2 is a set of integers
	set<int> s3(s2.begin(), s2.end());  // set 3 is a copy of s2
	set<int> s4(s2);                    // set 4 is a copy of s2
	set<int> s({1,2,3,3,4,5,6,6});      //As a copy too

	//Iterators & Traversal

	set<int>::iterator it;
	it = s.begin();        // it will return the iterator to the first element
	it = s.end();          // it will return the iterator to the last element
	set<int>::reverse_iterator rit;                                                              //                          ?
	rit = s.rbegin();                // it will return the reverse iterator to the first element , i++ --> { begin , - , - , - , end }
	rit = s.rend();
	set<int>::const_iterator cit;    // Const iterator is used to iterate through the set without changing the value of the elements
	cit = s.cbegin();
	cit = s.cend();
	set<int>::const_reverse_iterator crit;
	crit = s.crbegin();
	crit = s.crend();

	//Insertion 

	s.insert(6);										    // insert using value
	s.insert({ 7, 8, 9 });								    // insert using initializer list
	s.insert(s.begin(), 10);                                // insert at the beginning
	s.emplace(2);										    // insert using emplace
	s.emplace_hint(s.begin(), 3);                           // insert at the beginning

	//Access  --> Doesn't support [] operator or at() function

	//Searching

	s.find(1);                     // it will return the iterator to the element with value 1 , if value is not present then it will return the iterator to the end
	s.count(1);                    // it will return the number of elements with value 1
	s.lower_bound(1);              // it will return the iterator to the first element with value not less than 1 (Means : >= 1) , if value is not present then it will return the iterator to the end
	s.upper_bound(1);              // it will return the iterator to the first element with value greater than 1 , if value is not present then it will return the iterator to the end
	s.equal_range(1);              // it will return a pair of iterators denoting the range of elements with value , Output : {lower_bound , upper_bound} = pair<iterator , iterator> 
	s.equal_range(1).first;        // it will return the iterator to the first element with value 1 , pair.first = the first element of a pair

	//Modifiying

	s.clear();                   // it will remove all the elements from the set
	s.erase(1);                  // it will remove the element with key 1
	s.erase(s.begin());          // it will remove the first element
	s.erase(s.begin(), s.end()); // it will remove the elements from the beginning to the end
	s.swap(s2);                  // it will swap the elements of m and m2
	s = s2;                      // it will copy the elements of m2 to m

	//Properties

	s.empty();    // it will return true if the set is empty
	s.max_size(); // it will return the maximum number of elements that the set can hold
	s.size();     // it will return the number of elements in the set

	//Key comparison & value comparison

	  // In Initialize
	set<int, less<int>> s5;    // { Useless ;) }  it will sort the values in ascending order
	set<int, string, greater<int>> s6; // it will sort the keys in descending order

	// Compare Function
	set<int>::key_compare comp = s.key_comp();          // it will return the key comparison function , We can use auto
	set<int>::value_compare comp2 = s.value_comp();     // it will return the value comparison function , We can use auto
	comp(1, 2);                                         // it will return true if 1 is less than 2 , check if the first parameter < second parameter
	comp(*s.begin(), *s.find(3));                      // Using * to get the value of the iterator (Sams as pointers)

	//Multiset Syntax
	
	multiset<int> ms; // it is a set that can have multiple elements with the same key
	//The same operations can be performed on multiset as on set but in different behaviours (Imagine it :D )


	//Unordered set & Multiset

	  // Syntax
	unordered_set<int> uset;     // it is a set that does not sort the keys
	unordered_multiset<int> ums; // it is a multiset that does not sort the keys
	//The same operations can be performed on unordered_set as on set but in different behaviours (Imagine it :D )

	  // Special Member Functions
	uset.bucket(1);            // it will return the bucket number of the value 1
	uset.bucket_count();       // it will return the number of buckets
	uset.max_bucket_count();   // it will return the maximum number of buckets that the container can have
	uset.bucket_size(1);       // it will return the number of elements in the bucket 1
	uset.max_size();           // it will return the maximum number of elements that the container can hold
	uset.load_factor();        // it will return the average number of elements per bucket (Size of all buckets / bucket_count) or (Num of all elements / Num of all Buckets)
	uset.max_load_factor();    // it will return the maximum load factor
	uset.rehash(10);           // Manual Rehashing --> Automatically rehashes the container when its size exceeds the maximum load factor (Inseting more elements)
	uset.reserve(10);                      // it will pre allocate the sufficient number of buckets for 10 elements , if the elements are more than 10 then it will rehash the container (Automatically)
	uset.hash_function();                  // it will return the hash function
		auto hash = uset.hash_function();  //instead of unordered_set<int, string>::hasher hash = uset.hash_function();
			cout << hash(1) << endl;       // it will return the hash value of 1
	uset.key_eq();                         // it will return the key equality function
		auto eq = uset.key_eq();           //instead of unordered_set<int, string>::key_equal eq = uset.key_eq();
			cout << eq(1, 2) << endl;      // it will return true if 1 is equal to 2

	return 0;
}