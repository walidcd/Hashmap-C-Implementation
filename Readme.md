###API

Associative arrays are a collection of unordered key-value pairs. Duplicate keys are not permitted. The following operations are supported:

    search(a, k): return the value v associated with key k from the associative array a, or NULL if the key does not exist.
    insert(a, k, v): store the pair k:v in the associative array a.
    delete(a, k): delete the k:v pair associated with k, or do nothing if k does not exist.

###Terminology

There are lots of names which are used interchangeably. In this article, we'll use the following:

    Associative array: an abstract data structure which implements the API described above. Also called a map, symbol table or dictionary.

    Hash table: a fast implementation of the associative array API which makes use of a hash function. Also called a hash map, map, hash or dictionary.


access to static functions is restricted to the file where they are declared. Therefore, when we want to restrict access to functions, we make them static. Another reason for making functions static can be the reuse of the same function name in other files.