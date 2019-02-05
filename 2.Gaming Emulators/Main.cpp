
#include<iostream>
#include<stdlib.h>
#include <time.h>
#include<conio.h>
#include<windows.h>
using namespace std;

class guess
{
	private:
		int SC, SE,GU;
		
	public:
		void g1(int SC, int SE, int GU)
		{
			srand (time(NULL));
			 SE = rand() % 10 + 1;
			 
			 for(int f=0; f<10; f++)
			 {
			 	cout<<"\t\t\t\t\tEnter any number between 1 and 10\n";
			 	cin>>GU;
			 	if(GU==SE)
				 {
				 	cout<<"\t\t\t\t\tScore!"<<endl;
				 	SC++;
				 		
					 }	
			 	else
			 	{
			 		cout<<"\t\t\t\t\tFailed! -_-"<<endl;
			 			
				 }
			 }
			 	system("CLS");
			 cout<<"\t\t\t\t\tTOtal score is "<<SC<<endl;
			 getch();
			 	
			
			
			}	
	
};

char arr[9] = { '1','2','3','4','5','6','7','8','9' };

void structure();
char win();
class tictac
{
	private:
		int x=1;
	char mark = 'X';
	char choice;
	int player = 1;
	
	public:
		int maing()
		{
				//Loop Starting...
	while (player == 1 || player==2)
	{
		structure();
		
		cout << "Player " << player << " = ";
		cin >> choice;

		//player 1...
		if (choice == '1' && player == 1) 
		{
			arr[0] = 'X';
		}
		else if (choice == '2' && player == 1) 
		{
			arr[1] = 'X';
		}
		else if (choice == '3' && player == 1) 
		{
			arr[2] = 'X';
		}
		else if (choice == '4' && player == 1) 
		{
			arr[3] = 'X';
		}
		else if (choice == '5' && player == 1)
		 {
			arr[4] = 'X';
		}
		else if (choice == '6' && player == 1) 
		{
			arr[5] = 'X';
		}
		else if (choice == '7' && player == 1) 
		{
			arr[6] = 'X';
		}
		else if (choice == '8' && player == 1) 
		{
			arr[7] = 'X';
		}
		else if (choice == '9' && player == 1) 
		{
			arr[8] = 'X';
		}
		
		//player 2...
		else if (choice == '1' && player == 2) 
		{
			arr[0] = 'O';
		}
		else if (choice == '2' && player == 2) 
		{
			arr[1] = 'O';
		}
		else if (choice == '3' && player == 2) 
		{
			arr[2] = 'O';
		}
		else if (choice == '4' && player == 2) 
		{
			arr[3] = 'O';
		}
		else if (choice == '5' && player == 2) 
		{
			arr[4] = 'O';
		}
		else if (choice == '6' && player == 2) 
		{
			arr[5] = 'O';
		}
		else if (choice == '7' && player == 2) 
		{
			arr[6] = 'O';
		}
		else if (choice == '8' && player == 2)
		{
			arr[7] = 'O';
		}
		else if (choice == '9' && player == 2) 
		{
			arr[8] = 'O';
		}
		
		//If user enters a wrong character...
		else
		{
			cout<<"invalid Move"<<endl;
			Sleep(1000);
		}
		if(choice != '1' && choice != '2' && choice != '3' && choice != '4' && 
		   choice != '5' && choice != '6' && choice != '7' && choice != '8' && 
		   choice != '9'){
			x--;
		}
		
		// choosing player...
		else if (player == 1) 
		{
			player++;
		}
		else 
		{
			player--;
		}
		
		//If match draws...
		if(x==9)
		{
		cout<<"The Game is A tie..."<<endl;
		system("pause");
		return 0;
	    }
	    x++;
		
		//Winning and loosing function...
		win();
		system("CLS");
		
	}//Ending Loop...
	
	
	
	return 0;
}

//Structure of the game...
void structure() 
{
	cout << "   Tic Tac Toe" << endl << endl
		<< " Player 1 = X ; player 2 = O" << endl << endl
		<< "     |     |     " << endl
		<< "  " << arr[0] << "  |  " << arr[1] << "  |  " << arr[2] << endl
		<< "-----|-----|-----" << endl
		<< "  " << arr[3] << "  |  " << arr[4] << "  |  " << arr[5] << endl
		<< "-----|-----|-----" << endl
		<< "  " << arr[6] << "  |  " << arr[7] << "  |  " << arr[8] << endl
		<< "     |     |     " << endl;
}

//If Someone Wins...
char win()
{
	if (arr[0] == arr[1] && arr[1] == arr[2])
	{
		if (arr[0] == 'X')
		{
			cout << "\n Congratulations! 'X' Wins..." << endl;
			system("pause");
			return 0;
		}
		else if (arr[0] == 'O')
		{
			cout << "\n Congratulations! 'O' Wins..." << endl;
			system("pause");
			return 0;
		}
	}
	
	if (arr[3] == arr[4] && arr[4] == arr[5]) 
	{
		if (arr[3] == 'X') {
			cout << "\n Congratulations! 'X' Wins..." << endl;
			system("pause");
			return 0;
		}
		else if (arr[3] == 'O') {
			cout << "\n Congratulations! 'O' Wins..." << endl;
			system("pause");
			return 0;
		}
	}
	
	if (arr[6] == arr[7] && arr[7] == arr[8]) 
	{
		if (arr[6] == 'X') 
		{
			cout << "\n Congratulations! 'X' Wins..." << endl;
			system("pause");
			return 0;
		}
		else if (arr[6] == 'O') 
		{
			cout << "\n Congratulations! 'O' Wins..." << endl;
			system("pause");
			return 0;
		}
	}
	
	if (arr[0] == arr[3] && arr[3] == arr[6]) 
	{
		if (arr[0] == 'X') 
		{
			cout << "\n Congratulations! 'X' Wins..." << endl;
			system("pause");
			return 0;
		}
		else if (arr[0] == 'O') 
		{
			cout << "\n Congratulations! 'O' Wins..." << endl;
			system("pause");
			return 0;
		}
	}
	
	if (arr[1] == arr[4] && arr[4] == arr[7]) 
	{
		if (arr[1] == 'X') 
		{
			cout << "\n Congratulations! 'X' Wins..." << endl;
			system("pause");
			return 0;
		}
		else if (arr[1] == 'O') 
		{
			cout << "\n Congratulations! 'O' Wins..." << endl;
			system("pause");
			return 0;
		}
	}
	
	if (arr[2] == arr[5] && arr[5] == arr[8]) 
	{
		if (arr[2] == 'X') 
		{
			cout << "\n Congratulations! 'X' Wins..." << endl;
			system("pause");
			return 0;
		}
		else if (arr[2] == 'O') 
		{
			cout << "\n Congratulations! 'O' Wins..." << endl;
			system("pause");
			return 0;
		}
	}
	
	if (arr[0] == arr[4] && arr[4] == arr[8]) 
	{
		if (arr[0] == 'X') 
		{
			cout << "\n Congratulations! 'X' Wins..." << endl;
			system("pause");
			return 0;
		}
		else if (arr[0] == 'O') 
		{
			cout << "\n Congratulations! 'O' Wins..." << endl;
			system("pause");
			return 0;
		}
	}
	
	if (arr[2] == arr[4] && arr[4] == arr[6]) 
	{
		if (arr[2] == 'X') 
		{
			cout << "\n Congratulations! 'X' Wins..." << endl;
			system("pause");
			return 0;
		}
		else if (arr[2] == 'O') 
		{
			cout << "\n Congratulations! 'O' Wins..." << endl;
			system("pause");
			return 0;
		}
	}
		}
	
	
};

