#include <stdio.h>
int main()
{
    float n1,n2,sum,a,b,d,e;
    int c,choice,i,n;
    int num,count,fact=1,year,m;
    char ch;
 LL:    printf("\n\t\t\t\t\t\t\t    Time : %s ",__TIME__);
    printf("\n\t\t\t\t\t\t\t    Date : %s\n\n",__DATE__);


    printf("\t\t ***   ***  *    *** *   * *    ***  ***** ****  ***      \n");
    printf("\t\t*     *   * *   *    *   * *   *   *   *   *  *  *  *     \n");
    printf("\t\t*     * * * *   *    *   * *   * * *   *   *  *  * *      \n");
    printf("\t\t ***  *   * ***  ***  ***  *** *   *   *   ****  *  *     \n");


    printf("\n\n\n\t\t\t *** Welcome to My Calculator ***\n\n");
    printf("\tHere you can easily Calculate some important thing with a short time\n\n");
   printf("\t\t\t\t Enter N for Start : ");
    scanf("%c",&ch);
    system("cls");
    if(ch=='N')
    {

        printf("\t\t\t\t#. Menu/Choice\n\n\n");
        printf("\t\t1. Add \t\t\t\t 6. Find Large\n\n");
        printf("\t\t2. Subtract \t\t\t 7. Even or Odd\n\n");
        printf("\t\t3. Multiply \t\t\t 8. Prime Number\n\n");
        printf("\t\t4. Divide \t\t\t 9. Factorial\n\n");
        printf("\t\t5. Reminder \t\t\t 10. Leap Year\n\n");
        printf("\t\t\t\t11. Exit\n\n\n\n");
        printf("Enter your choice for Calculate\n");

Line:
        while(scanf("%d",&c)!=EOF)
        {
            if(c==1)
            {
                printf("\t\t\t\t Enter two Number for Add\n");
L1:
                scanf("%f%f",&n1,&n2);
                sum=n1+n2;
                printf("Sum = %.2f\n\n",sum);


                printf("\t\t\t\tDo you want to close Add\n\n");
                printf("\t\t\t\t 1.Yes\n");
                printf("\t\t\t\t 2.No\n");
                scanf("%d",&m);

                if(m==1)
                {
                    printf("Enter your Choice for Calculate\n");
                }
                if(m==2)
                {
                    goto L1;
                }


            }
            if(c==2)
            {
                printf("\t\t\t\t Enter two Number for Subtract\n");
L2:
                scanf("%f%f",&n1,&n2);
                sum=n1-n2;
                printf("Sum = %.2f\n\n",sum);

                printf("\t\t\t\tDo you want to close Subtract\n\n");
                printf("\t\t\t\t\t 1.Yes\n");
                printf("\t\t\t\t\t 2.No\n");
                scanf("%d",&m);

                if(m==1)
                {
                    printf("Enter your Choice for Calculate\n\n");
                }
                if(m==2)
                {
                    goto L2;
                }
            }
            if(c==3)
            {
                printf("\t\t\t\t Enter two Number Multiply\n");
L3:
                scanf("%f%f",&n1,&n2);
                sum=n1*n2;
                printf("Sum = %.2f\n\n",sum);

                printf("\t\t\t\tDo you want to close Multiply\n\n");
                printf("\t\t\t\t\t 1.Yes\n");
                printf("\t\t\t\t\t 2.No\n");
                scanf("%d",&m);

                if(m==1)
                {
                    printf("Enter your Choice for Calculate\n");
                }
                if(m==2)
                {
                    goto L3;
                }
            }
            if(c==4)
            {
                printf("\t\t\t\t Enter two Number Divide\n");
L4:
                scanf("%f%f",&n1,&n2);
                sum=n1/n2;
                printf("Sum = %.2f\n\n",sum);

                printf("\t\t\t\tDo you want to close Divide\n\n");
                printf("\t\t\t\t\t 1.Yes\n");
                printf("\t\t\t\t\t 2.No\n");
                scanf("%d",&m);

                if(m==1)
                {
                    printf("Enter your Choice for Calculate\n\n");
                }
                if(m==2)
                {
                    goto L4;
                }
            }
            if(c==5)
            {
                printf("\t\t\t\t Enter two Number for Reminder\n");
L5:
                scanf("%f%f",&n1,&n2);
                sum=((int)n1)%((int)n2);
                printf("Sum = %.2f\n\n",sum);

                printf("\t\t\t\tDo you want to close Reminder\n\n");
                printf("\t\t\t\t\t 1.Yes\n");
                printf("\t\t\t\t\t 2.No\n");
                scanf("%d",&m);

                if(m==1)
                {
                    printf("Enter your Choice for Calculate\n\n");
                }
                if(m==2)
                {
                    goto L5;
                }
            }
            if(c==6)
            {
                printf("\t\t\t\t Enter three Number for Find Large\n");
L6:
                scanf("%f %f %f",&a,&b,&d);
                if (a>b)
                {
                    if(a>d)
                    {
                        printf("Large Number is %.2f\n\n",a);
                    }
                    else
                    {
                        printf("Large Number is %.2f\n\n",d);
                    }
                }
                else if(b>d)
                {
                    printf("Large Number is %.2f\n\n",b);
                }
                else
                {
                    printf("Large Number is %.2f\n\n",d);
                }

                printf("\t\t\t\tDo you want to close Finding\n\n");
                printf("\t\t\t\t\t 1.Yes\n");
                printf("\t\t\t\t\t 2.No\n");
                scanf("%d",&m);

                if(m==1)
                {
                    printf("Enter your Choice for Calculate\n\n");
                }
                if(m==2)
                {
                    goto L6;
                }

            }
            if(c==7)
            {
                printf("\t\t\t\t Enter A Number for check Even or Odd\n");
L7:
                scanf("%f",&e);
                if((int)e%2==0)
                {
                    printf("Its a Even Number\n\n");
                }
                else
                {
                    printf("Its a Odd Number\n\n");
                }

                printf("\t\t\t\tDo you want to close Checking\n\n");
                printf("\t\t\t\t\t 1.Yes\n");
                printf("\t\t\t\t\t 2.No\n");
                scanf("%d",&m);

                if(m==1)
                {
                    printf("Enter your Choice for Calculate\n\n");
                }
                if(m==2)
                {
                    goto L7;
                }
            }
            if(c==8)
            {
                printf("\t\t\t\t Enter a positive number for Prime\n");
L8:
                scanf("%d",&n);
                for(i=2; i<=n/2; i++)
                {
                    if(n%i==0)
                    {
                        break;
                    }
                }
                if(i==n/2+1)
                {
                    printf("Its a Prime Number\n\n");
                }
                else
                {
                    printf("Its not a Prime Number\n\n");
                }

                printf("\t\t\t\tDo you want to close Finding Prime\n\n");
                printf("\t\t\t\t\t 1.Yes\n");
                printf("\t\t\t\t\t 2.No\n");
                scanf("%d",&m);

                if(m==1)
                {
                    printf("Enter your Choice for Calculate\n\n");
                }
                if(m==2)
                {
                    goto L8;
                }
            }
            if(c==9)
            {
                printf("\t\t\t\t Enter a Number for Factorial\n");
L9:
                scanf("%d",&num);
                if (num<0)
                {
                    printf("Enter non negative Number\n\n");
                }
                else
                {
                    for (count=num; count>=1; count--)
                    {
                        fact=fact*count;

                    }
                    printf("Factorial value = %d\n\n",fact);
                }

                printf("\t\t\t\tDo you want to close Factorial\n\n");
                printf("\t\t\t\t\t 1.Yes\n");
                printf("\t\t\t\t\t 2.No\n");
                scanf("%d",&m);

                if(m==1)
                {
                    printf("Enter your Choice for Calculate\n\n");
                }
                if(m==2)
                {
                    goto L9;
                }
            }
            if(c==10)
            {
                printf("\t\t\t\t Enter a Year\n");
L10:
                scanf("%d",&year);
                if (year%4==0 && year%100!=0)
                {
                    printf("This Year is Leap Year\n\n");
                }
                else
                {
                    printf("This Year is not Leap Year\n\n");
                }

                printf("\t\t\t\tDo you want to close Finding Leap Year\n\n");
                printf("\t\t\t\t\t 1.Yes\n");
                printf("\t\t\t\t\t 2.No\n");
                scanf("%d",&m);

                if(m==1)
                {
                    printf("Enter your Choice for Calculate\n\n");
                }
                if(m==2)
                {
                    goto L10;
                }
            }

            if(c==11)
            {
                printf("\t\t\t\t Do you want to Exit\n\n");
                printf("\t\t\t\t 1.Yes\n\n");
                printf("\t\t\t\t 2.No\n\n");
                scanf("%d",&choice);
                if(choice==1)
                {
                    printf("\t\t\t Thank you for Using My Software\n\n");
                    printf("\t\t     Md. Jannatul Naim | Department of C.S.E\n\n\t\t         Varendra University, Rajshahi\n\n\n");
                    break;
                }
                if(choice==2)
                {
                    printf("\t\t\t\t Enter Your Choice for Calculate Again\n\n");
                    goto Line;
                }

            }


        }
    }
    else
        printf("\t\t\t Wrong Input !!!\n");
        goto LL;

    return 0;
}
