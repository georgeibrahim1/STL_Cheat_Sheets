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

    priority_queue<int> pq1;                    // Empty priority queue (default max-heap)
    priority_queue<int, vector<int>, greater<int>> pq2; // Min-heap
    priority_queue<int> pq3;

    // Insertion

    pq1.push(10);                      // Push an element onto the priority queue
    pq1.push(20);                      // Push another element
    pq1.push(30);                      // Push another element
    pq1.emplace(40);                   // Emplace an element onto the priority queue

    pq2.push(15);                      // Push an element onto the min-heap
    pq2.push(5);                       // Push another element
    pq2.push(25);                      // Push another element

    // Access

    pq1.top();                         // Access the top element (highest priority, doesn't remove it)
    pq2.top();                         // Access the top element (lowest priority in min-heap, doesn't remove it)

    // Modifying

    pq1.pop();                         // Removes the top element
    pq2.pop();                         // Removes the top element
	pq1.swap(pq3);                     // Swaps the contents of two priority queues


    // Properties

    pq1.empty();                       // Check if the priority queue is empty
    pq1.size();                         // Get the size of the priority queue
    

    return 0;
}
