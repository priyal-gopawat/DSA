//WAP to create simple calculator using switch case.
#include<bits/stdc++.h>
using namespace std;

int main() {
    int choice,a,b;
    printf("1.multiplication\n 2.add.\n 3.sub\n 4.div\n");
    scanf("%d%d%d",&choice,&a,&b);

    switch(choice)
     {
         case 1:
         printf("ans.=%d",a*b);
         break;

         case 2:
         printf("ans.=%d",a+b);
         break;

         case 3:
         printf("ans.=%d",a-b);
         break;

         case 4:
         printf("ans.=%d",a/b);
         break;
         
         default:
         printf("wrong choice");
     }
    return 0;
}
