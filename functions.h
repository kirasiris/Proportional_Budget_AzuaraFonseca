/*
*
* A header file  to hold the main definitions of the program.
* Student: Kevin Uriel Azuara Fonseca
* Teacher: Dr_T 12-02-2019
*
*/

#ifndef FUNCTIONS_H
#define FUNCTIONS_H

// put libraries here
#include <iostream>
#include <iomanip>
#include <vector>
#include <fstream>
#include <sstream>
#include "Input_Validation_Extended.h"

using namespace std;

// put prototypes here
void showMenu();
void handleOption(string);

/**************************
*
* Classes
*
**************************/
class Income {
  private:
    double paycheckJobOne;
    double paycheckOneJobOne;
    double paycheckTwoJobTwo;
    double TIPS;
    double refundCheck;
    double amazonCom;
  public:
    Income(double pjo, double pojo, double ptjt, double tps, double rc, double amzn): paycheckJobOne(pjo), paycheckOneJobOne(pojo), paycheckTwoJobTwo(ptjt), TIPS(tps), refundCheck(rc), amazonCom(amzn) {};
    // Get total income
    void getTotalIncome() {
      double totalIncome = (paycheckJobOne + paycheckOneJobOne + paycheckTwoJobTwo + TIPS + refundCheck + amazonCom);
      cout << "------------ Total Income ------------" << endl;
      cout << totalIncome << endl;
      cout << "--------------------------------------" << endl;
    }
};

