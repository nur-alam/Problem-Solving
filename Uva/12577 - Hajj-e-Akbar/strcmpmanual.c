
#include <stdio.h>
#include <string.h>
void main(void)
{
   char str1[25],str2[25],dif;
   printf("\nEnter the first String:");
   gets(str1);
   printf("\nEnter the second String;");
   gets(str2);
   dif=strcmp(str1,str2);
   printf("%d\n",dif);                                     //using string functions
   if(dif>0)
       printf("%s comes after %s",str1,str2);
   else
   {
       if(dif<0)
  printf("%s comes after %s",str2,str1);
       else
  printf("both the strings are same");
   }
}

