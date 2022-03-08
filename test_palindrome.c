#include <string.h>
#include <stdio.h>
/*
* @return: returns true (1) if str is a palindrome, -1 if str is NULL, otherwise false (0).
*/
int pal(char *str) {
  if ( str == NULL) return -1;
  int i = 0;
  int j = strlen(str)-1;
  while ( i < j) {
    if ( *(str+i) != *(str+j) && *(str+i) != ' ' && *(str+j) != ' ') return 0;
    if ( *(str+i) == ' ' &&  *(str+j) != ' ' ) i++;
    else
    {
       if ( *(str+i) != ' ' &&  *(str+j) == ' ' ) j--;
       else {
            i++;
            j--;
       }
    }
  }
  return 1;
}

void test_pal(void) {
    printf("Exercice Palindrome\n");
    printf("-------------------\n");
    char str1[] = "Hello World";
    int i = pal(str1);
    printf("Check Palindrome str=\"%s\" valeur de retour = %d\n",str1, i);
    char * str2 = NULL;
    int j = pal(str2);
    printf("Check Palindrome str=\"%s\" valeur de retour = %d\n",str2, j);
    char str3[] = "A";
    int k = pal(str3);
    printf("Check Palindrome str=\"%s\" valeur de retour = %d\n",str3, k);
    char str4[] = "ABCDEDCBA";
    int l = pal(str4);
    printf("Check Palindrome str=\"%s\" valeur de retour = %d\n",str4, l);
    char str5[] = "";
    int m = pal(str5);
    printf("Check Palindrome str=\"%s\" valeur de retour = %d\n",str5, m);
    char str6[] = "a b c d edcba";
    int n = pal(str6);
    printf("Check Palindrome str=\"%s\" valeur de retour = %d\n",str6, n);
}
