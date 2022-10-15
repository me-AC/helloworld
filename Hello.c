#include <stdio.h>
#include <conio.h>

int main()
{
  char name[100];
  clrscr();
  printf("Enter your name: ");
  gets(name);
  printf("Hello, %s!", name);
  getch();
  return 0;
}
