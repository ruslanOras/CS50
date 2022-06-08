#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n;

    do{
        //prompt user
     n = get_int("Heght: ");
    }

    while(n < 1 || n > 8);
//row
for (int i = 0; i < n; i++)
  {
      //col
    for (int j = 0; j < n; j++)
      {
          if(i + j < n - 1)
          printf(" ");
          else
          printf("#");
      }
      printf("\n");
  }
}