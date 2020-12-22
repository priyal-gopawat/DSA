//WAP to print multiplication table of any number.
#include<bits/stdc++.h>
using namespace std;

int main(){
    int i,num;
    printf("enter number to print table:");
    scanf("%d",&num);
    for(i=1;i<=10;i++)
    printf("%d*%d=%d\n",num,i,num*i);
    return 0;
}