class Expenses {
  private:
    double percentage;
    double mortgage;
    double electric;
    double gas;
    double water;
    double savingsPayYourself;
    double entertainment;
    double clothes;
    double shoes;
    double vendingMachine;
    double creditCardPmsts;
    double carPMT;
    double carInsurance;
    double carMaintenance;
    double carGas;
    double schoolBooks;
    double foodGroceries;
    double foodDiningOut;
    double cleaningSupplies;
    double personalCare;
    double charity;
    double dayCare;
    double petCare;
    double cellPhone;
    double internet;
    double cableSat;
    double streamingServices;
    double amazonCom;
  public:
    Expenses(double mort, double elect, double gs, double wtr, double spy, double enter, double cloth, double shoe, double vm, double ccp, double cpmt, double ci, double cm, double cg, double sb, double fg, double fdo, double cs, double pc, double chari, double dc, double petc, double cp, double inter, double cables, double ss, double amzn): mortgage(mort), electric(elect), gas(gs), water(wtr), savingsPayYourself(spy), entertainment(enter), clothes(cloth), shoes(shoe), vendingMachine(vm), creditCardPmsts(ccp), carPMT(cpmt), carInsurance(ci), carMaintenance(cm), carGas(cg), schoolBooks(sb), foodGroceries(fg), foodDiningOut(fdo), cleaningSupplies(cs), personalCare(pc), charity(chari), dayCare(dc), petCare(petc), cellPhone(cp), internet(inter), cableSat(cables), streamingServices(ss), amazonCom(amzn) {};
    // Set percentage each person brings
    void setPercentage(double per) { percentage = per; }
    double getPercentage() const { return percentage / 100; }
    // Calculate Total Expenses
    double getTotalExpenses() {
      double total = (mortgage + electric + gas + water + savingsPayYourself + entertainment + clothes +
      shoes + vendingMachine + creditCardPmsts + carPMT + carInsurance + carMaintenance +
      carGas + schoolBooks + foodGroceries + foodDiningOut + cleaningSupplies + personalCare +
      charity + dayCare + petCare + cellPhone + internet + cableSat + streamingServices + amazonCom);
      return total;
    }
    // Calculate Total Expenses by Person
    string calculatePersonExpenses() {
      double result = mortgage * getPercentage();
      double result2 = electric * getPercentage();
      double result3 = gas * getPercentage();
      double result4 = water * getPercentage();
      double result5 = savingsPayYourself * getPercentage();
      double result6 = entertainment * getPercentage();
      double result7 = clothes * getPercentage();
      double result8 = shoes * getPercentage();
      double result9 = vendingMachine * getPercentage();
      double result10 = creditCardPmsts * getPercentage();
      double result11 = carPMT * getPercentage();
      double result12 = carInsurance * getPercentage();
      double result13 = carMaintenance * getPercentage();
      double result14 = carGas * getPercentage();
      double result15 = schoolBooks * getPercentage();
      double result16 = foodGroceries * getPercentage();
      double result17 = foodDiningOut * getPercentage();
      double result18 = cleaningSupplies * getPercentage();
      double result19 = personalCare * getPercentage();
      double result20 = charity * getPercentage();
      double result21 = dayCare * getPercentage();
      double result22 = petCare * getPercentage();
      double result23 = cellPhone * getPercentage();
      double result24 = internet * getPercentage();
      double result25 = cableSat * getPercentage();
      double result26 = streamingServices * getPercentage();
      double result27 = amazonCom * getPercentage();
      
      ostringstream fmtStr; // ostringstream to make it possible to return fixed and set precision as part of the string
      fmtStr << "Mortgage:                      $" << fixed << setprecision(2) << result << endl;
      fmtStr << "Electricity:                   $" << fixed << setprecision(2) << result2 << endl;
      fmtStr << "Gas(Home):                     $" << fixed << setprecision(2) << result3 << endl;
      fmtStr << "Water:                         $" << fixed << setprecision(2) << result4 << endl;
      fmtStr << "Savings(Pay Yourself):         $" << fixed << setprecision(2) << result5 << endl;
      fmtStr << "Entertainment:                 $" << fixed << setprecision(2) << result6 << endl;
      fmtStr << "Clothes:                       $" << fixed << setprecision(2) << result7 << endl;
      fmtStr << "Shoes:                         $" << fixed << setprecision(2) << result8 << endl;
      fmtStr << "Vending Machine:               $" << fixed << setprecision(2) << result9 << endl;
      fmtStr << "Credit Card Pmts:              $" << fixed << setprecision(2) << result10 << endl;
      fmtStr << "Car PMT:                       $" << fixed << setprecision(2) << result11 << endl;
      fmtStr << "Car Insurance:                 $" << fixed << setprecision(2) << result12 << endl;
      fmtStr << "Car Maintenance:               $" << fixed << setprecision(2) << result13 << endl;
      fmtStr << "Car Gas:                       $" << fixed << setprecision(2) << result14 << endl;
      fmtStr << "School books:                  $" << fixed << setprecision(2) << result15 << endl;
      fmtStr << "Food groceries:                $" << fixed << setprecision(2) << result16 << endl;
      fmtStr << "Food Dining Out:               $" << fixed << setprecision(2) << result17 << endl;
      fmtStr << "Cleaning Supplies:             $" << fixed << setprecision(2) << result18 << endl;
      fmtStr << "Personal Care:                 $" << fixed << setprecision(2) << result19 << endl;
      fmtStr << "Charity:                       $" << fixed << setprecision(2) << result20 << endl;
      fmtStr << "Day Care:                      $" << fixed << setprecision(2) << result21 << endl;
      fmtStr << "Pet Care:                      $" << fixed << setprecision(2) << result22 << endl;
      fmtStr << "Cell Phone:                    $" << fixed << setprecision(2) << result23 << endl;
      fmtStr << "Internet:                      $" << fixed << setprecision(2) << result24 << endl;
      fmtStr << "Cable/Sat:                     $" << fixed << setprecision(2) << result25 << endl;
      fmtStr << "Streaming Services:            $" << fixed << setprecision(2) << result26 << endl;
      fmtStr << "Amazon.com:                    $" << fixed << setprecision(2) << result27 << endl;
      fmtStr << "Total:                         $" << fixed << setprecision(2) << getTotalExpenses() * getPercentage() << endl;
      string line = fmtStr.str();

      return line;
    }
};

/**************************
*
* Show Welcome Message
*
**************************/
void showMenu(){
  string color = "\x1b[" + to_string(32) + ";1m";
  string reset = "\x1b[0m";
  cout << color << "\nHello, welcome to our screen!" << endl;
  cout << "|----------------------------------------------|" << endl;
  cout << "| A: create budget report                      |" << endl;
  cout << "| X: clear screen                              |" << endl;
  cout << "| E: exit program                              |" << endl;
  cout << "|----------------------------------------------|" << reset << endl;
}

