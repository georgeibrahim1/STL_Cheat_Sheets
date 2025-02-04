#include <vector>       // For vectors
#include <numeric>      // For numeric algorithms
#include <iostream>     // For output

using namespace std; // Removes need for std::

/* Helper functions */
int multiply(int x, int y) { return x * y; } // Multiplies two numbers
int add(int x, int y) { return x + y; }      // Adds two numbers

void numeric_demo() {
    vector<int> v = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    vector<int> v2 = { 4, 5, 6, 7, 8, 9, 10 };
    vector<int> v3(v.size()); // Helper vector

    // Accumulate: Sum all elements (or perform a custom operation)
    int sum = accumulate(v.begin(), v.end(), 0); // Sums all elements → 45
    int product = accumulate(v.begin(), v.end(), 1, multiply); // Multiplies all elements → 362880

    // Inner Product: Computes the inner product of two ranges
    int dot_product = inner_product(v.begin(), v.end(), v2.begin(), 0); // Dot product of v and v2
    int custom_inner_product = inner_product(v.begin(), v.end(), v2.begin(), 0, add, multiply); // Custom operation

    // Partial Sum: Computes the partial sums of a range
    partial_sum(v.begin(), v.end(), v3.begin()); // v3 = {1, 3, 6, 10, 15, 21, 28, 36, 45}

    // Adjacent Difference: Computes differences between adjacent elements
    adjacent_difference(v.begin(), v.end(), v3.begin()); // v3 = {1, 1, 1, 1, 1, 1, 1, 1, 1}

    // Iota: Fills a range with sequentially increasing values
    iota(v3.begin(), v3.end(), 10); // v3 = {10, 11, 12, 13, 14, 15, 16, 17, 18}
}