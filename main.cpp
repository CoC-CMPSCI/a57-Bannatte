#include <iostream>
using namespace std;

int main()
{
	int n1, n2;
	int N, sum;

	cin >> n1 >> n2;
	cin >> N;

	cout << n0 << endl;
	cout << n1 << endl;
	for (int i = 0; i < N; ++i)
	{
		sum = n1 + n2;
		cout << sum << endl;
		n1 = n2;
		n2 = sum;
	}
	
	return 0;
}


/*
Assignment Directions:

Write a program that generates a sequence of numbers where each number is the sum of the previous two numbers.
Ask for the first two initial values.
Ask for the input N for the number of sequences (N > 2).
Print all numbers in the sequence of summation values.
For example, for inputs 5, 8, 3: the number of sequences is 3 and the initial two values are 5 and 8. Print 3 numbers: 5 8 13 (13 is the sum of the previous two numbers).
Another example: inputs 5 10 5 → output: 5 10 15 25 40

*/
