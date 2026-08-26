/* Check vowel or consonent */
#include <stdio.h>

int main()
{ 
    char alpha;
    printf("Enter any alphabtes: ");
    scanf(" %c", &alpha);
    switch(alpha)
    {
        case 'a':
		  case 'e':
		  case 'i':case 'o':case 'u':case 'A':case 'E':case 'I':case 'O':case 'U':
            printf("Vowel");
            break;
        default:
            printf("Consonent");
    }

    return 0;
}
