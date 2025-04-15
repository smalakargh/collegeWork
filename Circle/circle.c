#include <stdio.h>
#include<string.h>

void perimeter(float radius){
    printf("\n------------------------------");
    printf ("\nPerimeter of Circle is : %.2f\n",2*3.14*radius);
    printf("------------------------------\n");
}

void area(float radius){
    printf("\n----------------------------------");
    printf("\nArea of Circle is : %.2f\n",3.14*radius*radius);
    printf("----------------------------------\n");
}

int main(){
    int choice, R;
    do{
    printf("\nMenu:\n1. Perimeter of Circle\n2. Area of Circle\n3. Exit\n");
    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    switch (choice){
        case 1: 
            printf("\nEnter Radius of Circle: ");
            scanf("%d", &R);
            perimeter(R);
            break;
        case 2:
            printf("\nEnter Radius of Circle: ");
            scanf("%d", &R);
            area(R);
            break;
        case 3:
            printf("Existing Programmm...\n");
            break;
        default:
            printf("Invalid Choice... Try again");
    }
}while (choice!=3);

 return 0;
}