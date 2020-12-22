//WAP to count no. of digits in a number.
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, count = 0;
    printf("enter a number:");
    scanf("%d", &n);
    while (n != 0)
    {
        n = n / 10;
        count++;
    }
    printf("%d", count);
    return 0;
}
