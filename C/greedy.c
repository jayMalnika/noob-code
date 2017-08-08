// Program for change
#include <stdio.h>

int arr[5] = {1, 5, 10, 25, 50};

int main()
{
  int i, init = 1;
  int sum, count = 0, j = 4;
  float c;
  printf ("How much change is owed?: ");
  scanf (" %f", &c);

  i = c*100;

  sum = i;

  while(init == 1)
  {
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

    if(sum == 0)
    {
      init = 0;
    }
  }

  printf (" %d\n", count);
}
