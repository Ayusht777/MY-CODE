//2-D ARRAY IN C
//Initialization of a 2d array
// SYNTAX: data_type = array_name[row][column];

#include<stdio.h>
int main()
{
         int x[][2] = {{1,2},{3,4}};// here i have declared a *2 matrix where total four element can be store,
         // you can skip the row but not the column
         printf("\n%d",x[0][0]);
         printf("\n%d",x[0][1]);
         printf("\n%d",x[1][0]);
         printf("\n%d",x[1][1]);
           // soon we gone use for loop for it

}

