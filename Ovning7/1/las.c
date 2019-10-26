#include"las.h"
#include<stdio.h>

void las(char *ref) /*The input will be a pointer to the beginning of a char array */
{
  char *fp=ref; /*We set an internal pointer to the beginning of the array, we could maybe have ignored this step and only used the ref pointer. */
  while((fp<&ref[MAX])&&((*fp++=getchar()) != '\n')) /*First we check if the address of the internal pointer is less than the MAX buffer we've set. We compare the addresses to do this. Then we put a char into the position of the pointer (dereferenced), this char will then be compared with whether '\n' has been inputted. Then the pointer progresses one step in the address- */
  {
    ; /*All the work is done in the above part. The incriment is done with the fp++, the assignment with getchar, and the comparison with !=  */
  }
  *fp='\0'; /*Set the last char as '\0' */
}
void skriv(char *ref)
{
  char *fp=ref; /*Sets a pointer to the beginning of our char array */
  while((fp<&ref[MAX])&&(*fp!='\0'))  /*Makes sure that we don't overflow our addess with MAX again. Then checks if the value of the pointer is NOT equal to '\0' */
  {
    putchar(*fp++); /* If above conditions hold we print a char to terminal, from the dereferednced pointer.*/
  }
}
