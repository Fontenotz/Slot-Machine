#include<iostream.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<time.h>

	char a;
	char response;
	char finald;
	char fp;
	int wager;
	const int x=3;
	const int y=3;
	int money;
	int money1;
	char Slots[x][y]={'*','*','*',
						'*','*','*',
	 					'*','*','*'};

int main();
void spinem();
void showem();
void wage();
void winlose();
void again();



void spinem() 
// Slot Machine Starts
{
	for (int a=0;a<3;a++)
	{
		for (int b=0;b<3;b++)
		{
			Slots[a][b]=rand()%5+1;

		}
	}
}



void showem()
// Slot Machine Visable
{
char a='y';
	for (int aa=0;aa<3;aa++)
	{
		for(int bb=0;bb<3;bb++)
		{
			cout<<Slots[aa][bb]<<" ";
		}
		cout<<endl;

	}
}



void wage()
{
money=100;
cout<<"You have this much money $"<<money<<endl;
cout<<endl;
cout<<"Would you like to make a wager?(y or n)";
cin>>fp;
if(fp=='y')
{
	cout<<"Please input your wager ($10,20,50)"<<endl;
	cout<<"$";
	cin>>wager;

	if (wager==10||wager==20||wager==50)
	{
		cout<<"You have bet $"<<wager<<endl;
		cout<<"Type y to continue or n to start over"<<endl;
		cin>>finald;
		if (finald=='y')
		{
			system("cls");
			spinem();
			showem();
			winlose();

		}
	
		else
		{
            system("cls");
			wage();
		}
	}
	else
	{
		cout<<"Please enter an amount of 10,20, or 50"<<endl;
		cout<<endl<<endl<<endl<<endl;
		wage();
	}
}
else if(fp=='n')
{
cout<<"Mode is set to free play,type y to continue"<<endl;
cin>>finald;
if (finald=='y')
{
system("cls");
			spinem();
			showem();
			}
else
{
system("cls");
wage();
}
}
}



void winlose()
{

	if (wager>=10) //Money bet is greater or equal to $10
	{
		if (Slots[1][0]==Slots[1][1] && Slots[1][0]==Slots[1][2]) //Middle Row Winning
		{
	money=money+10; //Wager is doubled, because of win
		}
		else
		{
			money=money-10; //Wager is lost from total money because of loss.

		}
	}


	if (wager>=20) //Money bet is greater or equal to $20
	{
		if (Slots[0][0]==Slots[0][1] && Slots[0][0]==Slots[0][2]) //Top Row Winning
		{
	money=money+10; //Wager is doubled, because of win
		}
		else
		{
			money=money-10; //Wager is lost from total money because of loss.

		}
	}


	if (wager>=20) //Money bet is greater or equal to $20 
	{
		if (Slots[2][0]==Slots[2][1] && Slots[2][0]==Slots[2][2]) //Bottem Row Winning
		{
	money=money+10; //Wager is doubled, because of win
	

		}
		else
		{
			money=money-10; //Wager is lost from total money because of loss.

		}
	}


	if (wager>=50) //Money bet is greater or equal to $50
	{
		if (Slots[0][0]==Slots[1][1] && Slots[0][0]==Slots[2][2]) //Diagonal Left Row Winning
		{
	money=money+30; //Wager is doubled, because of win


		}
		else
		{
			money=money-30; //Wager is lost from total money because of loss.

		}
	}


	if (wager>=50) //Money bet is greater or equal to $50
	{
		if (Slots[0][2]==Slots[1][1] && Slots[0][2]==Slots[2][0]) //Diagonal Right Row Winning
		{
	money=money+30; //Wager is doubled, because of win


		}
		else
		{
			money=money-30; //Wager is lost from total money because of loss.

		}
	}
	cout<<money<<endl<<endl<<endl;

}

void again()
{
 cout<<endl<<"Would you like to play again? (y or n)"<<endl;
cin>>a;
if (a=='y')
{
	wage();
	}
	else
	{
	system("cls");
	cout<<"Please close the window"<<endl;
 }    
 }
 

int main()
// Main
{
	srand(time(0));
		int money=100;
		char response='y';

wage();	
again();
	return 0;
}




                        a total of $"<<money<<endl;
		}
		else
		{
			money=money-money1; //Wager is lost from total money because of loss.
			cout<<"You have lost $"<<money1<<endl;
			cout<<"You now have a total of $"<<money<<endl;
		}
	}


	if (money1>=50) //Money bet is greater or equal to $50
	{
		if (Slots[0][2]==Slots[1][1]==Slots[2][0]) //Diagonal Right Row Winning
		{
	money1=money1+money1; //Wager is doubled, because of win
	money=money+money1; //Money now has won money included
	cout<<"You have won $"<<money1<<endl;
	cout<<"You now have a total of $"<<money<<endl;
		}
		else
		{
			money=money-money1; //Wager is lost from total money because of loss.
			cout<<"You have lost $"<<money1<<endl;
			cout<<"You now have a total of $"<<money<<endl;
		}
	}

}

void again()
{
 cout<<endl<<"Would you like to play again? (y or n)"<<endl;
cin>>a;
if (a=='y')
{
	wage();
	}
	else
	{
	system("cls");
	cout<<"Please close the window"<<endl;
 }    
 }
 

int main()
// Main
{
	srand(time(0));
		int money=100;
		char response='y';

wage();	
again();
	return 0;
}




