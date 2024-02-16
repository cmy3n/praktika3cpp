#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	const int height = 3;
	const int width = 5;
	double nums[height][width]{};

	for (int RowInput = 0; RowInput < height; RowInput++)
	{
		for (int ColumnInput = 0; ColumnInput < width; ColumnInput++)
		{
			cout << "Введите " << (ColumnInput + 1) << " число " << (RowInput + 1) << " строки: ";
			cin >> nums[RowInput][ColumnInput];
		}
		cout << endl;
	}
	cout << endl << endl;

	for (int RowOutput = 0; RowOutput < height; RowOutput++)
	{
		for (int ColumnOutput = 0; ColumnOutput < width; ColumnOutput++)
		{
			cout << nums[RowOutput][ColumnOutput] << "\t";
		}
		cout << endl << endl;
	}

	for (int row = 0; row < height; row++)
	{
		double sum = 0;
		for (int column = 0; column < width; column++)
		{
			sum = (sum + nums[row][column]);
		}
		cout << "Среднее арифметическое " << (row+1) << " строки: " << (sum / width) << endl;
		sum = 0;
	}
}