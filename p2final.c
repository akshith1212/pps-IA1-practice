#include<stdio.h>
int input()
{
  int a;
  printf("Enter a number:");
  scanf("%d",&a);
  return a;
}
int cmp(int a,intb,int c)
{
  if ((a>b)&&(a>c))
  {
    return a;
    }
    else if(b>c)
    {
      return b;
    }
    else
    {
      return c;
      }
 } 
  
void output(int 1)
{
  printf("The larges numberin the given input is :%d",1);
}
