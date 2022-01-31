#include<stdio.h>
int input()
{
  int a;
  printf("Enter a number:");
  scanf("%d",&a);
  return a;
}
int cmp(int a,int b,int c)
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
  
void output(int l)
{
  printf("The larges numberin the given input is :%d",1);
}
