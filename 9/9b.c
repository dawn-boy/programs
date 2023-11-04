#include <stdio.h>

struct employee{
		char name[30],phoneNumber[10],jobTitle[30];
		float hoursWorked,finalPay;
};

float calculateFinalPay(float hoursWorked){
		float *ptrTax,*ptrHourlyPay,*ptrHoursWorked;
		float tax = (10.0/100),hourlyPay = 2;

		ptrTax = &tax;
		ptrHourlyPay = &hourlyPay;
		ptrHoursWorked = &hoursWorked;

		float grossPay, deductions, finalPay;
		float *ptrFinalPay;

		grossPay = *ptrHoursWorked * *ptrHourlyPay;
		deductions = grossPay * *ptrTax;
		finalPay = grossPay - deductions;
		
		ptrFinalPay = &finalPay;

		return *ptrFinalPay;
}

int main(){
	int len;

	printf("How Many Employees: ");
	scanf(" %d",&len);

	struct employee employees[len];

	for (int i=0; i<len; i++){
			printf("Name of Employee %d: ",i+1);
			scanf(" %s",&employees[i].name);

			printf("JobTitle of Employee %d: ",i+1);
			scanf(" %s",&employees[i].jobTitle);

			printf("Phone Number of Employee %d: ",i+1);
			scanf(" %s",&employees[i].phoneNumber);

			printf("Hours Worked by Employee %d: ",i+1);
			scanf(" %f",&employees[i].hoursWorked);

			employees[i].finalPay = calculateFinalPay(employees[i].hoursWorked);
			printf("\n\n");
	}

	printf("Given Data: \n\n");
	for (int i=0;i<len;i++){
		printf("Employee %d ",i+1);
		printf("\n------------");
		printf("\nName: %s",employees[i].name);
		printf("\nJob Title: %s",employees[i].jobTitle);
		printf("\nPhone Number: %s",employees[i].phoneNumber);
		printf("\nHours Worked: %.2f",employees[i].hoursWorked);
		printf("\n\nFinal Pay: $%.2f",employees[i].finalPay);

		printf("\n\n");
	}


}
