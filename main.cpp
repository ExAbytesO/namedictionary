#include "nameDictionary.h"	

int main()
{
  std::string inputparam; //Variable will store user input
  welcomeScreen();
  populateDictionary();
  do
  {std::cout<<"\n"<<"Press a key to continue...\n\n\n";}
  while(std::cin.get() != '\n');
  instructions();
  /*2*/
  /*1*/
  while(true)
{
	std::getline(std::cin,inputparam);
	if(inputparam==":q")
	{return 0;}
	else if(inputparam==":man")
	{std::cout<<"\n";
	instructions();}
	else if(inputparam==":sname")
	{ 
		std::string input;
		while(input != ":menu")
		{
			std::cout<<"\nEnter :menu to go to main menu\n";
			std::cout<<"\nEnter name:\n";
			std::getline(std::cin,input);
			std::cout<<searchDictionary(input)<<"\n\n";
		}
	  instructions();
	}
	else if(inputparam==":ename")
	{std::cout<<manipulateDictionary();}
 	else
	{
 	  std::cout<<"Error\n";
   	  return 0;
	}
}
  return 0;
}
  
/*2
//TODO Find bug in code below
  //Breaks reading Segmentation fault (core dumped)
  /*while(true)
  {
  std::getline(std::cin,inputparam);
  if(inputparam==":q")
  break;
  else
  {
  manipulateDictionary(inputparam);
  std::cout<<"\n";
  }
  }*/

/*1
while(searchparam!=":q"){
  std::cout<<"Enter a name\n";
  
  
  if(inputparam==":edit")
  {
    
  }
  std::cout<<"\n"<<searchDictionary(inputparam)<<"\n\n\n";}
*/
