//
// Created by David Ceniceros on 3/11/2019
//

#include <stdio.h>
#include <stdlib.h>

void run_monolithic_array() {
    printf("Running monolithic array\n");

    // structure
    struct mono_struct {
        int a;
        char b;
    };

    // an array of letters
    char phrase[] = {'d', 'a', 'v', 'i', 'd', 'r', 'u', 'l', 'e', 's'};

    // dynamic array of structures of type struct
    struct mono_struct* dynamic_array = (struct mono_struct*) malloc(sizeof(struct mono_struct) * 11);

    // loop
    for(int i = 0; i < 11; i++) {
        dynamic_array[i].a = i;
        dynamic_array[i].b = phrase[rand() % 3];
        printf("value of i = %d. Position in loop = %d. character = %c\n", i, dynamic_array[i].a, dynamic_array[i].b);
    }

    // free all dynamic memory
    free(dynamic_array);
    dynamic_array = NULL;

}