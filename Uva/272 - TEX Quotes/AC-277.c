#include <stdio.h>
#include <string.h>
//#define MAX 10000000

int main()
{
   char Original[1000000]="";
   int par=0,i;
   while(gets(Original))
   {
      int l=strlen(Original);
      for (i = 0; i < l; i++)
      {
         if(Original[i]=='"')
         {
            par++;
            if(par%2==0)
            {
               printf("%c%c",39,39);
            }
            else
            {
               printf("%c%c",96,96);
            }

         }
         else
         {
            printf("%c",Original[i]);
         }
      }
   }
   return 0;
}
