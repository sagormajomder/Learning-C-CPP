//Given a character C, determine whether it’s digit, vowel, consonant or other
#include<stdio.h>
int main()
{
    char c;
    printf("Enter any character : ");
    scanf("%c",&c);

    if(c>='0' && c<='9')
        printf("Digit");

    else if(c=='a'|| c=='e'|| c=='i'|| c=='o'|| c=='u'|| c=='A'|| c=='E'|| c=='I'|| c=='O'|| c=='U')
        printf("Vowel");

    else
        printf("Consonat or Others");
        return 0;



}
