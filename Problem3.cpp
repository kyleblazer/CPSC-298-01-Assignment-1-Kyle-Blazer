#include <iostream>

using namespace std;

int main()
{
  double employeePay = 16.00;
  double timeAndAHalf = 24.00;
  double hoursWorked;
  double medicalInsuranceAmount = 10.0;
  double netIncome;
  double grossIncome;
  double SSTaxAmount;
  double federalIncomeTaxAmount;
  double stateIncomeTaxAmount;
  cout << "Enter the number of hours worked this week" << endl;
  cin >> hoursWorked;
  if (hoursWorked<=40){
    grossIncome = hoursWorked*employeePay;
    SSTaxAmount = .06* grossIncome;
    federalIncomeTaxAmount = .14*grossIncome;
    stateIncomeTaxAmount = .05*grossIncome;
    netIncome = grossIncome-SSTaxAmount-federalIncomeTaxAmount-stateIncomeTaxAmount-medicalInsuranceAmount;
    cout << "Your total take home pay for the week is $" << netIncome << endl;
    cout << "Your witholdings are as follows: " << endl;
    cout << "Social Security Tax witholdings: $" << SSTaxAmount << endl;
    cout << "Federal Income Tax witholdings: $" << federalIncomeTaxAmount << endl;
    cout << "State Income Tax witholdings: $" << stateIncomeTaxAmount << endl;
    cout << "Medical Insurance witholdings: $" << medicalInsuranceAmount << endl;
  }
  else if (hoursWorked > 40){
    grossIncome = (40*employeePay)+ ((hoursWorked-40)*timeAndAHalf);
    SSTaxAmount = .06* grossIncome;
    federalIncomeTaxAmount = .14*grossIncome;
    stateIncomeTaxAmount = .05*grossIncome;
    netIncome = grossIncome-SSTaxAmount-federalIncomeTaxAmount-stateIncomeTaxAmount-medicalInsuranceAmount;
    cout << "Your total take home pay for the week is $" << netIncome << endl;
    cout << "Your witholdings are as follows: " << endl;
    cout << "Social Security Tax witholdings: $" << SSTaxAmount << endl;
    cout << "Federal Income Tax witholdings: $" << federalIncomeTaxAmount << endl;
    cout << "State Income Tax witholdings: $" << stateIncomeTaxAmount << endl;
    cout << "Medical Insurance witholdings: $" << medicalInsuranceAmount << endl;
  }


    return 0;
}
