#include "main.h"

/**
 *_print_rev_recursion - reverse
 *@g: pointer to string 
 * */
 void_print_rev_recursion(char *s)
 {
          if (*s)
           {
              _print_rev_recursions (s + 1);
               _putchar(*s);
              }
 
 }
