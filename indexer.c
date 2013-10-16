#include <stdio.h>
#include <stdlib.h>
#include "hashmap.c"


/**
 * Indexes the file descriptor into the inverted index. Returns zero on error
 * and a positive number on success.
 */
int index(HashMap *hashmap, FILE *fd) {
    // TODO
    return 0;
}

/**
 * Indexes a single file into the inverted index. Returns zero on error and a
 * positive number on success.
 */
int index_file(HashMap* hashmap, FILE *file) {
    // TODO
    return 0;
}

/**
 * Dumps the inverted index to the specified target file. Returns zero on error
 * and a positive number on success.
 */
int dump(HashMap *hashmap, FILE *target) {
    // TODO
    Iterator *iter = 
    return 0;
}

int main(int argc, char **argv) {
    // Strings to hash
    char *s1 = "hello";
    char *s2 = "goodbye";
    printf("%s hashes to %u\n", s1, hash(s1));
    printf("%s hashes to %u\n", s2, hash(s2));

    // Create some data structures
    HashMap *hm = create_hashmap(10);
    if (!hm) {
        fprintf(stderr, "Memory allocation for hashmap failed\n");
        return 1;
    }

    // Add some nodes to the hashmap.
    put(hm, s1, s1);
    put(hm, s2, s2); 
    put(hm, s1, s1);
    return 0;
}
