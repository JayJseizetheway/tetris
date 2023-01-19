#include <stdio.h> 
#include <string.h>
// #include <ncurses.h> 
#include <stdlib.h> 
#include <sys/time.h> 

#include "data.h"
#include "loader.h"
#include "func.h"

int main() {
    char path[100]; 
    strcpy(path, "./resources/block_data.txt");
    load_block_data(path); 
    strcpy(path, "./resources/mainboard_data.txt");
    load_mainboard_data(path); 

    for (int i = 0; i < MAIN_Y; i++) {
        for (int j = 0; j < MAIN_X; j++) {
            printf("%c ", main_org[i][j]); 
        }

        printf("\n"); 
    }


    return 0; 
}