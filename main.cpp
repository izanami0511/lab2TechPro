#include "line.h"
#include "time.h"
#include <iostream>
#include <Windows.h>

using namespace std;

int main()
{

	line a;
	time t;
	int User_value = 0;
	char menu_choice;
	bool exit = true;

	do
	{
		system("cls");
		cout << " What do you want to do?"<< endl;
		cout << " 1.Create line." << endl;
		cout << " 2.Add element to the end." << endl;
		cout << " 3.Add first element." << endl;
		cout << " 4.Delete ending element" << endl;
		cout << " 5.Delete first element." << endl;
		cout << " 6.Create time." << endl;
		cout << " 7.Add value." << endl;
		cout << " 8.Subtract value." << endl;
		cout << " 9.Multiply value." << endl;
		cout << " 0.Divide value." << endl;
		cout << " e.Exit." << endl;
		cout << ">> ";
		cin >> menu_choice;

		switch (menu_choice) {
		case '1': 
				system("cls");
				a.create(5);
				a.show();
				system("Pause");
			break; 
		case '2':
			system("cls");
			a++;
			a.show();
			system("Pause");
			break;
		case '3':
			system("cls");
			++a;
			a.show();
			system("Pause");
			break;
		case '4':
			system("cls");
			a--;
			a.show();
			system("Pause");
			break;
		case '5':
			system("cls");
			--a;
			a.show();
			system("Pause");
			break;
		case '6':
			system("cls");
			t.create();
			t.show();
			system("Pause");
			break;
		case '7':
			system("cls");
			cout << "Enter value:";
			cin >> User_value;
			t + User_value;
			t.show();
			system("Pause");
			break;
		case '8':
			system("cls");
			cout << "Enter value:";
			cin >> User_value;
			t - User_value;
			t.show();
			system("Pause");
			break;
		case '9':
			system("cls");
			cout << "Enter value:";
			cin >> User_value;
			t * User_value;
			t.show();
			system("Pause");
			break;
		case '0':
			system("cls");
			cout << "Enter value:";
			cin >> User_value;
			t / User_value;
			t.show();
			system("Pause");
			break;
		case 'e':
			exit = false;;
			break;
		default:
			break;
		}
	} while (exit);

	return 0;
}
