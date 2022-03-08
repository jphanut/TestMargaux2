#include <stdio.h>
#include <stdlib.h>
#include "test_strcasecmp.h"

void test_strcasecmp(void) {
    printf("Exercice strcasecmp\n");
    printf("-------------------\n");
    char str1[] = "Hello World";
    char str2[] = "Hello World";
    int i = strcasecmp(str1, str2);
    printf("Comparaison de s1=\"%s\" et s2=\"%s\" valeur de retour = %d\n",str1, str2, i);
    char str3[] = "Hello World";
    char str4[] = "Hello World Test";
    int j = strcasecmp(str3, str4);
    printf("Comparaison de s1=\"%s\" et s2=\"%s\" valeur de retour = %d\n",str3, str4, j);
    char str5[] = "Hello World";
    char str6[] = "Hello";
    int k = strcasecmp(str5, str6);
    printf("Comparaison de s1=\"%s\" et s2=\"%s\" valeur de retour = %d\n",str5, str6, k);
    char str7[] ="";
    char str8[] ="";
    int l = strcasecmp(str7, str8);
    printf("Comparaison de s1=\"%s\" et s2=\"%s\" valeur de retour = %d\n",str7, str8, l);
    char str9[] ="hello WORLD";
    char str10[] ="hello world";
    int m = strcasecmp(str9, str10);
    printf("Comparaison de s1=\"%s\" et s2=\"%s\" valeur de retour = %d\n",str9, str10, m);
    char str11[] ="hello world";
    char str12[] ="hello WORLD";
    int n = strcasecmp(str11, str12);
    printf("Comparaison de s1=\"%s\" et s2=\"%s\" valeur de retour = %d\n",str11, str12, n);
}

int strcasecmp(const char *s1, const char *s2)
{
    char* ptr_s1=(char*)s1;
    char* ptr_s2=(char*)s2;
    while (*ptr_s1) {
        if (!*ptr_s2) return 1;
        char chr_s1 = *ptr_s1;
        char chr_s2 = *ptr_s2;
        if ( (( chr_s1 >= 65 && chr_s1 <= 90 ) || ( chr_s1 >= 97 && chr_s1 <= 122 )) &&
             (( chr_s2 >= 65 && chr_s2 <= 90 ) || ( chr_s2 >= 97 && chr_s2 <= 122 )) )
        {
            if ( chr_s1 >= 65 && chr_s1 <= 90 ) chr_s1+=32;
            if ( chr_s2 >= 65 && chr_s2 <= 90 ) chr_s2+=32;
        }
        if (chr_s1 < chr_s2) return -1;
        if (chr_s1 > chr_s2) return 1;
        ptr_s1++;
        ptr_s2++;
    }
    if (*ptr_s2) return -1;
    return 0;
}

