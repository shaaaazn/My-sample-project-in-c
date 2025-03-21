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



//TEMPERATURE CONVERTER
#include <stdio.h>

int main() {
    int choice;
    float temp,convertedtemp;
    printf("Enter the choice:\n 1.celsius to fahrenheit\n 2.celsius to kelvin\n 3.kelvin to fahrenheit\n");
    scanf("%d",&choice);
    printf("enter the temp:\n");
    scanf("%f", &temp);
    switch(choice)
     {
         case 1:
         convertedtemp = (temp*9/5) + 32;
         printf("%.2f celsius = %.2f fahrenheit",temp,convertedtemp);
         break;
         
         case 2:
         convertedtemp = temp + 273.15;
         printf("%.2f celsius = %.2f kelvin",temp,convertedtemp);
         break;
         
         case 3:
         convertedtemp = ((temp - 273.15)*9/5) + 32;
         printf("%.2f celsius = %.2f kelvin",temp,convertedtemp);
         break;
         
         default:
         printf("wrong choice");
         break;
     }
     printf("\n");
    return 0;
}
 
