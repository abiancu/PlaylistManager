//The program is called DJ Playlist Manager
//It allows the user to create a playlist, which then ask the user to input songs length
//title, song quantity, among other information.



#include <iostream>
#include <string>
#include <cstring>
using namespace std;

//fucntions prototype
void printOption(int &_optionMenu);
void opt1(string &playlitsName, int &songsInPlaylist);
void opt2(string &songTitle, string &artist, float &songLength, string &genre);

//const int songs = 1;
int main() 
{
	
	//declaring variables
	string SongTitle, Artist, Genre, PlaylistName;
	float SongLength, AverageSong_Length, totalAverage;
	int SongsInPlaylist, OptionMenu=0;
	
	
	
	cout << "Welcome ot the DJ playlist manage" << endl;//welcome message
	printOption(OptionMenu);
	
	while (OptionMenu!=3)
	{
		

		switch (OptionMenu)
		{

		case 1:
			
			opt1(PlaylistName, SongsInPlaylist); // getting user input
			printOption(OptionMenu);
			break;

		case 2:
			opt2(SongTitle, Artist, SongLength, Genre);
			printOption(OptionMenu);
			break;

		default:
			cout << "please enter a valid option!" << endl;
			printOption(OptionMenu);
			break;

		}
		
		/*if (OptionMenu == 3)
		{
			break;
		}*/
	}
	cout << endl;
	cout << "Thank you for using the playlist manager!" << endl;
	
	

	
	/*cout << "Title\t" << "Artist\t " << "Length\t " << "Genre\t " << endl;
	cout << SongTitle << "\t " << Artist << "\t " << SongLength << "\t " << Genre << endl;*/
	
											
	

	/*cout << "Enter the name of your playlist: ";// ask for input
	cin >> PlaylistName;//reads user input
	cout << "how many songs are in the this playlist: "; 
	cin >> SongsInPlaylist;
	cout << "What is the song average length: ";
	cin >> AverageSong_Length;
	
	//getting the average
	totalAverage = AverageSong_Length * SongsInPlaylist;

	//displaying results
	cout << "your playlist name is " << PlaylistName << " and it is " << totalAverage << " long!" << endl;*/
	
	

	
	cout << endl;
	system("pause");
	return 0;
}

//functions
void printOption(int &_optionMenu)
{
	cout << "\nWhat would you like to do? \nPress 1 to create a playlist, press 2 to add songs to a playlist, or press 3 to exit: ";
	cin >> _optionMenu;
}

void opt1(string &playlitsName, int &songsInPlaylist)
{
	
	const int SIZE = 100;
	string titles[SIZE];
	
	cout << "Name of the playlist: ";
	cin >> playlitsName;
	cout << "How many songs are in " << playlitsName << ": ";
	cin >> songsInPlaylist;
	/****Ccreating a songs array****/	
	for (int i = 0; i < songsInPlaylist; i++)
	{
		cout << "Add Title: ";
		/*getline(cin, titles[i]);*/
		cin >> titles[i];
	}

	cout << "Your playlist is " << songsInPlaylist << " songs long";
	cout << "Titles: " << endl;
	cout << titles;
	cout << endl;
}

void opt2(string &songTitle, string &artist, float &songLength, string &genre)
{
	cout << "Add Title: ";
	cin >> songTitle;
	cout << "Artist: ";
	cin >> artist;
	cout << "Length: ";
	cin >> songLength;
	cout << "Genre: ";
	cin >> genre;
	cout << "Title\t\t" << "Artist\t\t " << "Length\t\t " << "Genre\t\t " << endl;
	cout << songTitle << "\t\t " << artist << "\t\t " << songLength << "\t\t " << genre << endl;

	cout << endl;
}

