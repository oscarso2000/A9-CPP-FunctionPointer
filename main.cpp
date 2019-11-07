//
// main.cpp
//
// Assignment #8
//

#include <iostream>

#include "MenuItem.h"
#include "Menu.h"
#include "MenuCommand.h"
#include "bankh.h"
using namespace std;


//
// Our main() is pretty simple for this assignment.   Just set up the menus and call
// select() on the top level menu

int main(int argc, char *argv[])
{
  Bank bank;
  // Setup the submenu first
  MenuItem *accountMenuItems[] = {
      new MenuCommand('1', "Balance Inquiry", []() -> bool {cout << "Balance Inquiry is not implemented yet!!!"<< endl; return true; }),
      new MenuCommand('2', "Deposit", []() -> bool {cout << "Deposit is not implemented yet!!!"<< endl; return true; }),
      new MenuCommand('3', "Withdrawal", []() -> bool {cout << "Withdrawal is not implemented yet!!!"<< endl; return true; }),
      new MenuCommand('b', "Back", []() -> bool { return false; })};

  Menu accountMenu(accountMenuItems, 4, '3', "Account");

  // Then set up the main menu
  //f = [&bank](){bank.listAccounts(); return true;};
  MenuItem *mainMenuItems[] = {
      new MenuCommand('1', "List Accounts", [&bank]()->bool{bank.listAccounts();return true;}),
      new MenuCommand('2', "New Account", [&bank]() -> bool{bank.newAccount();return true;}),
      &accountMenu,
      new MenuCommand('b', "Quit", []() -> bool { return false; })};

  Menu mainMenu(mainMenuItems, 4, '0', "Main");

  // Kick off the whole process by just calling select() on the top level menu
  bool keepGoing = mainMenu.select();

  // What about deleting our dynamically allocated pointers?
  //
  // This is a tough one.   It's not really the responsibility of the Menu class to delete
  // those pointers because it wasn't the one who allocated them in the first place.   We
  // could have set up multiple local variables for all the MenuCommand instances (as stack
  // variables instead of being dynamically allocated) and then pass the address of those
  // variables to the respective Menu constructors.   Then no "freeing" would be necessary.
  // Keep in mind that only works if the local variables are in a scope that stays active for
  // the duration of the application which is usually only the case in main().   For now we
  // won't worry about freeing the pointers as they need to stay allocated until the
  // application terminates anyway...

  std::cout << "Done" << std::endl;
}
