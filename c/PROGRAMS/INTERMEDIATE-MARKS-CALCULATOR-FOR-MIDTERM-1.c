 #include<stdio.h>
int main()
{

    float m,b,c,p,h,x=0,t;
    printf("THE MARK'S CALCULATOR");
    renter_marks_of_bee:
    printf("\nENTER THE MARKS OF B.E.E:");
    scanf("%f",&b);
    if(0<=b&&b<=50)
        x=1;
    else
        {
        goto renter_marks_of_bee;
    }
    if(x==1)
    {
       renter_marks_of_HUMAN_VALUES:
       printf("\nENTER THE MARKS OF HUMAN VALUES:");
       scanf("%f",&h);
       if(0<=h&&h<=50)
        x=0;
       else
        goto renter_marks_of_HUMAN_VALUES;
    }
    if(x==0)
    {
       renter_marks_of_PHYSICS:
       printf("\nENTER THE MARKS OF PHYSICS:");
       scanf("%f",&p);
       if(0<=p&&p<=50)
        x=1;
       else
        goto renter_marks_of_PHYSICS;
    }
    if (x==1)
    {
      renter_marks_of_MATHS:
       printf("\nENTER THE MARKS OF MATHS:");
       scanf("%f",&m);
       if(0<=m&&m<=50)
        x=0;
       else
        goto renter_marks_of_MATHS;
    }
    if(x==0)
        {
      renter_marks_of_CS:
       printf("\nENTER THE MARKS OF CS:");
       scanf("%f",&m);
       if(0<=c&&c<=50)
        x=1;
       else
        goto renter_marks_of_CS;
    }

    t=(m+b+c+p+h)/250*100;
    if(t>=33)
        printf("\nPASS");
    else
        printf("FAIL\n");
    printf("YOUR TOTAL PERCENTAGE IS %.2f%%\n",t);




}
