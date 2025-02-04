#include <iostream>
#include <stack>
using namespace std;

/*
 - Initializing
 - Insertion
 - Access
 - Modifying
 - Properties
*/

int main()
{
    // Initializing

    stack<int> s1;                    // Empty stack
	stack<int> s2(s1);                // Stack initialized to a copy of s1
   
    // Insertion

    s1.push(10);                      // Push an element onto the stack
    s1.push(20);                      // Push another element
    s1.push(30);                      // Push another element
	s1.emplace(40);                   // Push an element onto the stack
    // Access

    s1.top();                         // Access the top element (does not remove it)

    // Modifying

    s1.pop();                         // Removes the top element
    s1.swap(s2);                      // Swaps the contents of two stacks
    s1 = s2;                          // Assign stack s2 to stack s1

    // Properties

    s1.empty();                       // Check if stack is empty
	s1.top();                         // Access the top element (does not remove it)
    s1.size();                        // Get the size of the stack
    s1.swap(s2);                      // Swaps the contents of two stacks

    return 0;
}
