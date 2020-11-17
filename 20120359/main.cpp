#include <iostream>
#include "function.h"
using namespace std;

int main()
{
	int check = 0;
	do
	{
		check = RunMainMenu(SelectCommand(Mainmenu()));
	} while (check != 3);
	return 0;
}