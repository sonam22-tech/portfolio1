#include<stdio.h>
int main()
{
    int day; // 1-mon; 2-tues; 3-wed;4-thurs; 5-fri; 6-sat; 7-sun;
    printf("enter day(1-7):");
    scanf("%d",&day);
    switch(day){
        case 1: printf("monday");
                break;
        case 2: printf("tuesday");
                break;
        case 3: printf("wednesday");
                break;
        case 4: printf("thursday");
                break;
        case 5: printf("friday");
                break;
        case 6: printf("saturday");
                break;
        case 7: printf("sunday");
        default: printf("not a valid day! \n");                                           
    }
    return 0;
}