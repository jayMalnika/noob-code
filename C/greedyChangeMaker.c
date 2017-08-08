// Program for counting appropriate no. of coins for a given change
#include <stdio.h>

int arr[5] = {1, 5, 10, 25, 50}; // Array for denominations...

int main()
{
  int i, init = 1;              // i: Entered change holder, init: while loop variable
  int sum, count = 0, j = 4;   // count: Counts no. of coins, sum: checks for smaller denominations, j: array indices
  float c;                     //Initializes the entered change.
  printf ("How much change is owed?: ");
  scanf (" %f", &c);

  i = c*100;

  sum = i;

  while(init == 1)           // Counts coinage for given change
  {
    if(sum == 0)
    {
      init = 0;
    }

    if(arr[j] > sum)
    {
      j--;
      continue;
    }
    else
    {
      sum -= arr[j];
      count++;
    }
  }

  printf (" %d\n", count);
}
