/*
Project Name: Snake Eyes
Author: Phiip Schmidt
Date: June 20, 2016
Description:



*/
#include <iostream>
#include <iomanip>
#include <time.h>
#include <windows.h>

using namespace std;
int main()
{
	srand(time(NULL));
	int die[2];
	for (int i = 0; i < 100; i++)
	{
		die[0] = rand() % 6 + 1;
		die[1] = rand() % 6 + 1;
		cout << "Roll " << i << ": " << die[0] << " " << die[1];

		//if dies equal 1 then print snake eyes;
		if (die[0] == 1 && die[1] == 1)
		{
			cout << " Snake Eyes!!";
		}
		cout << endl;
		Sleep(50);
	}
	system("pause");
	return 0;
}