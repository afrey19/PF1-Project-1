//---------------------------------------------------
// Purpose: To implement the game "keep away chess"
//          using 2D arrays and functions.
//
// Authors: Alex Frey  - remainder of program
//          John Gauch - print_board function
//---------------------------------------------------

#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

// Program constants
const int ROWS = 8;
const int COLS = 8;

//---------------------------------------------------
// Print the 2D game board
//---------------------------------------------------
void print_board(char board[ROWS][COLS])
{
   // Print values
   cout << "     ";
   for (int col = 0; col < COLS; col++)
      cout << col << "   ";
   cout << endl;

   // Print line
   cout << "   +";
   for (int col = 0; col < COLS; col++)
      cout << "---+";
   cout << "\n";

   // Print board
   for (int row = 0; row < ROWS; row++)
   {
      // Print values
      cout << " " << row << " | ";
      for (int col = 0; col < COLS; col++)
         cout << board[row][col] << " | ";
      cout << endl;

      // Print line
      cout << "   +";
      for (int col = 0; col < COLS; col++)
         cout << "---+";
      cout << "\n";
   }
}


//---------------------------------------------------
// Main program
//---------------------------------------------------
int main()
{
   // What game type
   char game_type = 'A';
   cout << "Would you like to play with rooks or with queens? Enter R or Q." << endl;
   cin >> game_type;
   while(game_type != 'Q' && game_type != 'R')
    {
    cout << "Would you like to play with rooks or with queens? Enter R or Q." << endl;
    cin >> game_type;
    }

   // Define game board
   char board[ROWS][COLS];
   for (int row = 0; row < ROWS; row++)
      for (int col = 0; col < COLS; col++)
         board[row][col] = ' ';

   // Variable Declaration
   int winner = 0;
   int row = 0;
   int col = 0;

   // Rooks
   if(game_type == 'R')
    {
     while(winner == 0)
      {

       // PLAYER ONE COORDINATES //
       cout << "-- Player One --" << endl;
       cout << "Enter Row [0..7]: ";
       cin >> row;

       // Error Check for Inside-Borders Row
       while(row != 0 && row != 1 && row != 2 && row != 3 && row != 4 && row != 5
             && row != 6 && row != 7)
        {
        cout << "Enter Row [0..7]: ";
        cin >> row;
        }
        cout << endl << "Enter Column [0..7]: ";
        cin >> col;

        // Error Check for Inside-Borders Column
        while(col != 0 && col != 1 && col != 2 && col != 3 && col != 4 && col != 5
              && col != 6 && col != 7)
        {
        cout << "Enter Column [0..7]: ";
        cin >> col;
        }
        cout << endl;

        // Check Rows
        for(int r = 0; r < 8; r++)
         if(board[r][col] == 'R')
          winner = 1;

        // Check Columns
        for(int c = 0; c < 8; c++)
         if(board[row][c] == 'R')
          winner = 1;

         board[row][col] = 'R';
         print_board(board);

      if(winner == 0)
       {
        // PLAYER TWO //
        cout << "-- Player Two --" << endl;
        cout << "Enter Row [0..7]: ";
        cin >> row;

        // Error Check for Inside-Borders Row
        while(row != 0 && row != 1 && row != 2 && row != 3 && row != 4 && row != 5
             && row != 6 && row != 7)
        {
        cout << "Enter Row [0..7]: ";
        cin >> row;
        }
        cout << endl << "Enter Column [0..7]: ";
        cin >> col;

        // Error Check for Inside-Borders Column
        while(col != 0 && col != 1 && col != 2 && col != 3 && col != 4 && col != 5
             && col != 6 && col != 7)
        {
        cout << "Enter Column [0..7]: ";
        cin >> col;
        }
        cout << endl;

        // Check Rows
        for(int r = 0; r < 8; r++)
          if(board[r][col] == 'R')
           winner = 1;

        // Check Columns
        for(int c = 0; c < 8; c++)
          if(board[row][c] == 'R')
           winner = 1;

         board[row][col] = 'R';
         print_board(board);
       }

     }

   // End of Game
    if(winner == 1)
     cout << "Sorry! You lose." << endl;

    }


   // Queens
   if(game_type == 'Q')
    {
    while(winner == 0)
     {
      // PLAYER ONE COORDINATES //
       cout << "-- Player One --" << endl;
       cout << "Enter Row [0..7]: ";
       cin >> row;

      // Error Check for Inside-Borders Row
       while(row != 0 && row != 1 && row != 2 && row != 3 && row != 4 && row != 5
            && row != 6 && row != 7)
        {
        cout << "Enter Row [0..7]: ";
        cin >> row;
        }
        cout << endl << "Enter Column [0..7]: ";
        cin >> col;

      // Error Check for Inside-Borders Column
       while(col != 0 && col != 1 && col != 2 && col != 3 && col != 4 && col != 5
            && col != 6 && col != 7)
        {
        cout << "Enter Column [0..7]: ";
        cin >> col;
        }
        cout << endl;

      // Check Rows
       for(int r = 0; r < 8; r++)
        if(board[r][col] == 'Q')
         winner = 1;

      // Check Columns
       for(int c = 0; c < 8; c++)
        if(board[row][c] == 'Q')
         winner = 1;

      // Check Diagonals
       for(int d = 0; ((d+row) < 8) && ((d+col) < 8); d++)
        if(board[(d+row)][(d+col)] == 'Q')
         winner = 1;

       for(int d = 0; ((row-d) >= 0) && ((d+col) < 8); d++)
        if(board[(row-d)][(d+col)] == 'Q')
         winner = 1;

       for(int d = 0; ((d+row) < 8) && ((col-d) >= 0); d++)
        if(board[(d+row)][(col-d)] == 'Q')
         winner = 1;

       for(int d = 0; ((row-d) >= 0) && ((col-d) >= 0); d++)
        if(board[(row-d)][(col-d)] == 'Q')
         winner = 1;

       board[row][col] = 'Q';
       print_board(board);


      if(winner == 0)
       {
        // PLAYER TWO //
         cout << "-- Player Two --" << endl;
         cout << "Enter Row [0..7]: ";
         cin >> row;

        // Error Check for Inside-Borders Row
        while(row != 0 && row != 1 && row != 2 && row != 3 && row != 4 && row != 5
             && row != 6 && row != 7)
         {
         cout << "Enter Row [0..7]: ";
         cin >> row;
         }
         cout << endl << "Enter Column [0..7]: ";
         cin >> col;
        // Error Check for Inside-Borders Column
        while(col != 0 && col != 1 && col != 2 && col != 3 && col != 4 && col != 5
             && col != 6 && col != 7)
         {
         cout << "Enter Column [0..7]: ";
         cin >> col;
         }
         cout << endl;

        // Check Rows
        for(int r = 0; r < 8; r++)
         if(board[r][col] == 'Q')
          winner = 1;

        // Check Columns
        for(int c = 0; c < 8; c++)
         if(board[row][c] == 'Q')
          winner = 1;

        // Check Diagonals
        for(int d = 0; ((d+row) < 8) && ((d+col) < 8); d++)
         if(board[(d+row)][(d+col)] == 'Q')
          winner = 1;
        for(int d = 0; ((row-d) >= 0) && ((d+col) < 8); d++)
         if(board[(row-d)][(d+col)] == 'Q')
          winner = 1;
        for(int d = 0; ((d+row) < 8) && ((col-d) >= 0); d++)
         if(board[(d+row)][(col-d)] == 'Q')
          winner = 1;
        for(int d = 0; ((row-d) >= 0) && ((col-d) >= 0); d++)
         if(board[(row-d)][(col-d)] == 'Q')
          winner = 1;

        board[row][col] = 'Q';
        print_board(board);
       }
     }

     // End of the Game
     if(winner == 1)
      cout << "Sorry! You lose." << endl;

   }

  return 0;
}