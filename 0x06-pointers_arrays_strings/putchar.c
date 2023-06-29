#include <unistd.h>                                                             
  2                                                                                 
  3 /**                                                                             
  4 * _putchar - Writes the character c to stdout                                   
  5 * @c:The character to print                                                     
  6 * Return: on Success1.                                                          
  7 * On error, -1 is returned, and eerno is set appropriately.                     
  8  */                                                                             
  9 int _putchar(char c)                                                            
 10 {                                                                               
 11         return (write(1, &c, 1));                                               
 12 }                                                                               
~                                        
