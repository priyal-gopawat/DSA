//WAP to print all natural numbers from 1-n using while loop
#include<bits/stdc++.h>
using namespace std;

int main() {
    int i,n;
    printf("print all natural no. from 1 to:");
    scanf("%d",&n);
    i=1;
    while(i<=n)
    {
        printf("%d\n",i);
        i++;
    }
    
    return 0;
}
