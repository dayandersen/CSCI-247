/*
 *calc.c
 *
 *Dayne Andersen-Davis
 *
 *CSCI 247, David Bover, Fall 2016, Lab exercise 1
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void outahere()
{
  puts("Usage: ./calc number operation, where operation involves +,-,*,/\n");
  exit(0);
}

int numval(char *word)
{
  printf("%s\n",word);
}

int main(int argc, char *arg[])
{
  /*
  if (argc < 4 ) outahere();

  int num1 = numval(arg[1]);
  if (num1 < 0) outahere;

  int num2 = numval(arg[3]);
  if (num2 < 0) outahere();

  int result = docalc(num1, num2, arg[2][0]);

  printf("%s %s %s = %d\n", arg[1], arg[2], arg[3], result);

  return 1;
  */
  numval(arg[2]);
  int length = strlen(arg);
  printf("%d\n",length);
  
}
