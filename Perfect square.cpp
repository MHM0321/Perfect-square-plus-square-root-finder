#include<iostream>
using namespace std;
int main()
{
	double num = 0, sq = 1, sqnum=0; 
	bool is_square = false;
while (num != -1)
{
	cout << "Enter a number to know if its a perfect square: ";
	cin >> num;
	sq = 1;
	sqnum = 0;
	while (sq<=num)
	{
		if ((sq * sq) == num)
		{is_square = true;
		 sqnum = sq;  //It is done to store the value of the square root without altering the loop
		 sq = num;
		 sq++;}
		else if((sq*sq) != num)
		{is_square = false;
		 sq++;}
	}
if (is_square == true)
{cout << "It is a perfect square of " << sqnum << endl;}
else if (is_square == false)
{cout << "It is not a perfect square" << endl;}
}
system("pause");
return 0;
}