# C - Hash Tables

This repository provides a basic implementation of hash tables in the C programming language. It serves as a guide to understand the concepts and usage of hash tables in C.

## What is a Hash Table?

A hash table, also known as a hash map, is a data structure that enables efficient storage, retrieval, and deletion of key-value pairs. It employs a hash function to map keys to indices in an array, where the corresponding values are stored. The key advantage of hash tables is their ability to provide constant-time average case operations for accessing and modifying elements.

## Features

- Key-Value Storage: The hash table stores data in the form of key-value pairs, allowing quick access to values based on their associated keys.
- Efficient Operations: The hash table offers efficient insertion, retrieval, and deletion operations, with an average time complexity of O(1).
- Collision Handling: Collisions occur when two keys map to the same index in the array. This implementation uses separate chaining to handle collisions, using linked lists to store multiple key-value pairs at the same index.
- Dynamic Resizing: The hash table automatically resizes itself when the load factor exceeds a threshold, ensuring optimal performance by maintaining a balanced number of elements in relation to the array size.
- Memory Management: The implementation handles memory management for inserted items, ensuring that allocated memory is properly freed when necessary.
