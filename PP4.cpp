//------------------------------------------------------------
// Purpose: Program to implement a UofA scavenger hunt game.
//          Locations on campus are described by separate functions.
//          The user finds "UofA items" and gains "karma points"
//          as they move from location to location on campus.
//
// Author:  Alex Frey
// Date:    Fall 2017
//------------------------------------------------------------

#include <cstdlib>
#include <iostream>
using namespace std;

// Functions for actions
int FindItem(const string item_name, int max_value);
void GainKarma(const string activity, int max_karma, int & karma_gained);
char GetDirection();

// Functions for locations
void Start(int &items, int &karma);
void End(int &items, int &karma);
void Location1(int &items, int &karma);
void Location2(int &items, int &karma);
void Location3(int &items, int &karma);
void Location4(int &items, int &karma);

//------------------------------------------------------------
// Purpose: To give user choice in picking up item.
// Input:   Item name (string).
//          Maximum value of item (int -100..100).
// Output:  Actual value of item picked up (int -100..100).
//------------------------------------------------------------
int FindItem(const string item_name, int max_value)
{
   // Range checking of parameters
   if (max_value < -100) max_value = -100;
   if (max_value >  100) max_value =  100;

   // Print first message
   if (random() % 2 == 0)
      cout << "\nOut of the corner of your eye you spot\n" << item_name << endl;
   else
      cout << "\nHidden behind a trash can you discover\n" << item_name << endl;

   // Print second message
   cout << "Do you want to pick this item up? (yes/no)" << endl;
   string answer;
   cin >> answer;

   // Handle yes answer
   int value = 0;
   if (answer == "yes")
   {
      float fraction = (1.0 + random() % 100) / 100.0;
      value = fraction * max_value;
      if (value > 0)
         cout << "Great, you just earned " << value << " points for that item" << endl;
      else
         cout << "This thing is so awful you lost " << value << " points getting it" << endl;
   }

   // Handle no answer
   else if (answer == "no")
   {
      if (max_value > 0)
         cout << "Too bad, this would have added to your scavenger hunt score" << endl;
      else
         cout << "Good thing you didn't get it, it smells like a dead fish" << endl;
   }

   // Handle wrong answer
   else
   {
      cout << "A simple 'yes' or 'no' would be nice..." << endl;
      cout << "Better luck next time you see an item" << endl;
   }


   return value;
}

//------------------------------------------------------------
// Purpose: To give user choice in performing activity.
// Input:   Activity description (string).
//          Maximum karma points possible (int 1..100).
// Output:  Actual karma points gained (int 1..100).
//------------------------------------------------------------

void GainKarma(const string activity, int max_karma, int & karma_gained)
{
   // Range checking of parameters
   if (max_karma < 1)  max_karma = 1;
   if (max_karma > 100) max_karma = 100;

   // Print first message
   if (random() % 2 == 0)
      cout << "\nNot much is happening until you notice\n" << activity << endl;
   else
      cout << "\nWhile you are standing around you see\n" << activity << endl;

   // Print second message
   cout << "What do you want to do? (help/ignore)" << endl;
   string answer;
   cin >> answer;

   // Handle help answer
   if (answer == "help")
   {
      karma_gained = 1 + random() % max_karma;
      cout << "Congratulations, you gained " << karma_gained << " karma points" << endl;
   }

   // Handle other answers
   else
   {
      karma_gained = -(1 + random() % max_karma);
      if (random() % 2 == 0)
         cout << "So much for southern hospitality..." << endl;
      else
         cout << "Hey, we are not in New York here..." << endl;
      cout << "You lose " << karma_gained << " karma points" << endl;
   }
}

//------------------------------------------------------------
// Purpose: To get direction from user
// Input:   None
// Output:  Character code for N,S,E,W direction
//------------------------------------------------------------
char GetDirection()
{
   cout << "\nWhat direction would you like to go (N,S,E,W): ";
   char direction;
   cin >> direction;
   direction = toupper(direction);
   while ((direction != 'N') && (direction != 'S') &&
          (direction != 'E') && (direction != 'W'))
   {
      cout << "Sorry, You can not go that way...\n";
      cout << "What direction would you like to go (N,S,E,W): ";
      cin >> direction;
      direction = toupper(direction);
   }
   return direction;
}

