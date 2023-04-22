#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;


int main() {
    char user, computer;
    int randnum;

    srand(5);
    randnum = rand() % 3;

    if (randnum == 0)
    {
        computer = 'R';
    }
    else if (randnum == 1)
    {
        computer = 'S';
    }
    else
    {
        computer = 'P';
    }
    
    cout << "enter R, S, P: ";
    cin >> user;

    if (computer == 'R')
    {
        if (user == 'R')
        {
            cout << "its a tie!";
        }
        else if (user == 'P')
        {
            cout << "you win! paper beats rock";
        }
        else
        {
            cout << "computer wins! rock beats scissors";
        }
    }
    else if (computer == 'P')
    {
        if (user == 'R')
        {
            cout << "you loose";
        }
        else if (user == 'P')
        {
            cout << "you win! paper beats rock";
        }
        else
        {
            cout << "computer wins! rock beats scissors";
        }
    }
    
    
}