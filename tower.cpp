/*
    Created by Eric Willoughby
    Tower game
*/

#include <iostream>
#include <time.h>
#include <string>
using namespace std;

void displayBoard(int numberInEachColumn, int colA, int colB, int colC);
bool isGameOver(int columnA, int columnB, int columnC);
void playerTurn(int & playerNumber, string player1Name, string player2Name, int & columnA, int & columnB, int & columnC);
string currentPlayerName(int playerNumber, string player1Name, string player2Name);
bool isValidColumn(char column, int columnA, int columnB, int columnC);
bool isValidAmount(char column, int amount, int columnA, int columnB, int columnC);

int main() {
    srand(time(NULL));

    int numberInEachColumn = 5 + rand() % (9 - 5 + 1);
    int columnA = numberInEachColumn;
    int columnB = numberInEachColumn;
    int columnC = numberInEachColumn;
    string player1Name = "";
    string player2Name = "";
    int player = 0;

    cout << "Enter player 1's name: ";
    getline(cin, player1Name);

    cout << "Enter player 2's name: ";
    getline(cin, player2Name);

    player = 1;

    while (!isGameOver(columnA, columnB, columnC)) {
        displayBoard(numberInEachColumn, columnA, columnB, columnC);
        playerTurn(player, player1Name, player2Name, columnA, columnB, columnC);
    }

    cout << endl << endl << "Game over!" << endl;
    cout << currentPlayerName(player, player1Name, player2Name) << " wins!!!" << endl;

    system("pause");
}

string currentPlayerName(int playerNumber, string player1Name, string player2Name) {
    if (playerNumber == 1) {
        return player1Name;
    } else {
        return player2Name;
    }
}

bool isGameOver(int colA, int colB, int colC) {
    bool bGameOver = false;

    if (colA == 0 && colB == 0 && colC == 0) {
        bGameOver = true;
    }
    return bGameOver;
}

void playerTurn(int & playerNumber, string player1Name, string player2Name, int & colA, int & colB, int & colC) {
    char column = ' ';
    int number = 0;

    cout << endl << currentPlayerName(playerNumber, player1Name, player2Name) <<  ", enter column to take from: ";
    cin >> column;
    column = toupper(column);

    while (!isValidColumn(column, colA, colB, colC)) {
        cout << column << " isn't a valid column.  Enter a valid column to take from: ";
        cin >> column;
        column = toupper(column);
    }

    cout << "Enter number to take: ";
    cin >> number;
    cin.clear();
    cin.ignore(100,'\n');

    while (!isValidAmount(column, number, colA, colB, colC)) {
        cout << number << " isn't a valid number for column " << column << ".  Enter a valid number to take: ";
        cin >> number;
        cin.clear();
        cin.ignore(100,'\n');
    }

    if (column == 'A') {
        colA = colA - number;
    } else if (column == 'B') {
        colB = colB - number;
    } else {
        colC = colC - number;
    }

    if (playerNumber == 1) {
        playerNumber = 2;
    } else {
        playerNumber = 1;
    }
}

bool isValidColumn(char column, int colA, int colB, int colC) {
    bool bValid = false;

    if (column == 'A') {
        bValid = (colA > 0);
    } else if (column == 'B') {
        bValid = (colB > 0);
    } else if (column == 'C') {
        bValid = (colC > 0);
    }

    return bValid;
}

bool isValidAmount(char column, int amount, int colA, int colB, int colC) {
    bool bValid = false;

    switch (column) {
        case 'A':
            bValid = (amount <= colA && amount > 0);
            break;
        case 'B':
            bValid = (amount <= colB && amount > 0);
            break;
        case 'C':
            bValid = (amount <= colC && amount > 0);
            break;
        default: cout << "Error";
            break;
    }

    return bValid;
}

void displayBoard(int numberInEachColumn, int colA, int colB, int colC) {
    system("cls");

    cout << " A   B   C" << endl;
    cout << "=== === ===" << endl;

    for (int i = numberInEachColumn; i >= 1; i--) {
        if (colA >= i) {
            cout << " " << i;
        } else {
            cout << "  ";
        }

        if (colB >= i) {
            cout << "   " << i;
        } else {
            cout << "    ";
        }

        if (colC >= i) {
            cout << "   " << i << endl;
        } else {
            cout << " " << endl;
        }
    }
}
