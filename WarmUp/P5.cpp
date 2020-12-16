//WAP to check whether a number is even or odd using switch case.
#include<bits/stdc++.h>
using namespace std;

int main() {
    int num;
    printf("enter a number:");
    scanf("%d",&num);
    switch(num % 2)
    {
        case 0:
        printf("number is even");
        break;

        case 1:
        printf("number is odd");
        break;


    }
    
    return 0;
}

