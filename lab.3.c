
#include<stdio.h>

int palindrome( int x)
{
    int reminder, reversednumber=0;
    int originalnumber=x;
    while (x>0)
    {
        reminder=x%10;
        reversednumber= reversednumber*10+ reminder;
        x= x/10;
    }
    if (originalnumber==reversednumber)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
   int x;
   scanf ("%d",&x);
   if (palindrome(x))
   {
       printf ("Palindrome");
   }
   else
   {
       printf ("Not Palindrome");
   }
   return 0;
}
