#include <stdio.h>
#include "game.h"
#include "player.h"

int main(void)
{
    int menu = 1;
    int isRunning = 0;
    printf("Puissance C\n");

    // Init menu
    while (menu)
    {        
        pritnf("Bienvenu dans le jeu 'PUISSANCE 4\n");

        // les joueur doivent donner speudo
        printf("Entrer le speudo du player 1 :\n");
        scanf("%s", player1[i]);
        printf("Entrer le speudo du player 2 :\n");
        scanf("%s", player[i]);

        // Init grid (board)

        menu = 0;
        isRunning = 1
    }

    // Game loop
    while (isRunning)
    {
        printf("Début du jeu\n");
        // Check if grid is full, if so, end game

        // for each player
            // ask  to select a column
            // check if column is valid
            // if not valid, ask again
            // if valid, play and update turn count
            // Update matrix && display grid
            // Check if player won

        // Repeat

    }
    return 0;
}
