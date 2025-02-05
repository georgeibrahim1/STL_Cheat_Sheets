#include <iostream>
#include <queue>
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

    queue<int> q1;                       // Empty queue
    queue<int> q2(q1);                   // Queue initialized to a copy of q1
    queue<int> q3({ 1, 2, 3, 4, 5 });    // Queue initialized with initializer list

   
    // Insertion

    q1.push(10);                      // Push an element onto the queue
    q1.push(20);                      // Push another element
    q1.push(30);                      // Push another element
    q1.emplace(40);                   // Emplace an element onto the queue

    // Access

    q1.front();                       // Access the front element (does not remove it)
    q1.back();                        // Access the back element (does not remove it)

    // Modifying

    q1.pop();                         // Removes the front element
    q1.swap(q2);                      // Swaps the contents of two queues
    q1 = q2;                          // Assign queue q2 to queue q1

    // Properties

    q1.empty();                       // Check if queue is empty
    q1.size();                         // Get the size of the queue
    q1.swap(q2);                      // Swaps the contents of two queues

    return 0;
}
