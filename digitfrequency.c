/*Given a string, , consisting of alphabets and digits, find the frequency of each digit in the given string.
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    char*s=malloc(100*sizeof(char));
    scanf("%[^\n]",s);
    int i,j,count;
    for(i=0;i<10;i++)
    { 
      count=0;
      for(j=0;s[j]!='\0';j++)
      {
         if(s[j]==48+i)
         count++;
      }
    printf("%d ",count);
    }
}