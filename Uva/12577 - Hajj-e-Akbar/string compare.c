#include<stdio.h>
#include<string.h>
#define MAX_STRING_LEN 80
int main() {
  /* What is the result of the following
   * for different strings S1, S2?
   */
  //char S1[MAX_STRING_LEN];
  char S1[20];
  //char S2[MAX_STRING_LEN];
  char S2[20];
  int i, l, res;
  printf("String1:\t");
  scanf("%s",S1);
  printf("String2:\t");
  scanf("%s",S2);
  res = strcmp(S1,S2);
 // printf("strcmp(%sS1,%sS2) = %d\n",S1,S2,res);
  printf("strcmp=%d\n",res);
}
