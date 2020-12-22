//WAP to find sum of all even numbers from 1 to n.
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, sum;
    printf("sum of even no. from 1 to:");
    scanf("%d", &n);
    sum = n * (n + 1) ;
    printf("%d", sum);

    return 0;
}
