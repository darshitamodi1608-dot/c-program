/* Check whether it is vowel or consonant */
#include <stdio.h>

int main()
{char alpha;
    printf("Enter an alphabet: ");
    scanf("%c", &alpha);
    if(alpha == 'a' || alpha == 'o' ||
       alpha == 'e' || alpha == 'i' || alpha == 'u' ||
       alpha == 'A' || alpha == 'E' || alpha == 'O' ||
       alpha == 'I' || alpha == 'U')
        printf("Vowel");
    else
        printf("Consonant");
    return 0;
}
