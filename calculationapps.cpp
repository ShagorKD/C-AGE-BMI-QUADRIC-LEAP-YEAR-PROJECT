
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
void Quadratic()
{
    printf("\n");
    printf("\n");
    for(int i=0; i<100; i++)
    {
        printf("-");
    }
    printf("\n\t\t\t\t\ QUADRATIC EQUATION(MIDDLE TERM)\n");
    for(int i=0; i<100; i++)
    {
        printf("-");
    }
    printf("\n");
    printf("\t\t\t\tAx^2+Bx+C is called a Quadratic equation\n");
    printf("\n");
    printf("\t\t\t\tWe can find the roots from the equation. \n");
    printf("\n");
    printf("\tEnter the value for \n");
    int a,b,c;
    printf("\t A = ");
    scanf("%d",&a);
    printf("\t\t B = ");
    scanf("%d",&b);
    printf("\t\t\t C = ");
    scanf("%d",&c);
    float x_1,x_2;
    printf("\n");

    float d;//d=discriminant of the polynomial.
    d= ((b*b)-4*a*c);
    if (d<0)
    {
        printf("\t\t The equation has no real number solutions, But it does have complex solutions.\n");

    }
    else if(d==0)
    {
        printf("\t\t The equation has a repeated real number root.\n");

    }
    else if(d>0)
    {
        printf(" \t\t The equation has two distinct real number roots.\n");
        x_1=(-b + sqrt(d))/(2*a);
        x_2=(-b - sqrt(d))/(2*a);
        printf("\t\t\tROOT_1 = %0.2f\n",x_1);
        printf("\n");
        printf("\t\t\tROOT_2 = %0.2f\n",x_2);
    }
    printf("\n");
    printf("\n");

}
/*Shagor kumar Das
201002403
GREEN UNIVERSITY OF BANGLADESH*/
void age_calculatro()
{
    printf("\n");
    printf("\n");
    for(int i=0; i<100; i++)
    {
        printf("-");
    }
    printf("\n\t\t\t\tAGE CALCULATOR\n");
    for(int i=0; i<100; i++)
    {
        printf("-");
    }
    printf("\n");

    int date_1,month_1,year_1;
    int date_2,month_2,year_2;
    printf(" Enter Your  Birth date ,month and year\n");
    printf("\tDate ----  ");
    scanf("%d",&date_1);
    printf("\t\tMonth ----  ");
    scanf("%d",&month_1);
    printf("\t\t\tYear ----  ");
    scanf("%d",&year_1);
    printf(" Enter current date ,month and year\n");
    printf("\tDate ----  ");
    scanf("%d",&date_2);
    printf("\t\tMonth ----  ");
    scanf("%d",&month_2);
    printf("\t\t\tYear ----  ");
    scanf("%d",&year_2);
    printf("\n");
    if((date_1==date_2)&&(month_1==month_2))
    {
        printf("\t\t\t\t\tHELLO! TODAY IS YOUR BIRTHDAY!!!\n");
        printf("\t\t\t\t\tMANY MANY HAPPY RETURNS OF THE DAY\n");
    }


    if(date_2>=date_1)
    {
        date_2=date_2-date_1;

    }
    else
    {
        month_2--;
        date_2=date_2+30;
        date_2-=date_1;
    }
    if(month_2>=month_1)
    {
        month_2 -=month_1;
    }
    else
    {
        year_2--;
        month_2+=12;
        month_2-=month_1;
    }
    year_2-=year_1;
    printf("\n");

    printf("\t\t\t\t\tYour age is %d years %d month %d days\n",year_2,month_2,date_2);
    printf("\n");
    printf("\n");


}
void Bmi()
{
    printf("\n");
    printf("\n");
    for(int i=0; i<100; i++)
    {
        printf("-");
    }
    printf("\n\t\t\t\tBMI CALCULATOR\n");
    for(int i=0; i<100; i++)
    {
        printf("-");
    }
    printf("\n");
    float weight, foot,inche;
    printf("Enter you weight (100) in kg= ");
    scanf("%f",&weight);
    printf("Enter your height\n");
    printf("Foot(5,6,7..)= ");
    scanf("%f",&foot);
    printf("Inchi(Example: 0.5,0.7,0.2...)= ");
    scanf("%f",&inche);
    float H_meter = (foot + inche)*0.3048 ;
    float height= (H_meter*H_meter);

    float  bmi= weight/height;
    printf("\t\t\t\tYour Bmi is %0.2f\n",bmi);
    printf("\n");
    printf("\n");
    if (bmi<18.5)
    {
        printf("Your BMI is lower than normal.You should consult your doctor.You need to gain weight by eating a moderate diet.\n");
    }
    else if(bmi>=18.5 && bmi<24.9)
    {
        printf("Your BMI is perfect. You need to keep this fitness\n");

    }
    else if(bmi>24.9 && bmi<29.9)
    {
        printf("You have got extra fat. You need to remove this extra fat by taking some regular exercises\n");
    }
    else if(bmi>29.9 && bmi<34.9)
    {
        printf("You are at the first stage of obesity.Excess fat needs to be reduced through regular exercise\n");
    }
    else if(bmi>34.9 && bmi<39.9)
    {
        printf("You are in the second stage of obesity.You need to eat moderately and exercise regularly\n");
        printf("And need to contact a doctor\n");
    }
    else if(bmi>40)
    {
        printf("You are too fat.You are at risk of death.You need a doctor's advice very quickly\n");
    }
    printf("\n");
    printf("\n");
}
void leap_year()
{
    printf("\n");
    printf("\n");
    for(int i=0; i<100; i++)
    {
        printf("-");
    }
    printf("\n\t\t\t\tLEAP YEAR CHECKER\n");
    for(int i=0; i<100; i++)
    {
        printf("-");
    }
    printf("\n");

    int year;
    printf("Enter a year: ");
    scanf("%d", &year);


    if (year % 400 == 0)
    {
        printf("%d is a leap year.\n", year);
    }

    else if (year % 100 == 0)
    {
        printf("%d is not a leap year.\n", year);
    }

    else if (year % 4 == 0)
    {
        printf("%d is a leap year.\n", year);
    }

    else
    {
        printf("%d is not a leap year.\n", year);
    }
    printf("\n");
    printf("\n");
}
void menu()
{
    printf(" \t\t\t\t\t\t OUR SERVICES\n");
    printf("_______________________________________________________________________________________________________\n");
    printf("_______________________________________________________________________________________________________\n");
    printf(" \t\t\t\t 1/ BMI CALCULATOR\n");
    printf("*********************************************************************************************\n");
    printf(" \t\t\t\t 2/ AGE CALCULATOR\n");
    printf("*********************************************************************************************\n");
    printf(" \t\t\t\t 3/ QUADRATIC EQUATION(MIDDLE TERM)\n");
    printf("*********************************************************************************************\n");
    printf(" \t\t\t\t 4/ CHECK LEAP YEAR\n");
    printf("*********************************************************************************************\n");
    printf("\n");
    printf("\n");
    printf("\t\t\t\t 10-->> DEVELOPER INFO______\n");

}
int main()
{
    printf("\n");
    printf("\n");
    printf("                                           ---------CALCO-----");
     printf("\n");
     printf("***************************************************************************************************************");
    printf("\n");
    printf("                                            PLEASE Enter You Name = ");
    char s[2000];
    scanf("%[^\n]%*c", s);

    printf("-----------------------------------------------Welcome %s ----------------------------------------------------\n",s);
    printf("_______________________________________________________________________________________________________________________\n");
    printf("\t\t This is a simple project to pratice basic c programming language.\n");
    printf("\t\t Thank You %s to support me.Keep me on your prayer.\n",s);
    printf("\n");
    int c;
    printf("\t\t\t PLEASE PRESS 1 TO SEE THE MENU\n");
    scanf("%d",&c);
    if(c==1){
        menu();
    }
    printf("*********************************************************************************************\n");
    printf("*********************************************************************************************\n");
    int choice;

    while(1)
    {
        printf("\t\t\t\tEnter your Choice -/-/-/-   ");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
        {
            Bmi();
            printf("*********************************************************************************************\n");
            menu();
            break;
        }
        case 2:
        {
            age_calculatro();
            printf("*********************************************************************************************\n");
            menu();
            break;

        }
        case 3:
        {
            Quadratic();
            printf("*********************************************************************************************\n");
            menu();
            break;
        }
        case 4:
        {
            leap_year();
            printf("*********************************************************************************************\n");
            menu();
            break;
        }
        case 10:
        {
            printf("\n");
            printf("\n");
            printf("       DEVELOPER NAME     ::    SHAGOR KUMAR DAS\n");
            printf("       DEVELOPER ADDRESS  ::    Khulna,Bangladesh\n");
            printf("       DEVELOPER CONTRACT ::         PHONE\n");
            printf("                                  01772621944\n");
            printf("        E-MAIL           :: shagorkumardas@gmail.com\n");
            printf("\n");
            printf("\n");
            printf("*********************************************************************************************\n");
            menu();
            break;
        }

        }


    }





}
