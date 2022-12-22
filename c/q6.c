// program to check  no. is pallondrome or not
// reverse a string in same array itself
//What is the output of this code?
#include<stdio.h>
int * test() {

  static int x[4];

  for(int i=0;i<4;i++){

    x[i] = i%2;

  }

  return x;

} 

int main() {

  int * arr = test();

  printf("%d", *(arr+3));

}

