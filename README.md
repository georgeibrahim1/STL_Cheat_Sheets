# STL Cheat Sheets

This document provides an Cheat Sheets of Standard Template Library (STL) in C++, their average time complexities for common operations, and their performance characteristics. It also has some leetcode and codeforces problems to practise efficiently on STL containers and algorithms. 

## **How to use the cheat sheets?**

This section provides the outlines of the **`Containers Cheat Sheets`** only.

- **`vector`** , **`deque`** , **`list`** , **`forward_list`** follow this outline :
  
  - Initializing
  - Iterators & Traversal
  - Insertion
  - Access
  - Modifying
  - Properties

- **`set`** , **`map`** follow this outline :

  - Initializing
  - Iterators & Traversal
  - Insertion
  - Access
  - Searching
  - Modifying
  - Properties
  - Key comparison & value comparison
    - In Initialize
    - Compare Function
  - Multimap Syntax
  - Unordered map & Multimap
    - Syntax
    - Special Member Functions
  
- **`priority_queue`** , **`stack`** , **`queue`** follow this outline :

  - Initializing
  - Insertion
  - Access
  - Modifying
  - Properties


## **STL Containers Performance Table** (This Sections need to be reviewed)

| **Container** | **Insertion** | **Deletion** | **Access (Indexing)** | **Search** | **Sorting** | **Performance Notes** |
|--------------|--------------|--------------|-----------------|--------------|--------------|----------------------|
| **`vector`** | **O(1) (amortized)** at end, O(n) elsewhere | O(n) | **O(1)** | O(n) (linear search) | O(n log n) | Fastest for direct access; slow for inserting/deleting in the middle. |
| **`deque`** | O(1) at front/back, O(n) in middle | O(1) at front/back, O(n) in middle | O(1) | O(n) | O(n log n) | Faster than `vector` for frequent front/back insertions. |
| **`list`** | O(1) (anywhere, if iterator known) | O(1) (if iterator known) | O(n) | O(n) | O(n log n) | Doubly linked; ideal for frequent insertions/deletions anywhere. |
| **`forward_list`** | O(1) at front | O(1) at front | O(n) | O(n) | O(n log n) | Singly linked; less overhead than `list`, but no backward traversal. |
| **`set` (ordered)** | **O(log n)** | **O(log n)** | O(n) | **O(log n)** | O(n log n) | Red-black tree; fast search but no duplicate values. |
| **`unordered_set`** | **O(1) (average), O(n) (worst)** | O(1) avg., O(n) worst | O(n) | **O(1) avg., O(n) worst** | O(n log n) | Hash table; very fast for search but no order. |
| **`map` (ordered)** | **O(log n)** | **O(log n)** | **O(log n)** | **O(log n)** | O(n log n) | Red-black tree; stores key-value pairs in order. |
| **`unordered_map`** | **O(1) avg., O(n) worst** | O(1) avg., O(n) worst | O(n) | **O(1) avg., O(n) worst** | O(n log n) | Hash table; best for fast lookups without order. |
| **`multiset`** | **O(log n)** | **O(log n)** | O(n) | **O(log n)** | O(n log n) | Allows duplicates, slower than `unordered_multiset`. |
| **`unordered_multiset`** | **O(1) avg., O(n) worst** | O(1) avg., O(n) worst | O(n) | **O(1) avg., O(n) worst** | O(n log n) | Faster than `multiset`, but no order. |
| **`multimap`** | **O(log n)** | **O(log n)** | O(log n) | **O(log n)** | O(n log n) | Allows duplicate keys, slower than `unordered_multimap`. |
| **`unordered_multimap`** | **O(1) avg., O(n) worst** | O(1) avg., O(n) worst | O(n) | **O(1) avg., O(n) worst** | O(n log n) | Best for multiple keys with fast lookup. |
| **`priority_queue`** | **O(log n)** | O(log n) (pop) | O(1) (top) | O(n) | O(n log n) | Heap-based; best for priority-based operations. |
| **`stack`** | **O(1)** | O(1) | O(n) | O(n) | O(n log n) | LIFO structure, backed by `deque` by default. |
| **`queue`** | **O(1)** | O(1) | O(n) | O(n) | O(n log n) | FIFO structure, backed by `deque` by default. |

## **Performance Summary**
- **Fastest for Direct Access**: `vector`, `deque`
- **Fastest for Insertions/Deletions (Middle)**: `list`, `forward_list`
- **Fastest for Insertions/Deletions (Front/Back)**: `deque`
- **Fastest for Search**: `unordered_map`, `unordered_set` (O(1) avg.)
- **Fastest for Ordered Data**: `set`, `map` (O(log n))
- **Best for Priority-based Operations**: `priority_queue`

### **Choosing the Right Container**
- Use **`vector`** when fast random access is needed and insertions/deletions are infrequent.
- Use **`deque`** when fast front/back insertions are needed.
- Use **`list`** or **`forward_list`** when frequent insertions/deletions occur anywhere.
- Use **`set`** or **`unordered_set`** for unique elements, depending on whether order is needed.
- Use **`map`** or **`unordered_map`** for key-value storage, depending on order requirements.
- Use **`priority_queue`** for priority-based operations.
- Use **`stack`** or **`queue`** for LIFO/FIFO operations.

## **Conquering Problems with C++ Standard Library**
- **`vector`** Problems :
- **`deque`** Problems :
- **`list`** Problems :
- **`forward_list`** Problems :
- **`set`** Problems :
- **`map`** Problems :
- **`priority_queue`** Problems :
- **`stack`** Problems :
- **`queue`** Problems :


