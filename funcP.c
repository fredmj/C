#include <stdio.h>

void func(int a) {
    printf("ok pour a=%d\n", a);
    }
 int main() {
 void (*funcP) (int) = &func;
 
 (*funcP)(10);
 return 0;
 }