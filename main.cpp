/*
 By: Kevin Uriel Azuara Fonseca
 Assigned by: Dr. T
 https://docs.google.com/spreadsheets/d/14Ukq2Swo_rxE30FsEv0hHYofMfZogEN_/edit#gid=839394853
 12/01/2019
*/
#include "functions.h"

int main() {

  string continueAgain = "";

  do {
    
    showMenu();
    cout << "/nPlease enter an option" << endl;
    continueAgain = validateString(continueAgain);
    handleOption(continueAgain);

  } while (continueAgain != "e" && continueAgain != "E");
  return 0;
}