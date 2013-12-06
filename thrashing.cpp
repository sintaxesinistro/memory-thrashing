#include <iostream>
#include <ctime>
using namespace std;
int array[1 << 14][1 << 14];

int main() {
	time_t beforeThrash = 0;
	time_t afterThrash = 0;
	time_t thrashTime;
	int i, j;

	beforeThrash = time(NULL);
	for (i = 0; i<16384; i++)
	 for (j = 0; j<16384; j++)
	  array[i][j] = i*j;


	afterThrash = time(NULL);
	thrashTime = afterThrash - beforeThrash;
	cout << thrashTime << endl;

	system("pause");
	return 0;
}