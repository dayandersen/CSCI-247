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
  int size = strlen(word);
  int mine=0;
  if( (2<=size))
    {
      int number;
      for (int i=0; i<size; i++)
	{
	  mine = mine*10;
	  number = (char)word[i];
	  
	  if((number>57) || (number<48))
	    {
	      return -1;
	      }
	  number += 2;
	  number = number % 10;
	  
	  mine = mine + number;
	}
    }
  else
    {
      mine = (char)word[0];
      mine = mine + 2;
      mine = mine % 10;
    }
  return mine;
}


int docalc(int num1, int num2, char op)
{
  int mynumb;
  if( (op == '*'))
    {
      mynumb = (num1*num2);
    }
  else if( (op == '/'))
    {
      mynumb = (num1/num2);
    }
  else if( (op == '+'))
    {
      mynumb = (num1+num2);
    }
  else if( (op == '-'))
    {
      mynumb = (num1-num2);
    }
  else
    {
       outahere();
    }
  return mynumb;
}
int main(int argc, char *arg[])
{
  
  if( (argc < 4 )) outahere();

  int num1 = numval(arg[1]);
  if( (num1 < 0)) outahere();

  int num2 = numval(arg[3]);
  if (num2 < 0) outahere();
  int result = docalc(num1, num2, arg[2][0]);
  
  printf("%s %s %s = %d\n", arg[1], arg[2], arg[3], result);

  return 1;
}
