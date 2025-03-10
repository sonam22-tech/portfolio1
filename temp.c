#include<stdio.h>
float convert Temp(float celsius)
int main{
    float far=convert Temp(0);
    printf("far:%f", far);
    return 0;
}
float convert Temp(float celsius){
    float far=celsius*(9.0/5.0)+32;
    return far;
}