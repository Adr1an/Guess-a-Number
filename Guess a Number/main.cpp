//
//  main.cpp
//  C++ Class
//
//  Created by Adrian Brink on 08/04/2013.
//  Copyright (c) 2013 Adrian Brink. All rights reserved.
//

#include <stdlib.h>
#include <iostream>

using namespace std;
int main()
{
    int agreed = 1;
    
    while (agreed == 1)
        
    {
        int trycount = 0;
        int counter = 0;
        int guess = 0;
        int number = rand()%100;
        
        cout << "Guess the number out of 100. You can choose how many times you want to be able to guess. \n\n";
        cout << "Please enter the number of guesses: ";
        cin >> trycount;
        
        while(guess!=number && counter<trycount)
        {
            
            cout << "Please enter a guess: ";
            cin >> guess;
            if(guess < number)
                cout<<"Too low"<<endl;
            
            if(guess>number)
                cout<<"Too high"<<endl;
            
            counter++;
        }
        
        if(guess==number)
            cout<<"You guessed the number. \n\n";
        else
            
            cout<<"Sorry, the number was: " << number << "\n\n";
        
        cout << "If you would like to play again, please enter a 1. If you would like to stop, please enter a 0: ";
        cin >> agreed;
        
        cout << "\n\n\n";
        
    }
    
    cout << "Thank you for playing."<<endl;
    
    
    
    return 0;
}