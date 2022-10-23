#include <stdio.h>
#include <conio.h>

int main()
{
  char name[100], char ans;
  clrscr();
  printf("Enter your name: \n");
  gets(name);
  printf("Hello, %s!", name);
  print("How are you %s?", name);
  printf("Are you fine?(Yes-Y or No-N) \n");
  scanf("%c", &ans);
  if(ans=='Y')
  {
    printf("You are gonna be alright! You are not alone! It's Just A Bad Day! May God Bless You! we got you! \n");
  }
  else
    printf("Glad! Have an amazing day! \n");
  getch();
  return 0;
}
