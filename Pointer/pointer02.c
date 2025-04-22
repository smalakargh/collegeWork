#include <stdio.h>

struct student{
    int roll; char name[50]; float marks;
};


int main(){
    struct student stud;
    struct student *ptr = &stud;
    
    printf("Enter Name : ");
    fgets( ptr->name, sizeof(ptr->name), stdin);
    printf("Enter Your Roll: ");
    scanf("%d", &ptr->roll);
    
    printf("Enter Your Marks : ");
    scanf("%f", &ptr->marks);

    // Display Data 
    printf("\n");
    printf("Roll = %d\n", ptr->roll);
    printf("Name = %s", ptr->name);
    printf("Marks = %.2f", ptr->marks);

    return 0 ;
}
