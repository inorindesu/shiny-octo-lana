#include <stdio.h>

/* 
 * K&R ex1-12
 * Write a program that prints its input one word per line.
 */

main()
{
  char c = (char)0;
  char last = (char)0;

  while(1)
    {
      c = getchar();
      if(c == EOF)
        break;

      if((c == ' ' || c == '\t') && (last != ' ' && last != '\t'))
        putchar('\n');
      else if(c != ' ')
        putchar(c);

      last = c;
    }
  return 0;
}
