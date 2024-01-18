#ifndef GAME_H
#define GAME_H
#include <iostream>
using namespace std;

class Game
{
private:
    int maxNumber;
    int playerGuess;
    int randomNumber;
    int numOfGuesses;
    void printGameResult();
public:
    Game(int value);
    ~Game();
    void play();
};

#endif // GAME_H
