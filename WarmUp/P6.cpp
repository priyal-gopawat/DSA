//WAP to check whether a number is positive,negative or zero using switch case.
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    printf("enter a number:");
    scanf("%d", &num);
    switch (num > 0)
    {
    case 1:
        printf("%d num is positive:", num);
        break;

    case 0:
        switch (num < 0)
        {
        case 1:
            printf("%d num is negative:", num);

        case 0:
            printf("%d num is zero:", num);
            break;
        }
        break;
    }

    return 0;
}
