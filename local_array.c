//
// Created by David Ceniceros on 3/10/2019.
//

#include <stdio.h>

// structure
struct games_I_want
{
    char name[20];
    char genre[20];
    float price;
};

void run_local_array() {
    printf("\nRunning local array\n");

    // static array of structures of type struct
    struct games_I_want arr_games[2];

    // loop
    for(int i = 0; i < 2; i++)
    {
        printf("Enter name of game: ");
        scanf("%s", arr_games[i].name);

        printf("Enter genre of game: ");
        scanf("%s", arr_games[i].genre);

        printf("Enter price of game: ");
        scanf("%f", &arr_games[i].price);
        printf("\n");
    }
}