/*
File Name: f4
Project: Focused 4
Date: 2023/02/17
Student name: Vrushti Shah , Student ID: 8825494
Description:this is the program that gets integers from the user and determines which is the lowest.
*/
#include<iostream>
using namespace std;
int main()
{
	int num[10];
	int x = 0;
	cout << "Enter 10 integers:" << endl;
	for (int i = 0; i < 10; i++)
	{
		cin >> num[i];
		if (num[i] < num[x])
		{
			x = i;
		}
	}
	cout << "The lowest value is " << num[x] << " at index " << x << endl;

	return 0;
}