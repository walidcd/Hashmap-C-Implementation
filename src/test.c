#include <stdio.h>
#include"hash_table.c"


int main(int argc, char const *argv[])
{
    ht_item * i=ht_new_item("keyyy","value");
    puts(i->key);
    printf(" ");
    puts(i->value);
    ht_del_item(i);
    ht_hash_table* ht= ht_new_hash_table();
    ht_del_hash_table(ht);
    int hash=ht_hash("cat",151,53);
    printf("\n \n %d \n \n",hash);
    return 0;
}
