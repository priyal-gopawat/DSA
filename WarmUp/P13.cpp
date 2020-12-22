//WAP to print odd no. between 1 to 100 
#include<bits/stdc++.h>
using namespace std;

int main() {
    int i;
    printf("odd no. between 1 to\n:");
    for(i=0;i<=100;i++)
    {
        if(i%2!=0)
        printf("%d\n",i);
    }

    
    return 0;
}

