#include <stdio.h>

void printHello();

void printHello(){
   printf("Hello World!\n");
}

int main() {
   
   int number = 10;
   void (*pointer)();
   
   pointer = &printHello;
   
   pointer();
   
   printf("pointer: %x\n", pointer);
   
   return 0;
}

