

#include <iostream>
using namespace std;

void rectangle();
void triangle();
void printTriangle(int length, int height);

int main()
{
	int choice = 0;
	while (choice != 3)
	{
		cout << "enter 1 for rectangle, 2 for triangle and 3 for exit\n";
		cin >> choice;
		switch (choice)
		{
		case 1:
			rectangle();
			break;
		case 2:
			triangle();
			break;
		case 3:
			break;
		default:
			cout << "you can enter only 1, 2 or 3\n";
		}
	}
	return 0;
}

void rectangle()
{
	int length = 0, height = 0;
	cout << "Enter the length of the rectangle.\n";
	cin >> length;
	cout << "Enter the height of the rectangle.\n";
	cin >> height;
	if (abs(length - height) > 5)
	{
		int area = length * height;
		cout << "area: " << area << endl;
	}
	else {
		int perimeter = 2 * length + 2 * height;
		cout << "perimeter: " << perimeter << endl;
	}
}

void triangle()
{
	int length = 0, height = 0;
	cout << "Enter the length of the rectangle.\n";
	cin >> length;
	cout << "Enter the height of the rectangle.\n";
	cin >> height;
	int choice = 0;
	cout << "Enter 1 for perimeter of triangular or 2 for print the triangular.\n";
	while (choice != 1 && choice != 2)
	{
		cin >> choice;
		switch (choice)
		{
		case 1:
		{
			double side = sqrt(pow((length / 2), 2) + pow(height, 2)); //לשנות את השם
			double perimeter = length + 2 * side;
			cout << "perimeter: " << perimeter << endl;
		}
		break;
		case 2:
		{
			if (length % 2 == 0 || length > 2 * height)
				cout << "The triangle cannot be printed.\n";
			else
				printTriangle(length, height);
		}
		break;
		default:
			cout << "You can enter only 1 or 2.\n";
		}
	}
}

void printTriangle(int length, int height)
{
	double doubleLinesOfAnyNum = ((double)(height - 2) / ((length - 3) / 2));
	int linesOfAnyNum = doubleLinesOfAnyNum;
	int linesOfMinNum = linesOfAnyNum + ((doubleLinesOfAnyNum - linesOfAnyNum) * ((length - 3) / 2));
	//print the first line
	for (int j = 0; j < (length - 1) / 2; j++)
		cout << " ";
	cout << "*";
	for (int j = 0; j < (length - 1) / 2; j++)
		cout << " ";
	cout << endl;
	//print the lines of the 3 stars
	for (int m = 0; m < linesOfMinNum; m++)
	{
		for (int j = 0; j < (length - 3) / 2; j++)
			cout << " ";
		for (int j = 0; j < 3; j++)
			cout << "*";
		for (int j = 0; j < (length - 3) / 2; j++)
			cout << " ";
			cout << endl;
	}
	//print the lines inside
	for (int i = 5; i < length; i += 2)
	{
		for (int m = 0; m < linesOfAnyNum; m++)
		{
			for (int j = 0; j < (length - i) / 2; j++)
				cout << " ";
			for (int j = 0; j < i; j++)
				cout << "*";
			for (int j = 0; j < (length - i) / 2; j++)
				cout << " ";
			cout << endl;
		}
	}
	//print the last line
	for (int i = 0; i < length; i++)
		cout << "*";
	cout << endl;
}
