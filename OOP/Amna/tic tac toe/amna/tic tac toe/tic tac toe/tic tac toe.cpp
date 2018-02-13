//#include <conio.h>
//#include <iostream>
//using namespace std;
// 
//void ticTacToe() {
//    char w = 0, b[9] = { '1','2','3','4','5','6','7','8','9' };
//    char player[][9] = { "Player O", "Player X" };
//    unsigned int slot = 0, turn = 1, moves = 0;
//    for(;;) {
//        system("cls");
//        cout << "Tic Tac Toe!" << endl << endl;
//        cout << "   " << b[0] << "|" << b[1] << "|" << b[2] << endl << "   -+-+-" << endl;
//        cout << "   " << b[3] << "|" << b[4] << "|" << b[5] << endl << "   -+-+-" << endl;
//        cout << "   " << b[6] << "|" << b[7] << "|" << b[8] << endl << endl;
//        if (w || (++moves > 9)) {
//            if (w) cout << player[w=='X'] << " is the winner!!!" << endl << endl << endl;
//            else   cout << "No Winner!!!" << endl << endl << endl;
//            cin.clear(); cin.ignore(~0u>>1, '\n'); _getch();
//            return;
//        }
//        cout << player[turn^=1] << " Choose a Slot... ";
//        cin  >> slot;
//        if (slot < 1 || slot > 9 || b[slot-1] > '9') {
//            cout << "Please Choose A Valid Slot!!!" << endl;
//            cin.clear(); cin.ignore(~0u>>1, '\n'); _getch();
//            turn^=1; moves--;
//            continue;
//        }
//        b[slot-1] = turn ? 'X' : 'O';
//        ((((b[0]==b[1]&&b[0]==b[2]&&(w=b[0])) || (b[3]==b[4]&&b[3]==b[5]&&(w=b[3]))
//        || (b[6]==b[7]&&b[6]==b[8]&&(w=b[6])))||((b[0]==b[3]&&b[0]==b[6]&&(w=b[0]))
//        || (b[1]==b[4]&&b[1]==b[7]&&(w=b[1])) || (b[2]==b[5]&&b[2]==b[8]&&(w=b[2])))
//        ||((b[0]==b[4]&&b[0]==b[8]&&(w=b[0])) || (b[2]==b[4]&&b[2]==b[6]&&(w=b[2])))));
//    }
//}
// 
//int main() {
//    for(;;) ticTacToe();
//    return 0;
//}