/*#include <iostream>
using namespace std;
volatile int i;
int main(void)
{
	cout << "Hello Africans, trust you are good" << endl;
	cout << "My prettiest Aisha" << endl;
	system("pause");
	while (1) {
		if (i == 10) {

			cout << "i will marry you" << endl;

		}
		else if(i==5) { cout << "i will not!" << endl; }
		system("pause");
		return 0;
	}
}*/
// example about structures
/*#include <iostream>
#include <string>
#include <sstream>
using namespace std;

struct payment {
	string  weight, type;
	int price;
	// weight;
	long barcode;
} maxima;
//int volatile price;
void supermarket(payment movie);

int main()
{
	
		int i;
		payment maxima[3];         //Statement   1

		for (i = 0; i<3; i++)
	
	
	
	{
			cout << "\nEnter details of " << i + 1 << " payment";

			cout << "\n\tEnter product type: ";
			cin >> maxima[i].type;

			cout << "\n\tEnter product weight : ";
			cin >> maxima[i].weight;

			cout << "\n\tEnter product price : ";
			cin >> maxima[i].price;

			cout << "\n\tEnter barcode of product : ";
			cin >> maxima[i].barcode;
	}
		{
		cout << "\nDetails of Employees";
		for (i = 0; i<3; i++)
			cout << "\n" << maxima[i].type << "\t" << maxima[i].price << "\t"
			<< maxima[i].weight << "\t" << maxima[i].barcode;
		system("pause");
}
/*
void supermarket(payment movie)
{
	cout << movie.type;
	cout << " (" << movie.price << ")\n";
	cout << movie.type;
	cout << " (" << movie.price << ")\n";
	cout << movie.type;
	cout << " (" << movie.price << ")\n";
	/*if (price == 1000) {
	
		cout << "price overdue, please pay with POS";
		return 0;
	}*/
///////////////////////////////////////////////////////////
/*#include <iostream>
#include <string>
#include <sstream>
using namespace std;
//volatile int a;
int makaranta(int a, int b) {
	int wasa;
	wasa = (a*b) / 2;
	return wasa;

}
 int main()
{
	 int a;
	 cout << "mu hadu gobe a filin kwalo:";
	 cin >> a;
	if (a <= 2) {
		cout << " gidan wasa ba gola\n";
	}
	else if (a == 8) {
		cout << "gobara a filin kwalo, magane ta, Referee\n";
	}
	else {

		cout << " Allah ya jikan mu dika kafun mu mutu a filin wasa," 
			<< makaranta(5,8)<<'\n';
	}
	system("pause");
	return 0;

	//system("pause");

}*/ 
/////////////////////////////////////////////////////////////////////////////////////////dhdjjd

#include<iostream>
#include<string>
#include<sstream>
using namespace std;
/*                   
	cPaddle p1(0, 0);
	cPaddle p2(10, 0);
	cout << p1 << endl;
	cout << p2 << endl;
	p1.moveUp();
	p2.moveDown();
	cout << p1 << endl;
	cout << p2 << endl;
	system("pause");
	return 0;
} */

/*enum wife {Aisha = 6, NanaAisha = 1, Maryam = 3, Hafsat = 5} marriage;*/
class Test
{
private:
	int data1;
	float data2;

public:

	void insertIntegerData(int d)
	{
		data1 = d;
		cout << "Number: " << data1;
	}

	float insertFloatData()
	{
		cout << "\nEnter data: ";
		cin >> data2;
		return data2;
	}
};

int main()
{
	Test o1, o2;
	float secondDataOfObject2;

	o1.insertIntegerData(12);
	secondDataOfObject2 = o2.insertFloatData();

	cout << "You entered " << secondDataOfObject2;
	system("pause");
	return 0;
}

