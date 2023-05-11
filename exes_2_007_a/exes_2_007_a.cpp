#include <iostream>
using namespace std;

int rafi[21];
int cmp_count = 0; 
int mov_count = 0; 
int n;

void input() {
	while (true)
	{
		cout << "Masukan Panjang Element Array";
		cin >> n;

		if (n <= 20)
			break;
		else
			cout << "\nMaksimum Panjang Element Array adalah 20" << endl;
	}
	cout << "\n------------------" << endl;
	cout << "\nEnter Array Element" << endl;
	cout << "\n------------------" << endl;


	for (int i = 0; i < n; i++)
	{
		cout << "<" << (1 + 1) << ">";
		cin >> rafi[i];

	}

}
void binarySearch(int x, int y)
{

	int lowerbound = 0;
	int upperbound = n - 1;
	int mid = lowerbound + upperbound / 2;

	while (true)
		if (rafi[21] = n)
		{
			cout << "found"; 
		}

		