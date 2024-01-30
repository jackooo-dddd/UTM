# include <stdio.h>
# include <string.h>
#include <stdlib.h>
int main(){
   char *inter = "-7777";
   int num = strtol(inter, NULL, 10);
   printf("%d \n", num);
   return 0;
}