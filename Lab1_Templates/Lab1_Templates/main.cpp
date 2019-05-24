

#include <iostream>
#include "complex_number.h"
#include "List.h"
using namespace std;

int main()
{
	List <complex> myList;
	int real, imag;
	int answer_sub = 0;
	int answer_main;
	int answer_del;
	do
	{

		puts("            MAIN MENU");
		puts("1-Add element");
		puts("2-Delete element");
		puts("3-Get element");
		puts("4-Get size");
		puts("5-Check if empty");
		puts("6-Delete all");
		puts("7-Change element with yours");
		puts("8-Print list");
		puts("0-Exit");
		cin >> answer_main;
		switch (answer_main)
		{
		case 1:
			do
			{

				puts("             Add Sub Menu");
				puts("1-Add at the begining");
				puts("2-Add at the end ");
				puts("3-Insert at position");
				puts("0-Return to Main Menu");
				cin >> answer_sub;
				switch (answer_sub)
				{
				case 1:
				{
					puts("Enter complex number");
					cin >> real >> imag;
					complex a(real, imag);
					myList.push_front(a);
				}
				break;
				case 2:
				{
					puts("Enter complex number");
					cin >> real >> imag;
					complex b(real, imag);
					myList.push_back(b);
				}
				break;
				case 3:
				{
					puts("Enter complex number");
					cin >> real >> imag;
					complex c(real, imag);
					puts("Enter position");
					int pos;
					cin >> pos;
					myList.insert(pos, c);
				}
				}
			} while (answer_sub);
			break;
		case 2:
		{
			do
			{

				puts("            Delete Sub Menu");
				puts("1-Delete at the begining");
				puts("2-Delete at the end ");
				puts("3-Delete certain position");
				puts("0-Return to Main Menu");
				cin >> answer_del;
				switch (answer_del)
				{
				case 1:
					myList.pop_front();
					break;
				case 2:
					myList.pop_back();
					break;
				case 3:
					puts("Enter position");
					int pos;
					cin >> pos;
					myList.remove(pos);
				}
			} while (answer_del);
		}
		break;
		case 3:
		{
			puts("Enter position");
			int pos;
			cin >> pos;
			complex d = myList.at(pos);
			cout << d << endl;
		}
		break;
		case 4:
			cout << "Size of a list:" << myList.get_size() << endl;
			break;
		case 5:
			if (myList.isEmpty())
				puts("List is empty");
			else
				puts("List is not empty");
			break;
		case 6:
			myList.clear();
			break;
		case 7:
		{
			puts("Enter complex number");
			cin >> real >> imag;
			complex e(real, imag);
			puts("Enter position");
			int pos;
			cin >> pos;
			myList.set(pos, e);
		}
		break;
		case 8:
			cout << myList << endl;
		}
	} while (answer_main);
}