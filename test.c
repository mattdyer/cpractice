#include <stdio.h>

//void printHello(char *name);
//void talk(void (*func)(char *name), char *name);

void printHello(char *name){
   printf("Hello %s\n", name);
}

void printGoodbye(char *name){
   printf("Goodbye %s\n", name);
}

void talk(void (*func)(char *name), char *name){
   func(name);
}

int main() {
   
   int number = 10;
   void (*helloPointer)(char *);
   void (*goodbyePointer)(char *);
   
   helloPointer = &printHello;
   goodbyePointer = &printGoodbye;
   
   talk(helloPointer, "test");
   talk(goodbyePointer, "test");
   
   //pointer("test");
   
   //pointer("test2");
   
   //printf("pointer: %p\n", pointer);
   
   return 0;
}

