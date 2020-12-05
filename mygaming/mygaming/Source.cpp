/*#include <iostream>
using std::cout;
using std::cin;
using std::endl;;

#include <cstdlib>
using std::rand;
using std::srand;

#include<ctime>
using std::time;

const int arraySize = 4;
char elements[arraySize][arraySize] = { {'1', '2','3','4'},
										{'5','6','7','8'},
										{'9','A','B','C'},
                                        {'D','E',' ','F'} };

char chack[arraySize][arraySize] = { {'1','2','3','4'},
									 {'5','6','7','8'},
									 {'A','B','C','D'},
									 {'D','E','F', ' '} };

int vSP = 3; // vertical space position
int hSP = 2; // h space position

void moveUp();
void moveDown();
void moveRight();
void moveLeft();
void randomise(); //randomise the array
int winer(); // chacks if the player has play the puzzle

int main()
{
	srand(time(0));
	randomise();
	bool quite(false);
	do {
		for (int i = 0; i < arraySize; i++) {

			for (int j = 0; j < arraySize; j++)
				cout << " " << elements[i][j];
			cout << endl << endl;
		}
		char a;
		cout << " w - Up, z - Down, a - Left, s - Right" << endl;
		cin >> a;
		switch (a)
		{
		case 'W':
		case 'w':
		moveUp();
		break;

		case 'Z':
		case 'z':
		moveDown();
		break;

		case 's':
		case 'S':
		moveRight();
		break;

		case 'a':
		case 'A':
		moveLeft();
		break;

		default:
		cout << "Wrong character, please type again!" << endl;
		break;

		}

		int c = winer();
		if (c == 1) {
			cout << "Bravo! you solved the puzzle!" << endl;
			quite = true;
		}
		system("cls");
	} while (quite == false);
	//system("pause");
	return 0;
}

void moveUp()
{
	int vP = vSP;
	if(vP + 1 < 4 && vP >=0)
	{
		elements[vSP][hSP] = elements[vSP + 1][hSP];
		elements[vSP + 1][hSP] = ' ';
		vSP += 1;

	}

}

void moveDown()
{
	int vP = vSP;
	if(vP + 1 <= 4 && vP >0)
	{
		elements[vSP][hSP] = elements[vSP - 1][hSP];
		elements[vSP - 1][hSP] = ' ';
		vSP -= 1;
	}
}

void moveRight()
{
	int hP = hSP;
	if (hP + 1 <= 4 && hP > 0) {

		elements[vSP][hSP] = elements[vSP][hSP - 1];
		elements[vSP][hSP - 1] = ' ';
		hSP -= 1;
	}

}

void moveLeft()
{
	int hP = hSP;
	if (hP + 1 <4  &&  hP >=0)
	{
		elements[vSP][hSP] = elements[vSP][hSP + 1];
		elements[vSP][hSP + 1] = ' ';
		hSP += 1; 
	}
}


void randomise()
{
	for (int i = 0; i < 2000; i++)
	{
		int a = 1 + rand() % 4;

		switch (a)
		{
		case 1: 
		moveUp();
		break;

		case 2: 
		moveDown();
		break;

		case 3: 
		moveRight();
		break;

		case 4: 
		moveLeft();
		break;

		}

    }

}

int winer()

{
	int ans;
	for (int i = 0; i < arraySize; i++)
	{
		for (int j = 0; j < arraySize; j++) {
		
			if (elements[i][j] == chack[i][j])
				ans = 1;
			else
				return -1; 
		
		}
	}

	return 1; 
}*/

/////////////////////////////////////////////////////////////////

//dice game of two players //////////////////////


