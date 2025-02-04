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

	set<int, string> m = { {1 , "George"} , {2 , "is"} ,{ 3 , "writing"} ,{4 , "a"} ,{5 , "program"} }; // set is a set of pairs
	set<int, string> m2(m.begin(), m.end()); // set 2 is a copy of m
	set<int, string> m3(m); // set 3 is a copy of m
	set<int, string> m4; // Empty set

	//Iterators & Traversal

	set<int, string>::iterator it;
	it = m.begin();        // it will return the iterator to the first element
	it = m.end();          // it will return the iterator to the last element
	set<int, string>::reverse_iterator rit;                                           //                          ?
	rit = m.rbegin();     // it will return the reverse iterator to the first element , i++ --> { begin , - , - , - , end }
	rit = m.rend();
	set<int, string>::const_iterator cit;    // Const iterator is used to iterate through the set without changing the value of the elements
	cit = m.cbegin();           
	cit = m.cend();
	set<int, string>::const_reverse_iterator crit;
	crit = m.crbegin();
	crit = m.crend();

    //Insertion 

	m.insert(pair<int, string>(6, "using set"));		    // insert using pair
	m.insert({ 7, "STL" });								    // insert using initializer list
	m.insert(m.begin(), pair<int, string>(9, "library"));   // insert at the beginning
	m.insert_or_assign(9, "library");                       // if the kew is not present then it will insert the value , if key is present then it will update the value
	m.emplace(7, "in C++");								    // insert using emplace
	m.emplace(pair<int, string>(6, "using set"));           // insert using emplace with pairs
	m.emplace_hint(m.begin(), 8, "STL");                    // insert at the beginning
	m.emplace_hint(m.begin(), 9, "library");                // insert at the beginning
	m.try_emplace(9, "library");                            // if key is not present then it will insert the value , if key is present then it will do nothing
	
	//Access

	cout << m[1] << endl;              // if key is not present then it will insert the key with default value which is "" in case of string
	cout << m.at(2) << endl;           // if key is not present then it will throw an exception
	cout << m.begin()->first << endl;  // it will return the key of the first element (-> will be used for anything that return iterator)
	cout << m.begin()->second << endl; // it will return the value of the second element (-> will be used for anything that return iterator)



	//Searching
	
	m.find(1);                     // it will return the iterator to the element with key 1 , if key is not present then it will return the iterator to the end
	m.count(1);                    // it will return the number of elements with key 1
	m.lower_bound(1);              // it will return the iterator to the first element with key not less than 1 (Means : >= 1) , if key is not present then it will return the iterator to the end
	m.upper_bound(1);              // it will return the iterator to the first element with key greater than 1 , if key is not present then it will return the iterator to the end
	m.equal_range(1);              // it will return a pair of iterators denoting the range of elements with key , Output : {lower_bound , upper_bound} = pair<iterator , iterator> 
	m.equal_range(1).first;        // it will return the iterator to the first element with key 1 , pair.first = the first element of a pair
	m.equal_range(1).first->first; // it will return the key of the first iterator of the pair
	
	//Modifiying

	m.clear();                   // it will remove all the elements from the set
	m.erase(1);                  // it will remove the element with key 1
	m.erase(m.begin());          // it will remove the first element
	m.erase(m.begin(), m.end()); // it will remove the elements from the beginning to the end
	m.swap(m2);                  // it will swap the elements of m and m2
	m = m2;                      // it will copy the elements of m2 to m

	//Properties

	m.empty();    // it will return true if the set is empty
	m.max_size(); // it will return the maximum number of elements that the set can hold
	m.size();     // it will return the number of elements in the set

	//Key comparison & value comparison

	  // In Initialize
	set<int, string, less<int>> m5;    // { Useless ;) }  it will sort the keys in ascending order
	set<int, string, greater<int>> m6; // it will sort the keys in descending order

	  // Compare Function
	set<int, string >::key_compare comp = m.key_comp();          // it will return the key comparison function , We can use auto
	set<int, string >::value_compare comp2 = m.value_comp();     // it will return the value comparison function , We can use auto
	comp(1, 2);                                                  // it will return true if 1 is less than 2 , it takes two keys as arguments , check if the first parameter < second parameter
	comp2(pair<int, string>(1, "a"), pair<int, string>(2, "b")); // it will return true if 1 is less than 2
	comp(m.begin()->first, m.find(3)->first);                    // it will return false (it will return true if the first key is less than the second key

	//Multiset Syntax
	
	multiset<int, string> mm; // it is a set that can have multiple elements with the same key
	//The same operations can be performed on multiset as on set but in different behaviours (Imagine it :D )


	//Unordered set & Multiset

	  // Syntax
	unordered_set<int, string> uset;     // it is a set that does not sort the keys
	unordered_multiset<int, string> umm; // it is a multiset that does not sort the keys
	//The same operations can be performed on unordered_set as on set but in different behaviours (Imagine it :D )

	  // Special Member Functions
	uset.bucket(1);            // it will return the bucket number of the key 1
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