
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;


int main() {
ifstream inFile;
ofstream outFile;

inFile.open("inData.txt");
outFile.open("outData.txt");

string Fname, Lname, department;

int count{};

//Variables
double taxedPay, gross{}, bonus{}, tax{}, payCheck{};
double distance, travelTime, speed;
double cost{}, salesAmount{};

//Full Name and Department
inFile >> Fname >> Lname >> department;
outFile << "Name: " << Fname << " " << Lname << ", Department: " << department << endl;

//Monthly Gross, Bonus and Tax plus the Paycheck
inFile >> gross >> bonus >> tax;
outFile << "Monthly Gross Salary:" << setprecision(2) << fixed<< gross << ", Monthly Bonus: " << bonus << "%, Taxes:" << tax << "%" << endl;
outFile << "Paycheck: $" << setprecision(2) << fixed << payCheck << endl;

//Monthly Bonus is 5% and Taxes is 30%; Salary for Paycheck as well; Paycheck = $4116.00
payCheck = gross * (1 + .05) * (1 - .30);

//Travelling
inFile >> distance >> travelTime;
outFile << "Distance Travelled: " << setprecision(2) << fixed << distance << ", Travel Time: " << travelTime << "hours" << endl;

//Speed of Travelling
speed = distance / travelTime;
outFile << "Average Speed: " << setprecision(2) << fixed << speed << ", miles per hour" << endl;

//Number of Coffee sold
inFile >> count >> cost;
outFile << "Number of Coffee Cups Sold: " << count << ", Cost: $" << setprecision(2) << fixed << cost << " per cup" << endl;
outFile << "Sales Amount: = $" << setprecision(2) << fixed << salesAmount << endl;

salesAmount = count * cost;

//Output Results
cout << "Name : " << Fname + ' ' + Lname << ", Department : " << department << endl;
cout << "Monthly Gross Salary : $" << gross << ", Monthly Bonus : " << bonus << "%, Taxes : " <<
         tax << "%" << endl;
cout << "Paycheck : $" << setprecision(2) << fixed << payCheck << endl;
cout << "\nDistance Travelled: " << setprecision(2) << fixed << ", Travel Time: " << travelTime << "hours" << endl;
cout << "Average Speed : " << speed << " mph" << endl;
cout << "\nNumber of Coffee Cups Sold: " << count << ", Cost: $" << setprecision(2) << fixed << cost << " per cup" << endl;
cout << "Sales Amount : $" << setprecision(2) << fixed << salesAmount << endl;

inFile.close();
outFile.close();

cin.get();


return 0;

}