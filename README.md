# jogoDaVelha
This repository is going to be used for storing a project in C++: "Jogo da Velha".

## Overview
This project is a from a [challenge](https://neps.academy/br/project/22) at a programming course at [Neps Acedemy](https://neps.academy/br/login). 

This is a two-player game, in text mode, in which participants take turns marking spots on a 3x3 grid until one of them wins or a draw occurs.

## How to play
1. Player 1 uses "X" and Player 2 uses "O".
2. Players take turns selecting an empty cell on the grid.
3. The game ends when one player aligns three marks or when all cells are filled without a winner.

## How did I do it?


### Problems and Solutions

1. **Displaying the Game Board**  
   - **Solution**: I found it easier to just display the board as a 3x3 matrix, and add a function to display the updated one (with the moves in it). It was hard figuring the exact format, but in the end we figured out the solution:

   ```cpp
   void exibirTabuleiro (char matriz[3][3]) {
    for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
               if (j == 2) cout << " " << matriz[i][j] << " ";
               else { 
                  cout << " " << matriz[i][j] << " " << "|";
               }
            }

            if (i != 2) {
               
            cout << endl;
            cout << "-----------" << endl;
        }
    }
   }
   ```

2. **Checking for Victory**  
   - **Problem**: How to determine if a player has won the game.  
   - **Solution**: The ``verificarVitoria`` function is responsible for determining whether a player won the match. It checks all rows, columns and diagonals of the board to identify three identical symbols in a row. If a win condition is met, the function returns true; otherwise, returns false.


3. **Checking for a Draw**  
   - **Problem**: How to detect when the game ends in a draw.  
   - **Solution**: The `verificarEmpate` function counts the filled cells in the matrix. If all cells are filled and no winner is found, it declares a draw.


5. **Game Loop and Restart**  
   - **Problem**: How to manage the game flow, including turns and restarting the game.  
   - **Solution**: The `main` function handles the game loop, alternating turns between players, checking for victory or draw, and resetting the board if players choose to restart.

---

### Functions Overview

#### `exibirTabuleiro(char matriz[3][3])`
Displays the current state of the game board in a grid format.

#### `verificarVitoria(char matriz[3][3])`
Checks if any player has won by analyzing rows, columns, and diagonals. Announces the winner if a victory condition is met.

#### `verificarEmpate(char matriz[3][3])`
Determines if the game has ended in a draw by checking if all cells are filled and no winner exists.

#### `validarJogada(int entrada, char matriz[3][3])`
Validates the player's move to ensure it is within bounds and not already occupied.

#### `main()`
Manages the game loop, alternates turns between players, checks for victory or draw, and handles restarting the game.

---
