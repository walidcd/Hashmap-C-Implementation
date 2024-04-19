#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct 
{
    char* key;
    char* value;
}ht_item;

typedef struct{
    int size;
    int count;
    ht_item** items;
}ht_hash_table;



//We need to define initialisation functions for ht_items.
//This function allocates a chunk of memory the size of an ht_item,
//and saves a copy of the strings k and v in the new chunk of memory.
//The function is marked as static because it will only ever be called 
//by code internal to the hash table.



