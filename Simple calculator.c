#include <stdio.h>

int main() {
    int a,b,sum,sub,product,quotient,choice,res;
    printf("Enter any two numbers:\n");
    scanf("%d%d",&a,&b);
    printf("Enter the choice\n 1.Add\n 2.sub\n 3.multiplication\n 4.division\n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1: res=a+b;
            printf("sum=%d",res);
            break;
        case 2: res=a-b;
            printf("sub=%d",res);
            break;
        case 3: res=a*b;
            printf("product=%d",res);
            break;
        case 4: res=a/b;
            printf("Quotient=%d",res);   
            break;
        default:
        printf("wrong choice");
        break;
    }        
    return 0;
}
//MY FIRST CAlCI PROGRAM
