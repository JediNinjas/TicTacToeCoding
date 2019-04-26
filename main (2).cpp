//
//  main.cpp
//  tictactoe
//
//  Created by James Prochaska on 12/9/16.
//  Copyright © 2016 James Prochaska. All rights reserved.
//

#include <iostream>
#include <cstring>

using namespace std;

void table(char table[])
{

    cout << "  _" << table[0] <<"_|_"<< table[1] << "_|_"<< table[2]<< "_" << endl;
    cout << "  _" << table[3] <<"_|_"<< table[4] << "_|_"<< table[5]<< "_" <<endl;
    cout << "   " << table[6] << " | "<< table[7] << " | " << table[8] << " " << endl;
    
    cout << endl;
    
}
bool ask(char t[])
{
    int input;
    bool gameOver = false;
    
    cout << "Player 1... Please enter a number that is available above: ";
    
    do {
        cin >> input;
        if (t[input-1] == 'x' || t[input-1] == 'o') {
            cout << "That number has already been taken: ";
        }
    } while (t[input-1] == 'x' || t[input-1] == 'o');
    
    t[input-1] = 'x';
    
    table(t);
    
    if (t[0] == 'x' && t[1] == 'x' && t[2] == 'x')
    {
        cout << "Player one Wins" << endl;
        gameOver = true;
        
    }
    else if (t[0] == 'x' && t[3] == 'x' && t[6] == 'x')
    {
        cout << "Player one Wins" << endl;
        gameOver = true;
    }
    else if (t[6] == 'x' && t[7] == 'x' && t[8] == 'x')
    {
        cout << "Player one Wins" << endl;
        gameOver = true;
        
    }
    else if (t[1] == 'x' && t[4] == 'x' && t[7] == 'x')
    {
        cout << "Player one Wins" << endl;
        gameOver = true;
        
    }
    else if (t[2] == 'x' && t[5] == 'x' && t[8] == 'x')
    {
        cout << "Player one Wins" << endl;
        gameOver = true;
        
    }
    else if (t[0] == 'x' && t[4] == 'x' && t[8] == 'x')
    {
        cout << "Player one Wins" << endl;
        gameOver = true;
        
    }
    else if (t[2] == 'x' && t[4] == 'x' && t[6] == 'x')
    {
        cout << "Player one Wins" << endl;
        gameOver = true;
        
    }
    else if (t[3] == 'x' && t[4] == 'x' && t[5] == 'x')
    {
        cout << "Player one Wins" << endl;
        gameOver = true;
        
    }

    return gameOver;
}

bool ask2(char t[])
{
    int input2;
    bool gameOver = false;
    
    cout << "Player 2... Please enter a number that is available above: ";
    
    do {
        cin >> input2;
        if (t[input2-1] == 'x' || t[input2-1] == 'o') {
            cout << "That number has already been taken: ";
        }
    } while (t[input2-1] == 'x' || t[input2-1] == 'o');
    
    t[input2-1] = 'o';
    
    table(t);
    
    if (t[0] == 'o' && t[1] == 'o' && t[2] == 'o')
    {
        cout << "Player two Wins" << endl;
        gameOver = true;
    }
    else if (t[0] == 'o' && t[3] == 'o' && t[6] == 'o')
    {
        cout << "Player two Wins" << endl;
        gameOver = true;
    }
    else if (t[6] == 'o' && t[7] == 'o' && t[8] == 'o')
    {
        cout << "Player two Wins" << endl;
        gameOver = true;
        
    }
    else if (t[1] == '0' && t[4] == 'o' && t[7] == 'o')
    {
        cout << "Player two Wins" << endl;
        gameOver = true;
        
    }
    else if (t[2] == 'o' && t[5] == 'o' && t[8] == 'o')
    {
        cout << "Player two Wins" << endl;
        gameOver = true;
        
    }
    else if (t[0] == 'o' && t[4] == 'o' && t[8] == 'o')
    {
        cout << "Player two Wins" << endl;
        gameOver = true;
        
    }
    else if (t[3] == 'o' && t[4] == 'o' && t[5] == 'o')
    {
        cout << "Player two Wins" << endl;
        gameOver = true;
    }
    else if (t[2] == 'o' && t[4] == 'o' && t[6] == 'o')
    {
        cout << "Player two Wins" << endl;
        gameOver = true;
        
    }
    
    return gameOver;
}



int main ()
{
    char index[9] = {'1','2','3','4','5','6','7','8','9'};
    bool gameOver = false;
    
    table(index);
    gameOver = ask(index);
    gameOver = ask2(index);
    gameOver = ask(index);
    gameOver = ask2(index);
    if (gameOver == true) {
        return 0;
    }
    
    gameOver = ask(index);
    if (gameOver == true) {
        return 0;
    }
    gameOver = ask2(index);
    if (gameOver == true) {
        return 0;
    }
    gameOver = ask(index);
    if (gameOver == true) {
        return 0;
    }
    gameOver = ask2(index);
    if (gameOver == true) {
        return 0;
    }
    gameOver = ask(index);
    if (gameOver == true) {
        return 0;
    }
    
    cout << "The game is a tie!" << endl;
    
    return 0;
}