class allspark
{
	private:
			int MAX_TRIES = 5;
	string name;
	char letter;
	int num_of_wrong_guesses = 0;
	string word;
	int as=0;
	
	public:
		int letterFill(char guess, string secretword, string &guessword)
{
	int i;
	int matches = 0;
	int len = secretword.length();
	for (i = 0; i< len; i++)
	{
		if (guess == guessword[i])
			return 0;
		if (guess == secretword[i])
		{
			guessword[i] = guess;
			matches++;
		}
	}
	return matches;
}
		int gamora()
		{
				srand(time(NULL));   
	
		
	cout << "\nThe world is gonna get destroyed! But you can save it..."<<endl;
	getch();
	cout<<"\n The only thing which can save the world is the All-spark and "<<endl;
	getch();
	cout<<"\n You are the only one able to forge it..."<<endl;
	getch();
	cout<<"\n All you have to do is to complete the square, by guessing "<<endl;
	getch();
	cout<<"\n names of countries, of your incredibly naive planet"<<endl;
	getch();
	cout<<"\n Each try shall resurect a single piece and you have 7 chances to forge all 5 pieces"<<endl;
	getch();
	cout<<"\n You'll have to stablize the cube after forging all the pieces,"<<endl
		<<"\n If you gather all the pieces before completion of word, know that stablization is required at that phase"<<endl;
		getch();

		string average[] = { "madagascar", "azerbaijan", "kyrgyzstan" };

		int n = rand() % 3;
		word = average[n];
		system("CLS");
		string unknown(word.length(), '*');
		cout << "\n\nEach letter is represented by an asterisk.";
		cout << "\n\nYou have to type only one letter in one try.";

		cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
	
		while (num_of_wrong_guesses < MAX_TRIES)
		{
			cout << "\n\n" << unknown;
			cout << "\n\nGuess a letter: ";
			cin >> letter;
			if (letterFill(letter, word, unknown) == 0)
			{
				system("CLS");
				num_of_wrong_guesses++;
			}
			else
			{
				
				as++;
				
			}
				if(as==1)
			{
				system("CLS");
				cout<<"----------           "<<endl
					<<"-.....               "<<endl
					<<"-....                "<<endl
					<<"-...                 "<<endl;
			}
			else if(as==2)
			{
				system("CLS");
				cout<<"----------           "<<endl
					<<"-.....               "<<endl
					<<"-....                "<<endl
					<<"-...                 "<<endl
    				<<"-...                 "<<endl
					<<"-....                "<<endl
					<<"-.....               "<<endl
					<<"-----------          "<<endl;
	
			}
			else if(as==3)
			{
				system("CLS");
				cout<<"----------            "<<endl
					<<"-.....                "<<endl
					<<"-....                 "<<endl
					<<"-...                  "<<endl
    				<<"-...              ...-"<<endl
					<<"-....            ....-"<<endl
					<<"-.....          .....-"<<endl
					<<"----------------------"<<endl;
			}
			else if(as==4)
			{
				system("CLS");
				cout<<"----------------------"<<endl
					<<"-.....          .....-"<<endl
					<<"-....            ....-"<<endl
					<<"-...              ...-"<<endl
    				<<"-...              ...-"<<endl
					<<"-....            ....-"<<endl
					<<"-.....          .....-"<<endl
					<<"----------------------"<<endl;

			}
			else if(as==5)
			{
				system("CLS");
				cout<<"----------------------"<<endl
					<<"-.....          .....-"<<endl
					<<"-....    _____   ....-"<<endl
					<<"-...   |       |  ...-"<<endl
    				<<"-...   |       |  ...-"<<endl
					<<"-....  | _____ | ....-"<<endl
					<<"-.....          .....-"<<endl
					<<"----------------------"<<endl;
			}
			
				if (word == unknown)
			{
				
				cout << word << endl;
				getch();
				system("CLS");
					cout << "Yeah! You got it! All spark is all stablized and implemented completely! "<<endl
					 << "\n You saved your world and race, human, please tell me your name"<<endl;
				string name;
				cin>>name;
				cout<<"\nFrom now,"<<name<<"Will be the protector of earth! No evil shall escape your sight"<<endl;
				break;
			}
		}
		if (num_of_wrong_guesses == MAX_TRIES)
		{
			cout << "\nSorry, you lose...The world is detroyed and it's all upon you'" << endl;
			cout << "The word was : " << word << endl;
		}
		cin.ignore();
		cin.get();
		return 0;
		
		
		
}
			
};

