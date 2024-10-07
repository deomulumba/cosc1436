// lab2 :a C++ program to calculate monthly interest rates on a loan
//project name : loan Notepad
// fall 2024 COSC 1436
//// deo mulumba
#include <iostream>

#include <iomanip> // for setting precision
using namespace std;


//function to get a valid loan amount from the user
double getvalidloan() {
	double loan;
	while (true) {
		cout << "Please Enter the loan amount($1 - $1000) :";
			cin >> loan;
		if (loan >= 1 && loan <= 1000) {
			return loan;
		}
		cout << "That is an invalid value. please entre a value between $1 and $1000." << endl;

	}

}

// function to get a valid interest rate from the user
double getvalidinterestrate() {
	double rate;
	while (true) {
		cout << "please enter the interest rate percentage  (1.0% - 100.0%):";
		cin >> rate;
		if (rate >= 1.0 && rate <= 100.0) {
			return rate / 100;  //  convert percentage to decimal
		}
		cout << "That is an invalid value. please enter a percentage between 1.0% and 100.0%." << endl;


	}
}

// Function to get a valid monthly payment from the user
double getvalidpayment(double loanBalance) {
	double payment;
	while (true) {
		cout << "How much do you want to pay each month? (0 - " << fixed << setprecision(2) << loanBalance << "):";
		cin >> payment;
		if (payment >= 0 && payment <= loanBalance) {
			return payment;
 

		}
		cout << "That is an invalid value. please enter a value between $0 and $" << loanBalance << "." << endl;

	}    


}
// Function to display the loan repayment table
void displayloanTable(double loan, double interestRate, double monthlyPayment) {
	cout << endl;
	cout << "Month  Balance   Payment   Interest   New Balance" << endl;
	cout << "--------------------------------------------------------------" << endl;

	double totalInterest = 0;
	double totalPayments = 0;
	double interest{ 0 };
	double newBalance{ loan };

	for (int month = 1; month <= 12; ++month) {

		if (month > 1) {
			if (loan < monthlyPayment) {
				monthlyPayment = loan;
			}	
			interest = (loan > 0) ? (loan - monthlyPayment) * interestRate : 0;  // no interest if loan is 0
			newBalance = loan + interest - monthlyPayment;
			totalInterest += interest;
			totalPayments += monthlyPayment;

			
		}
		// if the loan is paid off early, reaet values 
		if (loan <= 0) {
			monthlyPayment = 0;
			interest = 0;
			newBalance = 0;
		}		
		

		// Display current month, loan, payment, interest, and new balance
		cout << setw(4) << month << setw(14) << fixed << setprecision(2) << loan
			<< setw(14) << monthlyPayment << setw(14) << interest
			<< setw(16) << newBalance << endl;




		// update the loan balance  for the next month
		loan = newBalance;
	}
	// Display total payments and interest
	cout << "--------------------------------------------------------------" << endl;
	cout << "total                " << setw(10) << fixed << setprecision(2) << totalPayments
		<< setw(14) << totalInterest << endl;
}
	
// Maint function to run the loan calculator 
int main() {
	 





	// Get valid inputs from the user 
	double loan = getvalidloan();
	double interestRate = getvalidinterestrate();
	double monthlypayment = getvalidpayment(loan);

	// Display the loan repayment table
	displayloanTable(loan, interestRate, monthlypayment);

	return 0;

}
