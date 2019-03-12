//
// Created by David Ceniceros on 3/11/2019
//

#include <stdio.h>
#include <stdlib.h>

void run_array_of_pointers() {
    printf("\nRunning array of pointers\n");

    // structure
    struct pointers_struct {
        int a;
        char b;
    };

    // an array of letters
    char other_phrase[] = {'d', 'a', 'v', 'i', 'd', 'r', 'u', 'l', 'e', 's'};

    // pointer
    struct pointers_struct* thepointers = (struct pointers_struct*) malloc(sizeof(struct pointers_struct) * 11);

    // loop
    for(int i = 0; i < 11; i++) {
        thepointers[i].a = i;
        thepointers[i].b = other_phrase[rand() % 9]; //assigns random char
        printf("value of i = %d. Position in loop = %d. character = %c\n", i, thepointers[i].a, thepointers[i].b);
    }

    // free all dynamic memory
    free(thepointers);
    thepointers = NULL;

}