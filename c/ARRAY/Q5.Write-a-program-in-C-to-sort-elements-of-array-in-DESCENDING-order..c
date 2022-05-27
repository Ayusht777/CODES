//Q5.Write a program in C to sort elements of array in DESCENDING order.
#include<stdio.h>
    void main()

    {



        int i, j,x,n;

        printf("ENTER THE ARRAY SIZE :\n");

        scanf("%d", &n);
        int a[n],z;



        for (i = 0; i < n; i++){

            printf("\nENTER THE ELEMENT NO %d:",i+1);
            scanf("%d", &a[i]);

        }




        for (i = 0; i < n; i++)

        {  for (j = i; j < n; j++)

            {  if (a[i] < a[j])

                {



                    z =  a[i];

                    a[i] = a[j];

                    a[j] = z;
                    }
             }
}



        printf("NUMBER IN DESCENDING\n");

        for (i = 0; i < n;i++)

            printf("ELEMNET %d :%d\n",i+1,a[i]);
}



