#include<stdio.h>
struct emp
{
    int empId;
    char empName[20];
    int bSal;
    int dA;
    int salary;
};

int maxS(struct emp e1,struct emp e2, struct emp e3){
    if(e1.salary>e2.salary && e1.salary>e3.salary){
        return e1.empId;
    }
    else if(e2.salary>e3.salary&& e2.salary>e1.salary){
        return e2.empId;
    }
    else{
        return e3.empId;
    }
}

int main(){
    struct emp e1,e2,e3;
        printf("Employee 1 details:\n")
        printf("Enter the employee 1 name: ");
        scanf("%d",&e1.empId);
        printf("\nEnter the name of employee 1: ");
        scanf("%d",&e1.empName);
        printf("\nEnter the basic salary of employee 1: ");
        scanf("%d",&e1.bSal);
        printf("\nEnter the allowance %: ");
        scanf("%d",&e1.dA);

        printf("Employee 2 details:\n")
        printf("Enter the employee 2 name: ");
        scanf("%d",&e2.empId);
        printf("\nEnter the name of employee 2: ");
        scanf("%d",&e2.empName);
        printf("\nEnter the basic salary of employee 2: ");
        scanf("%d",&e2.bSal);
        printf("\nEnter the allowance %: ");
        scanf("%d",&e2.dA);

        printf("Employee 3 details:\n")
        printf("Enter the employee 3 name: ");
        scanf("%d",&e3.empId);
        printf("\nEnter the name of employee 3: ");
        scanf("%d",&e3.empName);
        printf("\nEnter the basic salary of employee 3: ");
        scanf("%d",&e3.bSal);
        printf("\nEnter the allowance %: ");
        scanf("%d",&e3.dA);

        e1.salary = e1.bSal+(e1.dA/100*e1.bSal);
        e2.salary = e2.bSal+(e2.dA/100*e2.bSal);
        e3.salary = e3.bSal+(e3.dA/100*e3.bSal);

        r = maxS(emp);
        switch (r)
        {
        case 1: 
            printf("Emp ID: %d\n",e1.empId);
            printf("Emp NAme: %s", e1.empName);
            printf("Basic Salary: %d",e1.bSal);
            break;

        case 2: 
            printf("Emp ID: %d\n",e1.empId);
            printf("Emp NAme: %s", e1.empName);
            printf("Basic Salary: %d",e1.bSal);
            break;

        default:
            printf("Emp ID: %d\n",e1.empId);
            printf("Emp NAme: %s", e1.empName);
            printf("Basic Salary: %d",e1.bSal);
            break;
        }
   

}
