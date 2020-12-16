//WAP to find maximum no. between two numbers using switch case.
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    printf("enter two numbers:");
    scanf("%d%d", &a, &b);
    switch (a > b)
    {
    case 0:
        printf("%d is maximum", a);
        break;

    case 1:
        printf("%d is maximum", b);
        break;

        default:
        printf("equal");
    }

    return 0;
}
