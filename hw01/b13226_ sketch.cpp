//By Sanjeev Khare, Assignment 1, Embedded systems.
//This program does "etch a sketch ". Give size of board. 
//Then give starting point.
//Navigate using asdw keys.


#include <iostream>
#include <string>

using namespace std;


 	void options()
 	{

	 	cout << "These are your options: " << endl;
	 	cout << "Press a to go left" << endl;
		cout << "Press s to go down" << endl;
	 	cout << "Press d to go right" << endl;
	 	cout << "Press w to go up" << endl;
	 	cout << "Press q to quit." << endl;
 	}

int main()
 {
 	int a =0, b =0, x =0, y =0,p = 1,t =1;
 	cout << "Enter the dimensions of board" << endl;
 
 	cin >> a;
 	cin >> b;

 	char board[a][b];

 	for (int i = 0; i <a; i++)
 	{
 		for (int j = 0; j < b; ++j)
 		{
 			board[i][j] = '.';
 		}
 	}


 	while (t == 1)
 	{
		cout << "Enter the starting point." << endl;
		cin >> y;
 		cin >> x;

 		if (x < a and x >= 0 and y <b and y >= 0)
	 	{
	 		board[x][y] = 'x';
	 		t =0;
	 	}

	 	else
	 	{
	 		cout << "Out of range" << endl;
	 	} 
 	}

 		for (int i = 0; i <a; i++)
 		{
	 		for (int j = 0; j < b; ++j)
	 		{
	 			cout << board[i][j] << " ";
	 		}
	 		cout << endl;
 		}

	while(1)

	{	
		options();
		string z;
		cin  >> z;

 		if(z == "a" or z == "A")
 		{
 			y--;
 			if (x < a and x >= 0 and y <b and y >= 0)
		 	{
		 		board[x][y] = 'x';
		 	}

		 	else cout<< "Out of range" <<endl;


		 	for (int i = 0; i <a; i++)
	 		{
		 		for (int j = 0; j < b; ++j)
		 		{
		 			cout << board[i][j] << " " ;
		 		}
		 		cout << endl;
	 		}	
	 		 		}

 		else if(z == "s" or z == "S")
 		{
 			x++;
 			if (x < a and x >= 0 and y <b and y >= 0)
		 	{
		 		board[x][y] = 'x';
		 	}

		 	else cout<< "Out of range" <<endl;
		 	for (int i = 0; i <a; i++)
	 		{
		 		for (int j = 0; j < b; ++j)
		 		{
		 			cout << board[i][j] << " ";
		 		}
		 		cout << endl; 			
 			}
 		}

 		else if(z == "d" or z == "D")
 		{
 			y++;
 			if (x < a and x >= 0 and y <b and y >= 0)
		 	{
		 		board[x][y] = 'x';
		 	}

		 	else cout<< "Out of range" <<endl;
		 	for (int i = 0; i <a; i++)
	 		{
		 		for (int j = 0; j < b; ++j)
		 		{
		 			cout << board[i][j] << " ";
		 		}
		 		cout << endl;
	 		}

	 	}
		else if(z == "w" or z == "W")
 		{
 			x--;
 			if (x < a and x >= 0 and y <b and y >= 0)
		 	{
		 		board[x][y] = 'x';
		 	}

		 	else cout<< "Out of range" <<endl;
		 	for (int i = 0; i <a; i++)
	 		{
		 		for (int j = 0; j < b; ++j)
		 		{
		 			cout << board[i][j] << " ";
		 		}
		 		cout << endl;
	 		}
	 	}
		else if(z == "q" or z == "Q")
 		{
		
		cout << "Bye" <<endl;
		break;
 		}
	}
	return 0;
}
	
		


