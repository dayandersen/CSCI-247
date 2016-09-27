/*
 * calc.c
 * 
 * CSCI 247, Fall 2016, Lab Exercise 1
 * 
 * David Bover
 * 
 */

#include <stdio.h>
#include <stdlib.h>

void outahere();

// function numval() returns the integer number represented by the parameter word
// returns -1 if the string word cannot be converted into an integer number
int numval(char *word);

// function docalc() returns the result of applying the operator to two numbers 
// operator may be +, -, * or / 
// abort the program with the usage message for invalid operator
int docalc(int first, int second, char operator);

void outahere() {
    puts("Usage: ./calc number op number, where op is +, -, * or /\n");
    exit(0);        
}

int main(int argcount, char *arg[]) {
    
    if (argcount < 4) outahere();
    
    // get the first number
    int num1 = numval(arg[1]);
    if (num1 < 0) outahere();
    
    // get the second number
    int num2 = numval(arg[3]);
    if (num2 < 0) outahere();
    
    // apply the operator
    int result = docalc(num1, num2, arg[2][0]);
    
    // display the result
    printf("%s %s %s = %d\n", arg[1], arg[2], arg[3], result);
    
    return 1;
    
}
