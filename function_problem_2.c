//problem 2
#include <stdio.h>
void print(char ch);
int main() {
  char x;
  scanf("%c", &x);
  print(x);
    return 0;
}
void print(char ch){
    printf("Value received from main: %c", ch);
}