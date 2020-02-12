// Wilfrido Varela 2-10-2020
//COSC 1436 Dr_T Unit 4 Assignment Part 2
//What this program does is for every number is inputted, there will be "th", "st", "nd", "rd" in their respective orders.
#include <iostream>
#include "Input_Validation_Extended.h"
using namespace std;

int main() 
{
  //Declaring variable and starting point
  int stop = 0;

  cout << "\nPlease enter a stopping point: ";
  stop = validateInt(stop);

  for(int i = 1; i <= stop; i++)
  {
     if ((i % 10) == 0) //number ends in 0
     {
    cout << i << "th" << " Hello" << endl;
     }
    
    else if ((i % 100) == 13) //number ends only in 13
    {
      cout << i << "th" << " Hello"  << endl;
    }
    else if (i == 2) //number ends only in 2
    {
      cout << i << "nd" << " Hello" << endl;
    }
    else if( (i % 10) == 3) //number ends in 3
    {
      cout << i << "rd" << " Hello" << endl;
    }
    else if ( ((i % 10) == 4) || ((i % 10) == 5)) //number ends in 4 and 5
    {
      cout << i << "th" << " Hello" << endl;
    }
    else if (((i % 10) == 6) || ((i % 10) == 7)) //number ends in  6 and 7
    {
      cout << i << "th" << " Hello" << endl;
    }
    else if (((i % 10) == 8) || ((i % 10) == 9)) //number ends in  8 and 9
    {
      cout << i << "th" << " Hello" << endl;
    }
    else if (((i % 100) == 11) || ((i % 100) == 12)) //number ends in  11 and 12
    {
      cout << i << "th" << " Hello" << endl;
    }
    else if (( i % 10) == 1) //number ends in  1
    {
      cout << i << "st" << " Hello" << endl;
    }
    else if ((i % 10) == 2) // number ends in 2
    {
      cout << i << "nd" << " Hello" << endl;
    }
  }

  return 0;
}