#include <iostream>
#include <string>
#include <cstdlib>
using namespace ::std;
#include "Inmate.h"
#include "Jail.h"

void ShowPrisioner(Inmate badPerson)
{
	badPerson.PrintDetails();
}

int main()
{
	char userOption = '\0';
	Jail *jail = new Jail;
	cout << "## Super Jail Manager V0.1 ################################" << endl << endl;
	
	while (userOption != 'q')
	{
		cout << "\t[I]nput Prisoner" << endl << "\t[S]ecure Prisoner" << endl << "\t[P]rint" << endl << "\t[Q]uit" << endl << "\tOption: ";
		cin >> userOption;
		userOption = tolower(userOption);
		switch (userOption)
		{
		case 'i':
			jail->AddInmate();
			break;
		case 's':
			jail->AddSecureInmate();
			break;
		case 'p':
			jail->PrintList();
			break;
		default:
			break;
		}
		cout << endl;
	}

	delete jail;
	return 0;
}