class car
{
	private:
		char map[25][25];
	public:
		
		void clearscreen()
{
    HANDLE hOut;
    COORD Position;
	 
    hOut = GetStdHandle(STD_OUTPUT_HANDLE);
 	
    Position.X = 0;
    Position.Y = 0;
    SetConsoleCursorPosition(hOut, Position);
}
		
		int cars()
		{
			
			cout<<"Welcome to the CARS!"<<endl;
			getch();
			cout<<"\n It's simple, actually not..."<<endl;
			getch();
			cout<<"\n Just use any key to start, directional keys to move sideways"<<endl;
			getch();
			cout<<"\n Avoid the big H and collect the small O's"<<endl;
			getch();
			cout<<"\n Speed will increase with time! be carefull"<<endl;
			getch();
			system("CLS");
			
			 //loads the map with spaces and borders
    for(int i=0; i < 20; ++i) {
      for(int j=0; j < 20; ++j) {
        map[i][0] = '|';
        map[i][18] = '|';
        map[i][j] = ' ';
      }
    }
 
    int y = 17, x = 9; //the cars coordinates
    srand(time(0));
    int a = 0, b = rand() % 15 + 2; //the obstacles coordiantes
    int points = 0; //points that the player has earned
    int speed = 100; //determines the speed of the obstacles (and the car)
    int q = 0, p = rand() % 15 + 2; //the cash coordinates
    int cashcheck = 0; //balances when the cash spawns
    int cashpickedup = 0;
    bool startup = true;
 
    char cash = 'O';
    char obstacle = 219;
 
    char car = 'X';
    map[y][x] = car;
    //the game loop
    for(;;) {
      clearscreen();
        //places the car at its default location
        map[y][x] = 'O';
        map[y][x+1] = '|';
        map[y][x-1] = '|';
        map[y+1][x-1] = 'o';
        map[y+1][x+1] = 'o';
        map[y-1][x-1] = 'o';
        map[y-1][x+1] = 'o';
 
      //generates the obstacles
      map[a][b] = ' ';
        map[a][b] = ' ';
        map[a][b+1] = ' ';
        map[a][b-1] = ' ';
        map[a+1][b-1] = ' ';
        map[a+1][b+1] = ' ';
        map[a-1][b-1] = ' ';
        map[a-1][b+1] = ' ';
        ++a;
        map[a][b] = obstacle;
        map[a][b+1] = obstacle;
        map[a][b-1] = obstacle;
        map[a+1][b-1] = obstacle;
        map[a+1][b+1] = obstacle;
        map[a-1][b-1] = obstacle;
        map[a-1][b+1] = obstacle;
        if(a > 20) {
          a = 0;
          b = rand() % 15 + 2;
        }
    //displays the map
    for(int i=0; i < 20; ++i) {
      for(int j=0; j < 20; ++j) {
        cout << map[i][j];
          if(j >= 19) {
            cout << endl;
          }
        }
      }
    cout << "    Points: " << points + (cashpickedup*30);
    //does so the game starts after a key is pressed
    if(startup) {
      _getch();
      startup = false;
    }
    //moves the car to the left
    if(GetAsyncKeyState(VK_LEFT)) {
      if(map[y][x-3] == obstacle) {
        goto lost;
      }
      else if(map[y][x-3] != '|') {
        map[y][x] = ' ';
        map[y][x+1] = ' ';
        map[y][x-1] = ' ';
        map[y+1][x-1] = ' ';
        map[y+1][x+1] = ' ';
        map[y-1][x-1] = ' ';
        map[y-1][x+1] = ' ';
        x -= 3;
        map[y][x] = 'X';
        map[y][x+1] = '|';
        map[y][x-1] = '|';
        map[y+1][x-1] = 'o';
        map[y+1][x+1] = 'o';
        map[y-1][x-1] = 'o';
        map[y-1][x+1] = 'o';
      }
    }
    //moves the car to the right
    if(GetAsyncKeyState(VK_RIGHT)) {
      if(map[y][x+3] == obstacle) {
        goto lost;
      }
      else if(map[y][x+3] != '|') {
        map[y][x] = ' ';
        map[y][x+1] = ' ';
        map[y][x-1] = ' ';
        map[y+1][x-1] = ' ';
        map[y+1][x+1] = ' ';
        map[y-1][x-1] = ' ';
        map[y-1][x+1] = ' ';
        x += 3;
        map[y][x] = 'X';
        map[y][x+1] = '|';
        map[y][x-1] = '|';
        map[y+1][x-1] = 'o';
        map[y+1][x+1] = 'o';
        map[y-1][x-1] = 'o';
        map[y-1][x+1] = 'o';
      }
    }
    //checks if the car crashed
    if(map[y-2][x] == obstacle || map[y-2][x-1] == obstacle || map[y-2][x+1] == obstacle) {
lost:
      cout << "\n\nYou crashed!\n" << endl;
      getch();      
      return 0;
    }
    //checks if the player picked up cash
    if(map[y-2][x] == cash || map[y-2][x-1] == cash || map[y-2][x+1] == cash) {
      map[y-2][x] = ' ';
      map[y-2][x-1] = ' ';
      map[y-2][x+1] = ' ';
      ++cashpickedup;
      q = 0;
      p = rand() % 15 + 2;
    }
    //generates the cash
    else if(q > 20) {
      q = 0;
      p = rand() % 15 + 2;
    }
    //does so the cash doesnt appear next to the obstacle
    if(a > 8) {
      ++cashcheck;
    }
    //places the cash
    if(cashcheck) {
    map[q][p] = ' ';
    ++q;
    map[q][p] = cash;
    }
      ++points;
    //speeds up the obstacles each time the player gets another 100 points
    if(points == 100 || points == 200 || points == 300 || points == 400) {
        speed -= 25;
      }
    Sleep(speed);
    }
  return 0;
		}
};

