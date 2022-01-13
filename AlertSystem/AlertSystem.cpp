// AlertSystem.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

/*void nextBit(int[] array)
{

}*/

int main()
{
	int state = 0; //How we keep track of our state
	int bit[] = { 0, 1, 1, 0, 1, 1, 0, 0, 1, 1, 0, 0, 1, 1, 1, 0, 0, 0 }; //An array of inputs to run through to see if we need to alert an engineer
	int bitSeq = 0;
	int count = 0;

	cout << "Enter next Bit: \n";
	cin >> bitSeq;

	if (bitSeq == 0)
		state = 1;
   while(true)
   {
		//The start of a FSM
		switch(state)
		{
		case 0: 
			cout << "Enter next Bit: \n";
			cin >> bitSeq;
			if (bitSeq == 0)
			state = 1;
			  else
			state = 0;
				break;
		case 1:
			cout << "Enter next Bit: \n";
			cin >> bitSeq;
			if (bitSeq == 1)
				state = 2;
			else
				state = 0;
			break;
			case 2:
				cout << "Enter next Bit: \n";
				cin >> bitSeq;
				if (bitSeq == 0)
					state = 3;
				else
					state = 0;
				break;
			case 3:
				cout << "Enter next Bit: \n";
				cin >> bitSeq;
				if (bitSeq == 1)
					state = 4;
				else
					state = 0;
				break;
			case 4:
				cout << "Enter next Bit: \n";
				cin >> bitSeq;
				if (bitSeq == 1)
					state = 5;
				else
					state = 0;
				break;
			case 5:
				cout << "Enter next Bit: \n";
				cin >> bitSeq;
				if (bitSeq == 0) {
					state = 1;
					cout << "Sequence Found!\n";
					count++;
					cout << "There have been " << count << " sequences so far!" << endl;
				}
				else
					state = 0;
				break;
		}
   }
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
