#include <stdio.h>
struct student{
    char name[50];
    int age;
    float marks;
};
int main(){
    struct student ss;
    printf("\nEnter Name: ");
    fgets(ss.name,sizeof(ss.name),stdin);
    printf("Enter Age: ");
    scanf("%d",&ss.age);
    printf("Enter Marks: ");
    scanf("%f",&ss.marks);
    
    printf("\nStudent Details\n");
    printf("Name: %s", ss.name);
    printf("Age: %d\n", ss.age);
    printf("Marks: %.2f", ss.marks);
    
    
    return 0;
}