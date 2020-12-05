#include <iostream>
#include <sstream>
#include <cmath>
using namespace std;

/*{
	//int x;
	char k;
	float num1, num2;
	cout << "Enter character operator: +, -, *, /";
	cin >> k;
	cout <<"Please enter two operators";
	cin >> num1 >> num2;

	switch (k)
	{
	case '+':
		cout << num1 << "+" << num2 << "=" << num1 + num2;
		break;
	case '-':
		cout << num1 << "-" << num2 << "=" << num1 - num2;
		break;
	case '*':
		cout << num1 << "*" << num2 << "=" << num1 * num2;
		break;
	case '/':
		cout << num1 << "/" << num2 << "=" << num1 / num2;
		break;
	default:
		cout << "incorrect operation";


	}
	system("pause");
	return 0;

}*/



/*
class laplace
{
private:
	int data1;
	float data2;
public:
	void circuit1(int d)
	{
		data1 = d;
		cout << "Electric:" << data1;
	}
	float circuit2()
	{
		cout << "\nEnter Electric:";
		cin >> data2;
		return data2; 
	}

};


int main()
{
	laplace k1, k2;
	float Electricobject1;
	k1.circuit1(12);
	Electricobject1 = k2.circuit2();
	cout << "you entered" << Electricobject1();
	return 0;
}*/

/*
class payment {

	int Id;
	int Age;
	char Name[30];
	long salary;

public: 
	void inputdata()
	{
		cout << "\n\t Enter employee's id:";
		cin >> Id;
		cout << "\n\t Enter Employee's age:";
		cin >> Age; 
		cout << "\n\t Enter employee's name:";
		cin >> Name;
		cout << "\n\t Enter Employee's salary:";
		cin >> salary;

	}

	/*int kamal() { if (Age >= 25) { cout << salary * 2; } 
	
	else cout << salary;
	}
	void outputdata()

	{
		cout << "\n" << Id << "\t" << Name << "\t" << Age << "\t" << salary;
	}

};

void main()
{
	int i; 
	
	payment P[3];
	for (i = 0; i < 3; i++)
	{
		cout << "\n Enter details of " << i + 1 << "Employee";
		P[i].inputdata();
	}

	cout << "\n Details of Employee";
	for (i = 0; i < 3; i++)
		P[i].inputdata();

}*/


/*
//// here is the begining of the class definition////
class complex {

private: 
	int real;
	int imag;
public: 
	complex(): real(0), imag(0) { }
	void readData()
	{
		cout << "Enter real and imaginary number respectively:" << endl;
		cin >> real >> imag; 
	}
	void addcomplexnumbers(complex comp1, complex comp2)
	{
		real = comp1.real + comp2.real;

		imag = comp1.imag + comp2.imag;
	}

	void displaysum()
	{
		cout << "Sum =" << real << "+" << imag << "i";
	}
};

int main()
{
	complex c1, c2, c3;
	c1.readData();
	c2.readData();
	//c3.readData();
	c3.addcomplexnumbers(c1, c2);
	c3.displaysum();
	system("pause");
	return 0;
}*/

/*
template <class T>
T large(T n1, T n2)
{
	return (n1 > n2) ? n1 : n2;
	
}

int main()
{
	int i1, i2;
	float f1, f2;
	char c1, c2;
	cout << "enter two integers:\n";
	cin >> i1 >> i2;
	cout << large(i1, i2) << "is large." << endl;
	cout << "enter two float numbers:\n";
	cin >> f1 >> f2;
	cout << large(f1, f2) << "is large" << endl;
	cout << "\nEnter two character:\n";
	cin >> c1 >> c2;
	cout << large(c1, c2) << "is large" << endl;
	system("pause");
	return 0;

}*/

bool kprime(int n);
int main()
{
	int n, i;
	bool lag = false;
	cout << "Enter a positive integer";
	cin >> n;
	for (i = 2; i <= n / 2; i++)
	{

		if (kprime(i))
		{
			if (kprime(n - i)) 
			{ cout << n << "=" << i << "+" << n - i << endl;
			
			lag = true;
			}
		}
	}
	if (!lag)
		cout << n << "can't be expressed as sum  of two prime numbers";
	
	system("pause");
	return 0; 
}

bool kprime(int n)
{
	int i; 
	bool isprime = true;
	for (i = 2; i <= n / 2; i++)
	{
	   if(n % i==0)
	   {
		isprime = false;
		break;

	   }

	}
	return isprime;
}