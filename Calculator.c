#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h>
int main()
{
    int choice,num,a,b,c;
    float Sum,n1,n2,Sub,Mul,Div,temp,CT,x,result,x1,x2,d;
    char option;
    do
    {
        printf("\nchoose any option :\n");
        printf(" 1. Addition\n");
        printf(" 2. Subtraction\n");
        printf(" 3. Multiplication\n");
        printf(" 4. Division\n");
        printf(" 5. Fahrenheit to Celsius\n");
        printf(" 6. Celsius to Fahrenheit\n");
        printf(" 7. Decimal to Octal\n");
        printf(" 8. Octal to Hexadecimal\n");
        printf(" 9. Decimal to Hexadecimal\n");
        printf("10. Log\n");
        printf("11. Value of x\n");
        printf("12. And operator\n");
        printf("13. Or operator\n");
        printf("14. X-or operator\n");
        printf("15. Not operator\n");
        printf("16. Nand operator\n");
        printf("17. Nor operator\n");
        printf("18. X-nor operator\n");
        scanf("%d",&choice);
        system("cls");
        switch(choice)
        {


        case 1:
        {
            printf("two numbers are:");
            scanf("%f%f",&n1,&n2);
            Sum=n1+n2;
            printf("Sum is : %.2f\n",Sum);
        }
        break;


        case 2:
        {
            printf("Two numbers are:");
            scanf("%f%f",&n1,&n2);
            Sub=n1-n2;
            printf("Subtraction is : %.2f\n",Sub);
        }
        break;
        case 3:
        {
            printf("enter two numbers: ");
            scanf("%f%f",&n1,&n2);
            Mul=n1*n2;
            printf("Multiplication is  %.2f\n",Mul);
        }
        break;
        case 4:
        {
            printf("Enter two numbers :");
            scanf("%f%f",&n1,&n2);
            Div=n1/n2;
            printf("Division is %.2f",Div);
        }
        break;
        case 5:
        {
            printf("Enter Fahrenheit Temperature:");
            scanf("%f",&temp);
            CT=(temp-32)/1.8;
            printf("Celsius is: %.2f",CT);

        }
        break;
        case 6:
        {
            printf("Enter Celsius Temperature:");
            scanf("%f",&temp);
            CT=(temp*1.8)+32;
            printf("Fahrenheit is: %.f",CT);
        }
        break;
        case 7:
        {
            printf("Enter a Decimal number:\n");
            scanf("%d",&num);
            printf("Octal is: %o",num);

        }
        break;
        case 8:
        {
            printf("Enter a Octal number:");
            scanf("%o",&num);
            printf("Hexadecimal is : %X",num);
        }
        break;
        case 9:
        {
            printf("Enter a Decimal number:");
            scanf("%d",&num);
            printf("Hexadecimal is: %X",num);
        }
        break;
        case 10:
        {
            printf("Enter the value of x: ");
            scanf("%f",&x);
            result=log10(x);
            printf("log10(x)= %.3f",result);

        }
        break;
        case 11:
        {
            printf("Enter value of a:");
            scanf("%d",&a);
            printf("Enter value of b:");
            scanf("%d",&b);
            printf("Enter value of c:");
            scanf("%d",&c);
            d=sqrt(b*b-4*a*c);
            x1=(-b+d)/2*a;
            printf("Value of x1: %.2f\n",x1);
            x2=(-b-d)/2*a;
            printf("Value of x2: %.2f",x2);
        }
        break;
        case 12:                                                   //And operation
         {
            long int binary1,binary2;

            printf("Enter 1st binary: ");          //taking binary numbers
            scanf("%d",&binary1);
            printf("Enter 2nd binary: ");
            scanf("%d",&binary2);
            int decimal1=0,i=0,rem1;
            int decimal2=0,j=0,rem2;                    //initialization
            while(binary1!=0)
            {
                rem1=binary1%10;                  //converting to decimal for understanding easily
                binary1=binary1/10;
                decimal1=decimal1+rem1*pow(2,i);
                ++i;
            }
                                                 //  printf("Converting to 1st Decimal: %d",decimal1);
            while(binary2!=0)
            {
                rem2=binary2%10;                 //converting to decimal for understanding easily
                binary2=binary2/10;
                decimal2=decimal2+rem2*pow(2,j);
                ++j;
            }
            //   printf("\nConverting to 2nd Decimal: %d",decimal2);
            int and=decimal1 & decimal2;
            int binary3,base3=1,rem3;
            while(and>0)
            {
                rem3= and % 2;
                binary3=binary3+base3*rem3;
                and=and/2;
                base3=base3*10;
            }
            printf("\nAND: %d\n",binary3); //Result for AND
        }
        break;
        case 13:
         {
            long int binary1,binary2;

            printf("Enter 1st binary: ");
            scanf("%d",&binary1);
            printf("Enter 2nd binary: ");
            scanf("%d",&binary2);
            int decimal1=0,i=0,rem1;
            int decimal2=0,j=0,rem2;
            while(binary1!=0)   //converting to decimal
            {
                rem1=binary1%10;
                binary1=binary1/10;
                decimal1=decimal1+rem1*pow(2,i);
                ++i;
            }
            //     printf("Converting to 1st Decimal: %d",decimal1);
            while(binary2!=0)
            {
                rem2=binary2%10;
                binary2=binary2/10;
                decimal2=decimal2+rem2*pow(2,j);
                ++j;
            }
            //    printf("\nConverting to 2nd Decimal: %d",decimal2);
            int or=decimal1 | decimal2;
            int binary3,base3=1,rem3;
            while(or>0)
            {
                rem3 = or%2;
                binary3 = binary3 + base3 * rem3;
                or = or / 2;
                base3 = base3*10;
            }
            printf("\nOR: %d\n",binary3);
        }
        break;
        case 14:
        {
            int binary1,binary2;
            printf ("Enter 1st Binary number: ");
            scanf ("%d",&binary1);
            printf ("Enter 2nd Binary number: ");
            scanf ("%d",&binary2);
            printf ("XOR: %d\n",(binary1^binary2));
        }
        break;
        case 15:
        {
            char a[90];
            int i;
            printf("enter: ");
            fflush(stdin);
            gets(a);
            fflush(stdin);
            for(i=0; a[i]!='\0'; i++)
            {
                if(a[i]=='0')
                    printf("1");
                if(a[i]=='1')
                    printf("0");

            }
        }
        break;
        case 16:
         {
            char binary1[50],binary2[50];
            int i;
            printf("binary1: ");
            fflush(stdin);
            gets(binary1);
            fflush(stdin);
            printf("binary2: ");
            fflush(stdin);
            gets(binary2);
            fflush(stdin);

            for(i=0; binary1[i]!='\0',binary2[i]!='\0'; i++)
            {
                if(binary1[i]=='1' && binary2[i]=='1')
                    printf("0");
                else  if(binary1[i]=='1' && binary2[i]=='0' || binary1[i]=='0' && binary2[i]=='1')
                    printf("1");
                else if(binary1[i]=='0' && binary2[i]=='0')
                    printf("1");

            }

        }break;
        case 17:
        {
            char binary1[50],binary2[50];
            int i;
            printf("binary1: ");
            fflush(stdin);
            gets(binary1);
            fflush(stdin);
            printf("binary2: ");
            fflush(stdin);
            gets(binary2);
            fflush(stdin);
            for(i=0; binary1[i]!='\0',binary2[i]!='\0'; i++)
            {
                if(binary1[i]=='1' && binary2[i]=='1')
                    printf("0");
                else  if(binary1[i]=='1' && binary2[i]=='0' || binary1[i]=='0' && binary2[i]=='1')
                    printf("0");
                else if(binary1[i]=='0' && binary2[i]=='0')
                    printf("1");

            }
        }
        break;
        case 18:
        {
            char binary1[50],binary2[50];
            int i;
            printf("binary1: ");
            fflush(stdin);
            gets(binary1);
            fflush(stdin);
            printf("binary2: ");
            fflush(stdin);
            gets(binary2);
            fflush(stdin);
            for(i=0; binary1[i]!='\0',binary2[i]!='\0'; i++)
            {
                if(binary1[i]=='1' && binary2[i]=='1')
                    printf("1");
                else  if(binary1[i]=='1' && binary2[i]=='0' || binary1[i]=='0' && binary2[i]=='1')
                    printf("0");
                else if(binary1[i]=='0' && binary2[i]=='0')
                    printf("1");

            }
        }
        }

        printf("\n\nDo you want to continue y/n ?\n");
        option=getche();
    }
    while(option=='y');
    getch();

}
