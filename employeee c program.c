 
#include <stdio.h>
 
/*structure declaration*/
struct employee{ 
    char    name[30];
    float    age;
    float   salary;
    float   number;
};
 
int main()
{
    /*declare structure variable*/
    struct employee emp;
     
    /*read employee details*/
    printf("\nEnter details :\n");
    printf("Name ?:");          gets(emp.name);
    printf("Age?:");            scanf("%f",&emp.age);
    printf("Salary ?:");        scanf("%f",&emp.salary);
    printf("Number?:");          scanf("%f",&emp.number);
     
    /*print employee details*/
    printf("\nEntered detail is:");
    printf("Name: %s"   ,emp.name);
    printf("Age: %f"     ,emp.age);
    printf("Salary: %f ",emp.salary);
    printf("Number: %f\n", emp.number);
    return 0;
}
