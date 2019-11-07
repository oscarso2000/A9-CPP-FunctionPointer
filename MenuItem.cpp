//
// MenuItem.cpp
//
// Assignment #8
//

#include <iostream>

#include "MenuItem.h"
MenuItem::MenuItem(char commandChar, std::string title, bool (f)())
{
  mCommandCharacter = commandChar;
  mTitle = title;
  mBool = f;
}

MenuItem::MenuItem(char commandChar, std::string title, function<bool(Bank &bank)> *f)
{
  mCommandCharacter = commandChar;
  mTitle = title;
  mBool = f;
}
