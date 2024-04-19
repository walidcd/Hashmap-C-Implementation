#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "hash_table.h"
#include <math.h>


//hash_table item constructor
static ht_item * ht_new_item(const char * k, const char * v){
    ht_item* i=malloc(sizeof(ht_item));
    i->key=strdup(k);
    i->value=strdup(v);
    return i;
}


//hash_table constructor
static ht_hash_table *ht_new_hash_table(){
    ht_hash_table * ht=malloc(sizeof(ht_hash_table));
    ht->size=53;
    ht->count=0;
    ht->items=calloc(ht->size,sizeof(ht_item *));
}


//hash_table item destructor
static void ht_del_item(ht_item* i){
    free(i->key);
    free(i->value);
    free(i);
}

//hash_table destructor
void ht_del_hash_table(ht_hash_table* ht) {
    for (int i = 0; i < ht->size; i++)
    {
        ht_item* h=ht->items[i];
        if(h!=NULL){
            ht_del_item(h);
        }
    }
    free(ht->items);
    free(ht);
}




//hash
static int ht_hash(const char * s,const int a ,const int m){
    long hash=0;
    int len_s=strlen(s);
    for (int  i = 0; i < len_s; i++)
    {
        hash+=(long)pow(a,(len_s-(i+1)))*s[i];
        hash=hash%m;
    }
    return (int)hash;
}


//handling collisions

//open addressing with double hashing technique 