int main()
{
	string pass;
	cout<<"\t\t\t\t\t\tEnter password! "<<endl;
	cin>>pass;
	
	if(pass!="amirali")
	{
		cout<<"Go play outside"<<endl;
		goto doom;
		}
	
	char choice;
		system("COLOR fC");
		
		system("CLS");
	cout<<"\t\t\t\t\t \a Welcome to Gideon, your Personal game assistant\n\n"<<endl;
	getch();
	system("CLS");
	cout<<"\t\t\t\t\t\aI am created by Amir Ali\n\n\t\t\t\t\t press enter to continue"<<endl;
	getch();
	system("CLS");
	cout<<"\t\t\t\t\t\aPlease choose which game would you like to play, here's the menu\n\n"<<endl;
	cout<<"\t\t\t\t\tA= Guessing \n\t\t\t\t\tB= Tic Tac Toa \n \t\t\t\t\tC= Cars! \n \t\t\t\t\tD= Complete the allspark"<<endl;
	cin>>choice;
	
	switch(choice)
	{
	
	case 'a':
	{
	cout<<"\a";	
	system("COLOR 90 ");
	system("CLS");
	int Sco,Sec,Gue;
	guess obj1;
	obj1.g1(Sco, Sec, Gue);
	
	break;
	}
	case'b':
	{
	system("COLOR EC");
		
	cout<<"\a";	
	system("CLS");
	tictac obj2;
	obj2.maing();
	break;
	}
	case'c':
		{
			system("COLOR AF");
	
			cout<<"\a";	
	
			system("CLS");
			car obj4;
			obj4.cars();
			
			break;
		}
		
	case'd':
	{
	cout<<"\a";	
	system("COLOR CB");
	system("CLS");
	allspark obj3;
	obj3.gamora();
	break;
	}
}

	doom:
		cout<<"\n";
}
