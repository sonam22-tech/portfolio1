#include<stdio.h>
int main()
{
    int marks;
    printf("enter marks(1-100) of the student:");
    scanf("%d",&marks);
    

    if(marks< 30)
    {
        printf("GRADE C \n");
    }
    else if(marks>= 30 && marks <=50)
    {
        printf("GRADE B \n");
    }
     else if (marks > 50 && marks<= 80)
     {
        printf("GRADE A \n");
     }
       else if (marks> 80 && marks <= 100)
       {
          printf("GRADE A++ \n");

       }
         else  
         {
             printf("invailid marks \n");

         }
   return 0;      
}