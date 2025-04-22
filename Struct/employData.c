#include <stdio.h>
#define maxEmp 5
struct employData{
    int empId;
    char empName[10];
    float empSalary;
};

struct employData empdata[maxEmp];


void addEmploy(int num){
    for(int i=0; i<num; i++){
        printf("\nEnter Detail of %d Employ\n",i+1);
        printf("Enter Employ Id : ");
        scanf("%d", &empdata[i].empId);
        printf("Enter Employ Name : ");
        scanf(" %[^\n]s", &empdata[i].empName);
        printf("Enter Employ Salary : ");
        scanf(" %f", &empdata[i].empSalary);
    }
}
void printData(int num){
    printf("\n----------Data Of Employees----------\n");
    for(int i=0; i<num; i++){
        printf("Employ Id = %d\n",empdata[i].empId);
        printf("Employ Name = %s\n",empdata[i].empName);
        printf("Employ Salary = %.2f\n\n",empdata[i].empSalary);
    }printf("\n");
}

int main(){
    int i,j,num;
    printf("How many Employ: ");
    scanf("%d",&num);


    addEmploy(num);
    printData(num);

    return 0;
}