//------------------------------------------------------------
// Purpose: The starting location for the game
// Input:   The items and karma variables
// Output:  None
//------------------------------------------------------------

void Start(int &items, int &karma)
{
   cout << "\n------------------------------------------------------------\n";
   cout << "\nWelcome to the UofA scavenger hunt game.  The goal of this\n";
   cout << "game is to search a number of locations on campus for items\n";
   cout << "that are near and dear to the hearts of all UofA students.\n";
   cout << "If you find enough UofA items in your travels, you will win\n";
   cout << "fame, fortune and prizes beyond your imagination.\n";
   cout << "If not, you will simply have fun running around campus.\n";
   cout << "Let the games begin!!!\n";
}

//------------------------------------------------------------
// Purpose: The ending location for the game
// Input:   The items and karma variables
// Output:  None
//------------------------------------------------------------

void End(int &items, int &karma)
{
   cout << "\n------------------------------------------------------------\n";
   cout << "\nMy goodness, have you reached the end of the scavenger hunt\n";
   cout << "already? I hope you found enough UofA items to make this trip\n";
   cout << "worth while.  We will see...\n";

   // Give prizes
   if (items <= 0)
   {
      cout << "\nYou don't really get the idea of a scavenger hunt\n";
      cout << "The idea is to get GOOD stuff, not this junk\n";
   }
   else if (karma <= 0)
   {
      cout << "\nIt looks like you got up on the wrong side of the bed\n";
      cout << "Remember, with karma 'what goes around comes around'\n";
   }
   else if ((items > 100) && (karma > 100))
   {
      cout << "\nYou are a gem among gems. Your reward is a pair of\n";
      cout << "tickets to the next football game on the 50-yard line!\n";
   }
   else if ((items > 10) && (karma > 10))
   {
      cout << "\nGreat job.  Your prize is a Razorback waterbottle\n";
      cout << "filled with a tasty amber liquid -- cheers\n";
   }
   else
   {
      cout << "\nYour prize for this lame effort is a Hostess Twinky\n";
      cout << "from 2007.  The good news is that it is still fresh\n";
   }

   // Leave program
   exit(0);
}

//------------------------------------------------------------
// Purpose: To visit a location on campus
// Input:   The items and karma variables
// Output:  None
//------------------------------------------------------------

void Location1(int &items, int &karma)
{
   cout << "\n------------------------------------------------------------\n";
   cout << "\nYou have entered the main hallway of Bell Engineering.\n";

   items = items + FindItem("A Razorback Jersey", 50);

   cout << "\nItems: " << items << " Karma: " << karma << endl;
}

//------------------------------------------------------------
// Purpose: To visit a location on campus
// Input:   The items and karma variables
// Output:  None
//------------------------------------------------------------

void Location2(int &items, int &karma)
{
   cout << "\n------------------------------------------------------------\n";
   cout << "\nYou have entered the second floor lobby of JB Hunt building.\n";

   int karmaL2 = 0;
   GainKarma("an old lady about to cross the street...", 60, karmaL2);
   karma = karma + karmaL2;

   cout << "\nItems: " << items << " Karma: " << karma << endl;
}

//------------------------------------------------------------
// Purpose: To visit a location on campus
// Input:   The items and karma variables
// Output:  None
//------------------------------------------------------------

void Location3(int &items, int &karma)
{
   cout << "\n------------------------------------------------------------\n";
   cout << "\nYou are now on the stage of the Greek Theatre.\n";

   int karmaL3 = 0;
   items = items + FindItem("A Razorback Football", 70);
   GainKarma("some trash laying on the ground...", 40, karmaL3);
   karma = karma + karmaL3;

   cout << "\nItems: " << items << " Karma: " << karma << endl;
}

//------------------------------------------------------------
// Purpose: To visit a location on campus
// Input:   The items and karma variables
// Output:  None
//------------------------------------------------------------

void Location4(int &items, int &karma)
{
   cout << "\n------------------------------------------------------------\n";
   cout << "\nYou are in front of the Harman garage.\n";

   items = items + FindItem("A Razorback Athletic Jacket", 35);

   cout << "\nItems: " << items << " Karma: " << karma << endl;
}

