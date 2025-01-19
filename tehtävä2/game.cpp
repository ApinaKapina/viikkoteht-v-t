#include "game.h"
#include <iostream>

Game::Game(int mn)
{
    maxNumber = mn;
    cout << " Game konstruktori "
        << "maxNumber "
        << maxNumber
        << endl;
}


Game::~Game()
{
    cout << "Game destruktori"
         << endl;
}

    void Game::play() {

        cout << "Game play"
             << endl;

    srand(time(NULL));
        int randomNumber = rand() % maxNumber;

    cout << "Luku on alle " << maxNumber << endl;

        while(randomNumber != playerGuess) {

            cout << "Arvaus: " << endl;
            cin >> playerGuess;
            numOfGuesses++;

            if(randomNumber==playerGuess) {
                cout << "oikein"
                     << endl;
                printGameResults();
            } else if (playerGuess > randomNumber) {
                cout << "Luku on pienempi"
                     << endl;
            }else if (playerGuess<randomNumber) {
                cout << "Luku on suurempi"
                     << endl;
            }
}
}

    void Game::printGameResults() {
        cout << "Game printGameResults"
             << "Arvausten maara"
             << numOfGuesses
             << " "
             << "Oikea vastaus: "
             << playerGuess
             << endl;
    }
