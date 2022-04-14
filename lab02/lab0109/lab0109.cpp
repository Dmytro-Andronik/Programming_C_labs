#include <iostream>
using namespace std;

int main()
{
    int X, Y, Z, tempo;
    cout << "X = ";
    cin >> X;
    cout << "Y = ";
    cin >> Y;
    cout << "Z = ";
    cin >> Z;
    if (X == Y && Y == Z)
    {

    }
    else if (X == Y)
    {
        if (X > Z)
        {
            X = Z;
            Z = Y;
            Y = Z;

        }

    }
    else if (Y == Z)
    {
        if (X > Y)
        {
            Y = X;
            X = Z;
            Z = Y;
        }
    }
    if (X < Y && X < Z)
    {
        if (Y < Z)
        {


        }
        else
        {
            tempo = Z;
            Z = Y;
            Y = tempo;

        }
    }
    else if (Y < X && Y < Z)
    {
        tempo = X;
        X = Y;
        if (tempo < Z)
        {
            Y = tempo;
        }
        else {
            Y = Z;
            Z = tempo;
        }
    }
    else if (Z < X && Z < Y)
    {
        tempo = X;
        X = Z;
        if (tempo < Y)
        {
            Z = Y;
            Y = tempo;
        }
        else
        {
            Z = tempo;

        }
    }
    cout << "X = " << X << " " << "Y = " << Y << " " << "Z = " << Z;
    return 0;
}