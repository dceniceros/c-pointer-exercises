//
// Created by David Ceniceros on 3/10/2019.
//

#include <stdio.h>

// structure
struct global_struct {
    int a;
    char b;
};

// static array of structures of type "global_struct"
struct global_struct static_array_of_structures[5];

void run_global_array() {

    printf("Running global array\n");

    char first_name[] = {'d', 'a', 'v', 'i', 'd'};

    //loop
    for(int i = 0; i < 5; i++) {
        static_array_of_structures[i].a = i;
        static_array_of_structures[i].b = first_name[i];
    }

    //print out values
    for(int i = 0; i < 5; i++) {
        printf("%d - ", static_array_of_structures[i].a);
        printf("%c\n", static_array_of_structures[i].b);
    }

}