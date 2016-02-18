#include "types.h"
#include "string.h"
#include "state.h"

void clear(){
    string vidmem = (string)0xb8000;
    int i = 0;
    while(i < 2000){
         vidmem[i] = 0x00;
         i++;
    }
}

void nextline(){
   state.cl++;
}

void print(string s, char color, int w){
   string vidmem = (string)0xb8000;
   int i = state.cl * 160;
   int a = 0;
   while(a < length(s)){
      vidmem[i] = s[a];
      vidmem[i+1] = color;
      i += 2;
     a++;
      if(w) wait();
   }
   nextline();
}