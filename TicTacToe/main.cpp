#include <iostream>
#include <cstdlib>
using namespace std;

char matrix[3][3] = { '1','2','3','4','5','6','7','8','9'};
char player = 'X';
int n;
string r;

void draw()
{
    cout << endl << endl << "Player 1 = X" << endl;
    cout << "Player 2 = O";
    cout << endl << endl << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << matrix [i][j] << " " << " ";
        }
    {
        exit(0);
    }
        cout << endl << endl;
    }
}

void input()
{
    int a;
    cout << endl << endl << "Press the number you want in the field: ";
    cin >> a;

    if (a == 1001)
    {
        exit(0);
    }
    else if (a == 1)
    {
        if (matrix[0][0] == '1')
            matrix[0][0] = player;
        else
        {
            cout << "Field is taken. Try again.";
            input();
        }
    }
    else if (a == 2)
    {
        if (matrix[0][1] == '2')
            matrix[0][1] = player;
        else
        {
            cout << "Field is taken. Try again.";
            input();
        }
    }
    else if (a == 3)
    {
        if (matrix[0][2] == '3')
            matrix[0][2] = player;
        else
        {
            cout << "Field is taken. Try again.";
            input();
        }
    }

     else if (a == 4)
    {
        if (matrix[1][0] == '4')
            matrix[1][0] = player;
        else
        {
            cout << "Field is taken. Try again.";
            input();
        }
    }
    else if (a == '5')
    {
        if (matrix[1][1] == '5')
            matrix[1][1] = player;
        else
        {
            cout << "Field is taken. Try again.";
            input();
        }
    }
    else if (a == '6')
    {
        if (matrix[1][2] == '6')
            matrix[1][2] = player;
        else
        {
            cout << "Field is taken. Try again.";
            input();
        }
    }

    else if (a == '7')
    {
        if (matrix[2][0] == '7')
            matrix[2][0] = player;
        else
        {
            cout << "Field is taken. Try again.";
            input();
        }
    }
    else if (a == 8)
    {
        if (matrix[2][1] == '8')
            matrix[2][1] = player;
        else
        {
            cout << "Field is taken. Try again.";
            input();
        }
    }
    else if (a == 9)
    {
        if (matrix[2][2] == '9')
            matrix[2][2] = player;
        else
        {
            cout << "Field is taken. Try again.";
            input();
        }
    }
    else if (a != 9 || 8 || 7 || 6 || 5 || 4 || 3 || 2 || 1)
    {
        cout << endl << "Invalid Choice. Try again.";
        input();
    }
}

void toggleplayer()
{
    if (player == 'X')
        player = 'O';
    else
        player = 'X';
}

char win()
{
    if (matrix[0][0] == 'X' && matrix[0][1] == 'X' && matrix[0][2] == 'X')
        return 'X';
    if (matrix[1][0] == 'X' && matrix[1][1] == 'X' && matrix[1][2] == 'X')
        return 'X';
    if (matrix[2][0] == 'X' && matrix[2][1] == 'X' && matrix[2][2] == 'X')
        return 'X';
    if (matrix[0][0] == 'X' && matrix[1][0] == 'X' && matrix[2][0] == 'X')
        return 'X';
    if (matrix[0][1] == 'X' && matrix[1][1] == 'X' && matrix[2][1] == 'X')
        return 'X';
    if (matrix[0][2] == 'X' && matrix[1][2] == 'X' && matrix[2][2] == 'X')
        return 'X';
    if (matrix[0][0] == 'X' && matrix[1][1] == 'X' && matrix[2][2] == 'X')
        return 'X';
    if (matrix[0][2] == 'X' && matrix[1][1] == 'X' && matrix[2][0] == 'X')
        return 'X';

    if (matrix[0][0] == 'O' && matrix[0][1] == 'O' && matrix[0][2] == 'O')
        return 'O';
    if (matrix[1][0] == 'O' && matrix[1][1] == 'O' && matrix[1][2] == 'O')
        return 'O';
    if (matrix[2][0] == 'O' && matrix[2][1] == 'O' && matrix[2][2] == 'O')
        return 'O';
    if (matrix[0][0] == 'O' && matrix[1][0] == 'O' && matrix[2][0] == 'O')
        return 'O';
    if (matrix[0][1] == 'O' && matrix[1][1] == 'O' && matrix[2][1] == 'O')
        return 'O';
    if (matrix[0][2] == 'O' && matrix[1][2] == 'O' && matrix[2][2] == 'O')
        return 'O';
    if (matrix[0][0] == 'O' && matrix[1][1] == 'O' && matrix[2][2] == 'O')
        return 'O';
    if (matrix[0][2] == 'O' && matrix[1][1] == 'O' && matrix[2][0] == 'O')
        return 'O';

    return '/';
}

int main()
{
    int n = 0;
    cout << "Tic Tac Toe v1" << endl;
    cout << "--------------" << endl;
    system("TITLE Tic Tac Toe");
    system("COLOR a");
    draw();
    while (1)
    {
        n++;

        input();

        system("cls");

        draw();

        if (win() == 'X')
        {
            cout << "Player 1 Wins!!!" << endl << endl;
            break;
        }
        if (win() == 'O')
        {
            cout << "Player 2 Wins!!!" << endl << endl;
            break;
        }
        else if (win() == '/' && n == 9)
        {
            cout << "It's a Draw!!!";
            break;
        }

        toggleplayer();
    }
    system("PAUSE");
    return 0;
}
