#include "types.h"

int length(string s){
   int i = 0;
   while(s[i] != 0) i++;
   return i;
}