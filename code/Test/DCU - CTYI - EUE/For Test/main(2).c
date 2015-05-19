#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct employee
{
	char Surname[10];
	char FirstName[10];
	int Income;
	int Tax;
} employee_type;


void read_info_employee(employee_type* employee)
{
	printf("\nSurname: ");
	scanf("%s",(*employee).Surname);
	printf("First Name: ");
	scanf("%s",(*employee).FirstName);

	printf("Yearly income is: ");
	scanf("%f",&(*employee).Income);

}

void compute_tax_employee(employee_type* employee)
{
	if((*employee).Income<32000)
		(*employee).Tax=0.2*(*employee).Income;
	else
		(*employee).Tax=0.2*32000+0.42*((*employee).Income-32000);
}


void print_info_employee(employee_type employee)
{
	printf("\n Personal Details:");
	printf("\n     Surname: %s", employee.Surname);
	printf("\n     First Name: %s", employee.FirstName);
	printf("\nYearly tax to be paid: %d ", employee.Tax);
	printf("\n    ");
}

int main()
{
	int no_empl;
	employee_type employee[100];

	printf("\nEnter the number of employees the income tax to be computed for:");
	scanf("%d", &no_empl);

	for(int i=0; i<no_empl; i++)
	{
		printf("\n\nPlease provide details for the employee no  %d  : ", i+1);
		read_info_employee(&employee[i]);
		compute_tax_employee(&employee[i]);
	}

	printf("\nHere is the tax to be paid by each employee:");
    int i;
	for (i=0; i<no_empl; i++);
	{
		print_info_employee(employee[i]);
	}

	(EXIT_SUCCESS);
}