#include <iostream>
#include <cctype>
#include <cstring>
//#include <iomanip>
using namespace std;
/*
int diceRoll ();
int player1turn (int &);
int player2turn (int &);
void winner (int&, int &, char);
int conplay (int&, int &);

const int SCORELIMIT = 10;

int main ()
{
int p1score = 0;
int p2score = 0;
char choice;
srand (time(NULL));
do
{
conplay (p1score, p2score);
}
while (choice == 'y' ||choice == 'Y');

return 0;
}
/*
conplay allows the users to continue to play till one reaches 100
*/
/*int conplay(int & p1score, int& p2score)
{

	char choice;
	cout << "Rules to pig:\n" << " First player to make it to 100 wins!" << endl;
	cout << "Each player has the choice to roll or hold on their turns!\n";
	while (p1score <= SCORELIMIT)
	{
		player1turn(p1score);


	}
	while (p2score <= SCORELIMIT)
	{
		player2turn(p2score);
	}
	winner(p1score, p2score, choice);



}
/*
determins the winner of the dice game
*/
/*void winner(int& p1score, int& p2score, char choice)
{
	int player1wins = 0;
	int player2wins = 0;

	if (p1score >= SCORELIMIT)// compares 
	{
		cout << " Player one has won! Your Score is " << p1score << endl;
	}

	if (p1score >= SCORELIMIT)
	{
		cout << " Player two has won! Your score is " << p2score << endl;
	}
	cout << " Would you like to play again? [ y or n]" << endl;
	cin >> choice; //gives user the choice to play the game again

	while (choice == 'n' || choice == 'N')
	{
		cout << " GoodBye!" << endl;
	}
}
/*
allows the user to roll the dice and keeps track of how many points the
player has.
*/
/*int player1turn(int& p1score)
{
	int cscore, roll;
	char rORh;

	cout << " The toral score is:" << cscore << endl;
	cout << " Please enter r to roll again or h to hold:" << endl;
	cin >> rORh;
	while (rORh == 'h' || rORh == 'H') // ends the loop if user presses h and adds cscore to
									   // p1score
	{
		cscore += p1score;
		break;
	}

	while (rORh == 'r' || rORh == 'R')
	{
		roll = diceRoll(); // calls in the dice roll function 
		if (roll == 1)
		{
			cout << " Player 1 rolled a" << setw(2) << roll << " your turn is over!" << endl;
			cscore += roll;
			break;

		}
		else
		{

			cscore += roll; // adds the roll to the cscore 
			cout << "Player 1 rolled a" << setw(2) << roll << endl;
			cout << "Player 1 Your score this turn is:" << cscore << endl;
			cout << "Player 1 Please enter r to roll again or h to hold:" << endl;
			cin >> rORh;
		}
	}
	return p1score;
}
/*
allows the user to roll the dice and keeps track of how many points the
player has.
*/
/*int player2turn(int& p2score)
{
	int cscore = 0, roll;
	char rORh;
	cout << "Player 2 The toral score is:" << p2score << endl;
	cout << "Player 2 Please enter r to roll again or h to hold:" << endl;
	cin >> rORh;

	while (rORh == 'h' || rORh == 'H')// if user presses h p2score is added to cscore
	{
		p2score += cscore;
		break;
	}

	while (rORh == 'r' || rORh == 'R')
	{
		roll = diceRoll();// calls in the dice roll function
		if (roll == 1)
		{
			cout << " Player 2 rolled a" << setw(2) << roll << " your turn is over!" << endl;
			cscore += roll;
			break;
		}
		else
		{
			cscore += roll;// adds the roll to the cscore 
			cout << "Player 2 rolled a" << setw(2) << roll << endl;
			cout << "Player 2 score this turn is:" << cscore << endl;
			cout << "Player 2 enter r to roll again or h to hold:" << endl;
			cin >> rORh;
		}
	}
	return p2score;
}
/*
diceRoll, is a random number generater that will not allow the number go past 6
*/
/*int diceRoll()
{
	int roll;

	roll = (rand() % 6) + 1;

	return roll;
}
*/

int main(){
char	opr;
float	n1, n2;
cout << "Enter the operator for the calcuation";
//cin >> opr;

cin >> opr;
cin >> n1;
cin >> n2;
switch (opr)
{
case '+':
	cout << n1 + n2;
	break;
case '-':
	cout << n1 - n2;
	break;
case '*':
	cout << n1 * n2;
	break;
case '/':
	cout << n1 / n2;
	break;
default:
	cout << "Operator not valid";
	break;
	
}
system("pause");
return 0;
}

