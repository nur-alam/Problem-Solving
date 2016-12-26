#include <cstdio>
#include <cstring>
int main ()
{
    int n,i;
    scanf("%d\n",&n);
    char s[50];
    char *p;

  for(i=0;i<n;i++){
    //scanf("%[^\t\n]s\n",s);
    gets(s);
    p = strtok (s," ");
    int count=0;
  while (p!= NULL)
    {
        //printf ("%s\n",p);
        p = strtok (NULL, " ");
        count=count+1;
    }
    printf("%d\n",count);
  }
  return 0;
}