void handleOption(string userOption){

  if(userOption == "A" || userOption == "a"){
    // Color
    string color = "\x1b[" + to_string(32) + ";1m";
    string reset = "\x1b[0m";
    // Income variables, etc
    double income1;
    double income2;
    double income3;
    double income4;
    double income5;
    double income6;
    // Expenses 26 variables, etc
    double expenses1, expenses2, expenses3, expenses4, expenses5, expenses6, expenses7, expenses8, expenses9, expenses10, expenses11, expenses12, expenses13, expenses14, expenses15, expenses16, expenses17, expenses18, expenses19, expenses20, expenses21, expenses22, expenses23, expenses24, expenses25, expenses26, expenses27;
    
    // The application should allow for input of the overall budget income and expense categories.
    /*
    * INCOME
    */
    cout  << color << "Please enter the income as follow: " << reset << endl;
    cout  << "Paycheck Job 1 [SPACE] Paycheck 1 Job 1 [SPACE] Paycheck 2 Job 2 [SPACE] Tips [SPACE] Refund Check [SPACE] Amazon.com" << endl;
    cin >> income1 >> income2 >> income3 >> income4 >> income5 >> income6;
    Income incom(income1, income2, income3, income4, income5, income6);
    /*
    * EXPENSES
    */
    cout  << color << "Please enter the cost of each of your expenses as follow: " << reset << endl;
    cout  << "Mortgage [SPACE] Electricity [SPACE] Gas [SPACE] Water [SPACE] Savings [SPACE] \nEntertainment [SPACE] Clothes [SPACE] Shoes [SPACE] Vending Machine [SPACE]  \nCredit Card PMTS [SPACE] Car PMT [SPACE] Car Insurance [SPACE] Car Maintenance [SPACE] Car Gas [SPACE] \nSchool Books [SPACE] Food Groceries [SPACE] Food Dining Out [SPACE] Cleaning Supplies [SPACE] Personal Care [SPACE] \nCharity [SPACE] Day Care [SPACE] Pet Care [SPACE] Cell Phone [SPACE] Internet [SPACE] Cable/Sat [SPACE] Streaming Services [SPACE] Amazon.com" << endl;
    cin >> expenses1 >> expenses2 >> expenses3 >> expenses4 >> expenses5 >> expenses6 >> expenses7 >> expenses8 >> expenses9 >> expenses10 >> expenses11 >> expenses12 >> expenses13 >> expenses14 >> expenses15 >> expenses16 >> expenses17 >> expenses18 >> expenses19 >> expenses20 >> expenses21 >> expenses22 >> expenses23 >> expenses24 >> expenses25 >> expenses26 >> expenses27;
    
    Expenses P1(expenses1, expenses2, expenses3, expenses4, expenses5, expenses6, expenses7, expenses8, expenses9, expenses10, expenses11, expenses12, expenses13, expenses14, expenses15, expenses16, expenses17, expenses18, expenses19,expenses20, expenses21, expenses22, expenses23, expenses24, expenses25, expenses26, expenses27);
    
    Expenses P2(expenses1, expenses2, expenses3, expenses4, expenses5, expenses6, expenses7, expenses8, expenses9, expenses10, expenses11, expenses12, expenses13, expenses14, expenses15, expenses16, expenses17, expenses18, expenses19,expenses20, expenses21, expenses22, expenses23, expenses24, expenses25, expenses26, expenses27);
    
    // Allow for input and update of the proportional percentage of each person P1 and P2.
    cout << color << "Percentage P1 [SPACE] Percentage P2 [ENTER]: " << reset << endl;
    double P1value;
    double P2value;
    cin >> P1value >> P2value;
    P1.setPercentage(P1value);
    P2.setPercentage(P2value);
    // Show the dynamic summations and values present on the spreadsheet given user input of the income and expenses.
    ofstream myfile;
    myfile.open ("output.txt");
    myfile << "--------------------PERSON 1--------------------\n"
    << P1.calculatePersonExpenses()
    << "--------------------PERSON 2--------------------\n"
    << P2.calculatePersonExpenses() << endl;
    myfile.close();
    
    cout << "You can now check your report on the output file" << endl;
    
    } else if(userOption == "X" || userOption == "x"){
      // Linux Ubuntu
      cout << "\033[2J\033[1;1H";
    }
}

#endif