void Location5(int &items, int &karma)
{
   cout << "\n------------------------------------------------------------\n";
   cout << "\nYou are now at Razorback Stadium.\n";

   items = items + FindItem("A cup of cheese dip", 80);

   cout << "\nItmes: " << items << " Karma: " << karma << endl;
}

void Location6(int &items, int &karma)
{
   cout << "\n------------------------------------------------------------\n";
   cout << "\nYou are inside Brough Cafeteria.\n";

   int karmaL6 = 0;
   GainKarma("a baby bird struggling on the ground...", 25, karmaL6);
   karma = karma + karmaL6;

   cout << "\nItems: " << items << " Karma: " << karma << endl;
}

void Location7(int &items, int &karma)
{
   cout << "\n------------------------------------------------------------\n";
   cout << "\nYou are inside Fullbright Cafeteria.\n";

   int karmaL7 = 0;
   GainKarma("a student failing Calculus II...", 90, karmaL7);
   karma = karma + karmaL7;

   cout << "\nItems: " << items << " Karma: " << karma << endl;
}

void Location8(int &items, int &karma)
{
   cout << "\n------------------------------------------------------------\n";
   cout << "\nYou are in front of Old Main.\n";

   int karmaL8 = 0;
   items = items + FindItem("A Razorback Piggy Bank", 80);
   GainKarma("a freshman lost on campus...", 55, karmaL8);
   karma = karma + karmaL8;


   cout << "\nItems: " << items << " Karma: " << karma << endl;
}

//------------------------------------------------------------
// Purpose: The main program
// Input:   None
// Output:  None
//------------------------------------------------------------

int main()
{
   // Initialize game
   srandom(time(NULL));
   int items = 0;
   int karma = 0;

   //Keeping Track of Location
   int location = 0;

   // Start
   Start(items, karma);
   location = 1;
   char direction = 'N';

   while(location != 8)
   {
    switch (location)
     {
      case 1:
      Location1(items, karma);
      direction = GetDirection();
      while(direction != 'S' && direction != 'E' && direction != 'W')
       {
        cout << "Sorry! Your path is blocked...Please choose another direction." << endl;
        direction = GetDirection();
       }
      if(direction == 'S')
       location = 4;
      else if(direction == 'W')
       location = 2;
      else if(direction == 'E')
       location = 3;
      break;

      case 2:
      Location2(items, karma);
      direction = GetDirection();
      while(direction != 'E')
       {
        cout << "Sorry! Your path is blocked...Please choose another direction." << endl;
        direction = GetDirection();
       }
      location = 1;
      break;

      case 3:
      Location3(items, karma);
      direction = GetDirection();
      while(direction != 'E' && direction != 'W')
       {
        cout << "Sorry! Your path is blocked...Please choose another direction." << endl;
        direction = GetDirection();
       }
      if(direction == 'E')
       location = 7;
      else if(direction == 'W')
       location = 1;
      break;

      case 4:
      Location4(items, karma);
      direction = GetDirection();
      while(direction != 'N' && direction != 'S')
       {
        cout << "Sorry! Your path is blocked...Please choose another direction." << endl;
        direction = GetDirection();
       }
      if(direction == 'N')
       location = 1;
      else if(direction == 'S')
       location = 5;
      break;

      case 5:
      Location5(items, karma);
      direction = GetDirection();
      while(direction != 'N' && direction != 'E')
       {
        cout << "Sorry! Your path is blocked...Please choose another direction." << endl;
        direction = GetDirection();
       }
      if(direction == 'N')
       location = 4;
      else if(direction == 'E')
       location = 6;
      break;

      case 6:
      Location6(items, karma);
      direction = GetDirection();
      while(direction != 'W')
       {
        cout << "Sorry! Your path is blocked...Please choose another direction." << endl;
        direction = GetDirection();
       }
      location = 5;
      break;

      case 7:
      Location7(items, karma);
      direction = GetDirection();
      while(direction != 'W' && direction != 'N')
       {
        cout << "Sorry! Your path is blocked...Please choose another direction." << endl;
        direction = GetDirection();
       }
      if(direction == 'W')
       location = 3;
      else if(direction == 'N')
       location = 8;
      break;

      default:
      cout << "Error\n";
     }
    }
    Location8(items, karma);
    End(items, karma);


   return 0;
