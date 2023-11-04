#include <stdio.h>

float calculatePayroll(float hoursWorked){
		float grossPay = hoursWorked * 2;
		float tax = grossPay * 10/100;
		float finalPay = grossPay - tax;

		return finalPay;
}

int main(){
		int len;

		printf("Employee Payroll Calculator:\nHourly Rate --> $2\nTax Rate --> 10\%\n\n");

		printf("How many employees: ");
		scanf(" %d",&len);

		float payroll[len],hoursWorked;

		for (int i=0;i<len;i++){
				printf("How many Hours did Employee %d work: ",i+1);
				scanf(" %f",&hoursWorked);
				payroll[i] = calculatePayroll(hoursWorked);
		}

		printf("\nGiven Data:\n");
		for (int i=0;i<len;i++){
				printf("Employee %d --> $%.2f\n",i+1,payroll[i]);
		}


}
