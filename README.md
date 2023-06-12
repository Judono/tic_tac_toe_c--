# Tic Tac Toe in C++

This is a simple console-based implementation of Tic Tac Toe in C++. The game is a two-player game where each player takes turns placing their marker on a 3x3 grid. The goal of the game is to get three of your markers in a row, either horizontally, vertically, or diagonally.

## Compilation

You need a C++ compiler to compile the code. If you're using a Unix-like operating system, you probably have the `g++` compiler installed. You can compile the code with the following command:

```
g++ tictactoe.cpp -o tictactoe
```

## Execution

After you've compiled the code, you can run the game with the following command:

```
./tictactoe
```

## How to Play
The game is a two-player game. Players take turns entering their moves. The game board looks like this:
```
  1 2 3
1      
2
3
```

The numbers along the top and left side are the coordinates for the rows and columns. Player 1 is X and Player 2 is O. Players enter their moves by typing the row and column where they want to place their marker, separated by a space. For example, to place a marker in the top left square, you would enter **"1 1"**.

The game continues until one player has three of their markers in a row, either horizontally, vertically, or diagonally, or until all squares are filled and the game is a draw.

## Example

Here is what a few moves might look like:
```
Player 1, enter your move (row and column): 1 1
  1 2 3
1 X| | 
  -+-+-  
2  | | 
  -+-+-  
3  | | 

Player 2, enter your move (row and column): 1 2
  1 2 3
1 X|O| 
  -+-+-  
2  | | 
  -+-+-  
3  | | 
```

## Note:
Please note that the game doesn't check for invalid input, so be sure to enter your moves in the correct format and range!
