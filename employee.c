#include <stdio.h>
#include <string.h>
struct employee
{
    int empno;
    char empname[50];
    char departmentname[50];
    int salary;
};
struct employee emp[20];
void set(int empno)
{
    printf("Enter the employee name  :  \n");
    scanf("%s",&emp[empno-1].empname);
    printf("Enter the employee department name  :  \n");
    scanf("%s",&emp[empno-1].departmentname);
    printf("Enter the employee salary  :  \n");
    scanf("%d",&emp[empno-1].salary);
}
void print()
{
    int i,empno;
    for(i=0;i<20;i++)
    {
        if(emp[i].salary!=0)
        {
            empno=i;
            printf("Employee Number   :   %d\n",emp[empno].empno);
            printf("Employee Name     :   %s\n",emp[empno].empname);
            printf("Employee Dept     :   %s\n",emp[empno].departmentname);
            printf("Employee Salary   :   %d\n",emp[empno].salary);
        }
    }
}
int main()
{
    int i,ch,eno;

    for(i=0;i<20;i++)
    {
        emp[i].empno=i+1;
        strcpy(emp[i].empname,"");
        strcpy(emp[i].departmentname," ");
        emp[i].salary=0;
    }
    for(;;)
    {
        printf("\n---------------------------------------\n");
        printf("Enter 1 to add information\n");
        printf("Enter 2 to print information\n");
        printf("Enter 0 to quit\n");
        printf("\n---------------------------------------\n");
        scanf("%d",&ch);
        printf("---------------------------------------\n");
        if(ch==0)
            break;
        else if(ch==1)
        {
            printf("Enter the employee's number  :  \n");
            scanf("%d",&eno);
            if(eno>=1&&eno<=20)
                set(eno);
            else
                printf("Choose properly\n");
        }
        else if(ch==2)
            print();
        else
            printf("Choose properly\n");
    }
    return 0;
}
