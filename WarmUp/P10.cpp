//WAP to print all natural numbers in reverse (from n to 1)using while loop.
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, n;
    printf("print all natural no. from n to:");
    scanf("%d", &n);
    while (n >= 1)
    {
        printf("%d\n", n);
        n--;
    }

    return 0;
}
