//WAP to check whether an alphabet is vowel or consonant using switch case.
#include <bits/stdc++.h>
using namespace std;

int main()
{
    char ch;
    printf("enter any alphabet");
    scanf("%c", &ch);
    switch (ch)
    {

    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        printf("vowel");

    default:
        printf("consonant");
    }

    return 0;
}
