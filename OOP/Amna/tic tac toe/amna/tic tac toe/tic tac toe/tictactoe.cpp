//#include <iostream>
//#include <string>
//using namespace std;
//
//bool gamedone,turn;
//int choice,player;
//string space[10];
//
//void win(bool x)
//{
//	if (x == true) {
//		player = (player == 1) ? 2 : 1;
//   		cout << "Player " << player << " Won!!!" << endl << endl;
//	}
//	else cout << "It's a stale mate!" << endl << endl;
//	gamedone = true;
//	system("pause");
//}
//
//void checkwin()
//{
//	if (space[1] == space[2] && space[2] == space[3]) win(true);
//	else if (space[4] == space[5] && space[5] == space[6]) win(true);
//	else if (space[7] == space[8] && space[8] == space[9]) win(true);
//	else if (space[1] == space[4] && space[4] == space[7]) win(true);
//	else if (space[2] == space[5] && space[5] == space[8]) win(true);
//	else if (space[3] == space[6] && space[6] == space[9]) win(true);
//	else if (space[1] == space[5] && space[5] == space[9]) win(true);
//	else if (space[3] == space[5] && space[5] == space[7]) win(true);
//	else if (space[1] != "1" && space[2] != "2" && space[3] != "3" && space[4] != "4" && space[5] != "5" && space[6] != "6" && space[7] != "7" && space[8] != "8" && space[9] != "9") win(false);
//}
//
//int main()
//{	
//	start:
//	space[0] = "0";
//	space[1] = "1";
//	space[2] = "2";
//	space[3] = "3";
//	space[4] = "4";
//	space[5] = "5";
//	space[6] = "6";
//	space[7] = "7";
//	space[8] = "8";
//	space[9] = "9";
//	gamedone = false;
//	player = 1;
//	guess:
//	system("cls");
//	cout << "Tic Tac Toe" << endl << endl;
//	cout << "Player 1 (X)  -  Player 2 (O)" << endl << endl;
//	cout << endl;
//	cout << "     |     |     " << endl; 
//	cout << "  " << space[1] << "  |  " << space[2] << "  |  " << space[3] << endl;
//	cout << "_____|_____|_____" << endl; 
//	cout << "     |     |     " << endl; 
//	cout << "  " << space[4] << "  |  " << space[5] << "  |  " << space[6] << endl;
//	cout << "_____|_____|_____" << endl; 
//	cout << "     |     |     " << endl; 
//	cout << "  " << space[7] << "  |  " << space[8] << "  |  " << space[9] << endl;
//	cout << "     |     |     " << endl << endl; 
//	checkwin();
//	if (gamedone == true) goto start;
//	cout << "Player " << player << ", enter a number:  ";
//	cin >> choice;
//	if (choice == 1 && space[1] == "1") { 
//		space[1] = (player == 1) ? "X" : "O"; 
//		player = (player == 1) ? 2 : 1;
//	}
//	if (choice == 2 && space[2] == "2") {
//		space[2] = (player == 1) ? "X" : "O";
//		player = (player == 1) ? 2 : 1;
//	}
//	if (choice == 3 && space[3] == "3") {
//		space[3] = (player == 1) ? "X" : "O";
//		player = (player == 1) ? 2 : 1;
//	}
//	if (choice == 4 && space[4] == "4") {
//		space[4] = (player == 1) ? "X" : "O";
//		player = (player == 1) ? 2 : 1;
//	}
//	if (choice == 5 && space[5] == "5") {
//		space[5] = (player == 1) ? "X" : "O";
//		player = (player == 1) ? 2 : 1;
//	}
//	if (choice == 6 && space[6] == "6") {
//		space[6] = (player == 1) ? "X" : "O";
//		player = (player == 1) ? 2 : 1;
//	}
//	if (choice == 7 && space[7] == "7") {
//		space[7] = (player == 1) ? "X" : "O";
//		player = (player == 1) ? 2 : 1;
//	}
//	if (choice == 8 && space[8] == "8") {
//		space[8] = (player == 1) ? "X" : "O";
//		player = (player == 1) ? 2 : 1;
//	}
//	if (choice == 9 && space[9] == "9") {
//		space[9] = (player == 1) ? "X" : "O";
//		player = (player == 1) ? 2 : 1;
//	}
//	goto guess;
//}