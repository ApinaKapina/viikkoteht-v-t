#ifndef GAME_H
#define GAME_H

using namespace std;
class Game
{
public:
    ~Game();
    Game(int);
    void play();

private:
    int maxNumber;
    int playerGuess;
    int randomNumber;
    int numOfGuesses;

    void printGameResults();

};

#endif // GAME_H
