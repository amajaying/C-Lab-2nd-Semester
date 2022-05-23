// Write an employee structure with the Emp Id, Emp Name, basic salary, interest.Take 3 employess imformation. pass this information to a function and return the empid whose total salary is maximum. In the main function, you need to display that particular employees details.
#include<stdio.h>
struct emp
{
    int empId;
    char empName[20];
    int bSal;
    int dA;
    int salary;
}e1,e2,e3;

int maxx(struct emp a, struct emp b, struct emp c){
    if(a.salary>b.salary && a.salary>c.salary){
        return a.empId;
    }
    else if(b.salary>c.salary&& b.salary>a.salary){
        return b.empId;
    }
    else{
        return c.empId;
    }
}

int main(){
        printf("Employee 1 details:\n");
        printf("Enter the employee 1 id: ");
        scanf("%d",&e1.empId);
        printf("\nEnter the name of employee 1: ");
        scanf("%s",e1.empName);
        printf("\nEnter the basic salary of employee 1: ");
        scanf("%d",&e1.bSal);
        printf("\nEnter the allowance percent : ");
        scanf("%d",&e1.dA);

        printf("Employee 2 details:\n");
        printf("Enter the employee 2 id: ");
        scanf("%d",&e2.empId);
        printf("\nEnter the name of employee 2: ");
        scanf("%s",e2.empName);
        printf("\nEnter the basic salary of employee 2: ");
        scanf("%d",&e2.bSal);
        printf("\nEnter the allowance percent : ");
        scanf("%d",&e2.dA);

        printf("Employee 3 details:\n");
        printf("Enter the employee 3 id: ");
        scanf("%d",&e3.empId);
        printf("\nEnter the name of employee 3: ");
        scanf("%s",e3.empName);
        printf("\nEnter the basic salary of employee 3: ");
        scanf("%d",&e3.bSal);
        printf("\nEnter the allowance percent : ");
        scanf("%d",&e3.dA);

        e1.salary = e1.bSal+(e1.dA/100*e1.bSal);
        e2.salary = e2.bSal+(e2.dA/100*e2.bSal);
        e3.salary = e3.bSal+(e3.dA/100*e3.bSal);

        int r = maxx(e1,e2,e3);
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
