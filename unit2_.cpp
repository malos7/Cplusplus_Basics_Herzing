#include <iostream>
using namespace std;

double management(float weeksWorked) {
	double pay;
	pay = weeksWorked * 735;
	return pay;
}

double hourly(float hours) {
	double pay; 
	float overtime;
	if (hours > 40) {
		overtime = hours - 40;
		pay = (40 * 7.35) + (overtime * (1.5 * 7.35));
	}
	else
	{
		pay = hours * 7.35;
	}
	
	return pay;
}

double commission(double comm) {
	double pay; 
	pay = (comm * 0.057) + 250;
	return pay;
}

double pieceworker(int numItems) {
	double pay;
	pay = 0.35 * numItems;
	return pay;
}

int main() {
	cout << "Enter number according to pay code to continue.\n"
		<< "Manager - 1\n"
		<< "Hourly Worker -2\n"
		<< "Commission Worker - 3\n"
		<< "Pieceworker - 4\n"
		<< "End - 5\n";

		int payCode;
		double payCheck;

		while (cin >> payCode) {

			switch (payCode) {
				case 1: //manager
					cout << "All Management staff recieve $735 weekly.\n"
						<< "Enter the number of weeks staff member has worked so far.\n";
					int weeksWorked;
					cin >> weeksWorked;
					
					payCheck = management(weeksWorked);

					cout << "This staff recieves: $" << payCheck << "\n";
					break;
				case 2: //hourly
					cout << "All hourly staff earns 7.35 plus 1.5 over time above 40 hours.\n"
						<< "Enter the number of hours employee worked.\n";
					int hours;
					cin >> hours;
					
					payCheck = hourly(hours);

					cout << "This staff recieves: $" << payCheck << "\n";
					break;
				case 3: //commission
					cout << "All Commission employees earn $250 dollars plus 5.7% sales.\n"
						<< "Enter the amount of sales this employee achieved.\n";
					int comm;
					cin >> comm;
					
					payCheck = commission(comm);

					cout << "This staff recieves: $" << payCheck << "\n";
					break;
				case 4: // pieceworker
					cout << "All Pieceworkers recieve $0.35 per item.\n"
						<< "Enter the number of items employee made.\n";
					int numItems;
					cin >> numItems;
					
					payCheck = pieceworker(numItems);

					cout << "This staff recieves: $" << payCheck << "\n";
					break;
				case 5: // terminate
					return -1;
				default: // any choice but 1-5
					cout << "This isn't an option."
						<< "Enter number according to pay code to continue.\n"
						<< "Manager - 1\n"
						<< "Hourly Worker -2\n"
						<< "Commission Worker - 3\n"
						<< "Pieceworker - 4\n"
						<< "End - 5\n";

			}

		}

	exit(0);
}

