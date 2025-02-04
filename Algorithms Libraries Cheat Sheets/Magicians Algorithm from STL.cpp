#include <vector>       // For vectors
#include <list>         // For lists
#include <string>       // For strings
#include <algorithm>    // For algorithms

using namespace std; // Removes need for std::

/* Helper functions */
bool isEven(int x) { return x % 2 == 0; }   // Returns true if number is even
bool greaterThanFive(int x) { return x > 5; } // Returns true if number > 5
int square(int x) { return x * x; } // Returns the square of a number
void increment(int& x) { x++; } // Increments a number by 1

void algorithm_demo() {
    vector<int> v = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    vector<int> v2 = { 4, 5, 6, 7, 8, 9, 10 };
    vector<int> v3(v.size()); // Helper vector

    // Non-modifying sequence operations (algorithm)
    all_of(v.begin(), v.end(), isEven);  // Checks if all elements are even → false
    any_of(v.begin(), v.end(), isEven);  // Checks if any element is even → true
    none_of(v.begin(), v.end(), isEven); // Checks if no elements are even → false
    for_each(v.begin(), v.end(), increment); // Increments each element
    find(v.begin(), v.end(), 5); // Finds first occurrence of 5
    find_if(v.begin(), v.end(), greaterThanFive); // Finds first number > 5
    find_if_not(v.begin(), v.end(), greaterThanFive); // Finds first number ≤ 5
    find_end(v.begin(), v.end(), v2.begin(), v2.end()); // Finds last occurrence of v2 in v
    find_first_of(v.begin(), v.end(), v2.begin(), v2.end()); // Finds first match in v2
    adjacent_find(v.begin(), v.end()); // Finds first adjacent duplicate
    count(v.begin(), v.end(), 5); // Counts occurrences of 5
    count_if(v.begin(), v.end(), isEven); // Counts even numbers
    mismatch(v.begin(), v.end(), v2.begin()); // Finds first mismatch position
    equal(v.begin(), v.end(), v2.begin()); // Checks if ranges are equal
    is_permutation(v.begin(), v.end(), v2.begin()); // Checks if v is a permutation of v2
    search(v.begin(), v.end(), v2.begin(), v2.end()); // Finds v2 inside v
    search_n(v.begin(), v.end(), 2, 5); // Finds two consecutive 5s

    // Modifying sequence operations (algorithm)
    copy(v.begin(), v.end(), v3.begin()); // Copies elements from v to v3
    copy_n(v.begin(), 5, v3.begin()); // Copies first 5 elements
    copy_if(v.begin(), v.end(), v3.begin(), isEven); // Copies only even numbers
    copy_backward(v.begin(), v.end(), v3.end()); // Copies elements in reverse order
    move(v.begin(), v.end(), v3.begin()); // Moves elements (leaves original unspecified)
    move_backward(v.begin(), v.end(), v3.end()); // Moves elements in reverse order
    swap(v[0], v[1]); // Swaps first two elements
    swap_ranges(v.begin(), v.begin() + 3, v3.begin()); // Swaps first 3 elements between v & v3
    iter_swap(v.begin(), v3.begin()); // Swaps first element of v and v3
    transform(v.begin(), v.end(), v3.begin(), square); // Squares all elements
    replace(v.begin(), v.end(), 5, 50); // Replaces all 5s with 50
    replace_if(v.begin(), v.end(), isEven, 100); // Replaces all evens with 100
    replace_copy(v.begin(), v.end(), v3.begin(), 5, 50); // Copies & replaces 5s with 50
    fill(v.begin(), v.end(), 10); // Fills vector with 10s
    fill_n(v.begin(), 5, 20); // Fills first 5 elements with 20
    generate(v.begin(), v.end(), rand); // Fills vector with random numbers
    generate_n(v.begin(), 5, rand); // Generates 5 random numbers
    remove(v.begin(), v.end(), 5); // Removes all 5s
    remove_if(v.begin(), v.end(), isEven); // Removes all even numbers
    remove_copy(v.begin(), v.end(), v3.begin(), 5); // Copies v without 5s
    unique(v.begin(), v.end()); // Removes consecutive duplicates
    reverse(v.begin(), v.end()); // Reverses vector
    rotate(v.begin(), v.begin() + 3, v.end()); // Rotates left by 3 positions
    shuffle(v.begin(), v.end(), mt19937{ random_device{}() }); // Randomizes elements

    // Sorting operations (algorithm)
    sort(v.begin(), v.end()); // Sorts elements
    stable_sort(v.begin(), v.end()); // Stable sort
    partial_sort(v.begin(), v.begin() + 3, v.end()); // Partially sorts first 3 elements
    is_sorted(v.begin(), v.end()); // Checks if sorted
    nth_element(v.begin(), v.begin() + 3, v.end()); // Places nth element in correct position

    // Binary search operations (algorithm)
    lower_bound(v.begin(), v.end(), 5); // First position where 5 can be inserted
    upper_bound(v.begin(), v.end(), 5); // First element greater than 5
    equal_range(v.begin(), v.end(), 5); // Returns bounds where 5 can be inserted
    binary_search(v.begin(), v.end(), 5); // Checks if 5 is in the sorted vector

    // Merge operations (algorithm)
    merge(v.begin(), v.end(), v2.begin(), v2.end(), v3.begin()); // Merges sorted ranges
    inplace_merge(v.begin(), v.begin() + 5, v.end()); // Merges two sorted halves
    set_union(v.begin(), v.end(), v2.begin(), v2.end(), v3.begin()); // Union of v & v2
    set_intersection(v.begin(), v.end(), v2.begin(), v2.end(), v3.begin()); // Intersection
    set_difference(v.begin(), v.end(), v2.begin(), v2.end(), v3.begin()); // Elements in v not in v2
    set_symmetric_difference(v.begin(), v.end(), v2.begin(), v2.end(), v3.begin()); // Elements in one but not both

    // Heap operations (algorithm)
    make_heap(v.begin(), v.end()); // Converts into a heap
    push_heap(v.begin(), v.end()); // Pushes element into heap
    pop_heap(v.begin(), v.end()); // Pops top element
    sort_heap(v.begin(), v.end()); // Sorts heap
    is_heap(v.begin(), v.end()); // Checks if it is a heap

    // Min/Max operations (algorithm)
    max(10, 20); // Returns max of two values
    minmax(10, 20); // Returns min & max of two values
    min_element(v.begin(), v.end()); // Finds min element
    max_element(v.begin(), v.end()); // Finds max element
    minmax_element(v.begin(), v.end()); // Finds both min & max elements

    // Other operations (algorithm)
    lexicographical_compare(v.begin(), v.end(), v2.begin(), v2.end()); // Compares lexicographically
    next_permutation(v.begin(), v.end()); // Moves to next permutation
    prev_permutation(v.begin(), v.end()); // Moves to previous permutation
}

}

