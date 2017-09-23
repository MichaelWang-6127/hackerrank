#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
	int iInput = 0;
    int iResult = 0;
	for(int i=0; i<3; i++)
	{
		cin >> iInput;
		iResult += iInput;
	}
    cout << iResult;

    return 0;
}