//WAP to find roots of a quadratic equation using switch case.
#include <bits/stdc++.h>
using namespace std;

int main()
{
    float a, b, c, D;
    printf("enter a,b,c\n");
    scanf("%f%f%f", &a, &b, &c);
    D = b * b - 4 * a * c;
    int sq3 = sqrt(D);
    switch (D > 0)
    {
    case 1:
        printf("roots1:\t%f\n", (-b + sq3) / 2 * a);
        printf("roots2:\t%f\n", (-b - sq3) / 2 * a);
        break;

    case 0:
        switch (D < 0)
        {
        case 1:
            
            printf("roots1:\t%f+%fi\n", -b / 2 * a,sq3 / 2 * a);
            printf("roots2:\t%f-%fi\n", -b / 2 * a,sq3 / 2 * a);
            break;

        case 0:
            printf("root:\t%f\n", -b / 2 * a);
            break;
        }
    }

    return 0;
}
