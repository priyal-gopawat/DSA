//WAP to print all even no. from 1 to 100 using while loop.
#include<bits/stdc++.h>
using namespace std;

int main(){
    int i,n;
    printf(" even no. from 1 to\n:");
    scanf("%d",&n);
    i=1;
    while(i<=100)
    {
        if(i%2==0)
        {
            printf("%d\n",i);
        }
        i++;
    }


    return 0;
}

