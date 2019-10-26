#include"func.h"
void reverse_order(char *point)
{
  char *check_p=point; /*This pointer will have two functions: finding the end (marked with '\0') of the char array, and for counting backwards later. */
  char placeholder[MAX]; /* This is a placeholder array and is possibly bad for mem and execution time. I found it to be problematic to write and read to the same matrix (since some values would be last about half into the loop) */
  char *place_p=placeholder; /*This pointer will point towards our position in the placeholder matrix. */
  while((*check_p!='\0')&&(check_p<&point[MAX])) /*This will loop as long as the MAX isn't hit, and as long as we don't hit '\0', we use this loop to find the end of our char array in input, AND to assign values to placeholder array */
  {
    *place_p++=*check_p++; /*Here we copy the inputted array into the placeholder array, and increment both pointers' addesses */
  }
  check_p=point; /*We put this pointer back to the start of our input array. This will allow us to rewrite it from the beginning to end */
  place_p--; /*This will still point to '\0' since the while loop will increment after the check. Therefore we ahve to step back once to get to point to the char before '\0' */
  while((place_p--)>placeholder) /*We check if place_p (the addess) is larger than placeholder. (the start of our array), -- decreases after the while loop?? */
  {
    *check_p++=*place_p; /*We write the value of the place_p pointer to the value of the check_p pointer's address. */
  }

}
