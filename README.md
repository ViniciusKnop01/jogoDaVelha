# jogoDaVelha
This repository is going to be used for storing a project in C++: "Jogo da Velha".

## Overview
This project is a from a [challenge](https://neps.academy) at a programming course at [Neps Acedemy](https://www.google.com/url?sa=t&rct=j&q=&esrc=s&source=web&cd=&cad=rja&uact=8&ved=2ahUKEwiGh5un-5GNAxU5r5UCHROSGlAQFnoECAsQAQ&url=https%3A%2F%2Fneps.academy%2F&usg=AOvVaw1Y8_54ePaMTMekuMc04CMs&opi=89978449). 

This is a two-player game, in text mode, in which participants take turns marking spots on a 3x3 grid until one of them wins or a draw occurs.

## How to play
1. Player 1 uses "X" and Player 2 uses "O".
2. Players take turns selecting an empty cell on the grid.
3. The game ends when one player aligns three marks or when all cells are filled without a winner.

## How did I do it?


### Problems and Solutions

1. **Displaying the Game Board**  
   - **Problem**: How to visually represent the game board in a clear and readable format.  
   - **Solution**: The `exibirTabuleiro` function iterates through the 3x3 matrix and prints the board with grid lines for clarity.

2. **Checking for Victory**  
   - **Problem**: How to determine if a player has won the game.  
   - **Solution**: The `verificarVitoria` function checks all rows, columns, and diagonals for three consecutive marks ('X' or 'O') and announces the winner.

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
