//Q7.Write a program in C to insert New value in the array (unsorted list ).
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

        int e;
       printf("\nENTER NUMBER OF ITME'S:\n");

        scanf("%d", &e);
        int q = n+e;

        int w[q];

        for (i = 0; i < e; i++){

            printf("\nENTER THE ELEMENT NO %d:",i+1);
            scanf("%d", &w[i]);

        }
        int k =0;

        for(i=e;i<q+1;i++){
                  w[i] =a[k];
                  k++;


        }

        printf("UNSORTED LIST \n");

        for (i = 0; i<q;i++)

            printf("ELEMNET %d :%d\n",i+1,w[i]);



}
