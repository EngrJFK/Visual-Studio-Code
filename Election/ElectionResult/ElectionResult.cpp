/*#include <iostream>
using namespace std;

int main()
{
	int n, i, k;
	float num[100], sum = 0.0, average, kamal;
	cout << "please type in the total number of glucose sensor data.\n between zero and hundred:";
	cin >> n;
	while (n > 100 || n <= 0)
	{
		cout << "Error! kindly provide the necessary data" << endl;
		cout << "Enter the number again:";
		cin >> n;
		
	}
	for (i = 0; i < n; ++i) {

		cout << i + 1 << "Enter number:";
		cin >> num[i];
		sum = sum + num[i];
	}

	average = sum / n;
	kamal = ((average + 10) / 2);
	
	cout << "Average = " << (kamal+ average);

	//3
	system("pause");
	return 0;
} */

// i'm writing for my Halima and Aisha
/*#include<iostream>
#include<sstream>
using namespace std;

int main()
{
	int x =2, y, z;
	switch (x)
	{
	case 1: 
		cout << "ade is my friends brother";
			break;
	case 2: 
		cout << "Aisha is my sister";
			break;
	case 3: 
		cout << "i will marry whom Allah wishes";
			break;
	default:
		cout << "until 2019s";
			
	}
	system("pause");
	return 0; 
}*/
/*
#include <iostream>
#include <sstream>
using namespace std;

int main()
 
{ 
	//int n;
	int x = 5;  
	cout << "enter a number";
	cin >> x;
	switch (x)
	{
	
		
	case 2:
		cin >> x;
		//getline(cin, str);
		cout << "failed try again";
		break;
	case 3:
		cin >> x;
		//getline(cin, str);
		cout << "Not the right number";
		break;
	case 5:
		cin >> x;
		//getline(cin, str);
		cout << "Hurray!! congratulation";
		break;
	default:
		cout << "heheeheheh";

	}
	system("pause");
	return 0;
}*/

#include <iostream>
#include<sstream>
using namespace std;

int main()
{
	char o;
	float num1, num2;

	cout << "Enter an operator (+, -, *, /): ";
	cin >> o;

	cout << "Enter two operands: ";
	cin >> num1 >> num2;

	switch (o)
	{
	case '+':
		cout << num1 << " + " << num2 << " = " << num1 + num2;
		break;
	case '-':
		cout << num1 << " - " << num2 << " = " << num1 - num2;
		break;
	case '*':
		cout << num1 << " * " << num2 << " = " << num1 * num2;
		break;
	case '/':
		cout << num1 << " / " << num2 << " = " << num1 / num2;
		break;
	default:
		// operator is doesn't match any case constant (+, -, *, /)
		cout << "Error! operator is not correct";
		break;
	}
	system("pause");
	return 0;
}