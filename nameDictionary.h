#ifndef NAMEDICTIONARY_H
#define NAMEDICTIONARY_H

#include <iostream>
#include <map>
#include <string>
#include <iomanip>
#include <boost/algorithm/string.hpp> 
//execute sudo apt-get install libboost-all-dev on Ubuntu to install the boost libraries
//bool controller=true;
//Controls main()
//TODO Encapsulate controller as it is not a best practice to have global variables with its priviledges

void populateDictionary();
std::string manipulateDictionary();
std::string searchDictionary(std::string query);//
//Const_iterator
//std::string welcomeScreen();
void welcomeScreen();
void instructions();

#endif

