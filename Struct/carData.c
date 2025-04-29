// Design a structure named "Car" to store details like car ID, model, and rental rate per day. Write a C program to input data for three cars, calculate the total rental cost for a specified number of days, and display the results.



#include <stdio.h>
#include <string.h>
#define maxCar 3
struct carData{
    int carId;
    char carName[20];
    float rentperDay;
};

struct carData Cdata[maxCar];
void carfunc(){
    for(int i=0; i<maxCar; i++){
        printf("Enter car Id: ");
        scanf("%d", &Cdata[i].carId);
        printf("Enter car Name: ");
        scanf(" %[^\n]s", &Cdata[i].carName);
        printf("Enter car rentperDay: ");
        scanf("%f", &Cdata[i].rentperDay);
    }
}

int main(){
    int i,num;
    carfunc();
    printf("Enter num of Day :");
    scanf("%d", &num);
    for(int i=0; i<maxCar; i++){
        printf("Rate of %s is : %f for %d days.\n",Cdata[i].carName,Cdata[i].rentperDay * num , num);

    }
    return 0;
}