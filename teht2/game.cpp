#include "game.h"

void Game::printGameResult()
{
    cout<<"You guessed the right answer = "<<randomNumber<<" with "<<numOfGuesses<<" guesses "<<endl;

}

Game::Game(int value)
{
    srand(time(0));
    maxNumber = value;
    cout << maxNumber << endl;
    cout<<"GAME CONSTRUCTOR: object initialized with "<<maxNumber<<" as a maximum value"<<endl;
    randomNumber = rand() %maxNumber;
}

Game::~Game()
{
    cout<<"GAME DESTRUCTOR: object cleared from stack memory"<<endl;

}

void Game::play()
{
    while (playerGuess != randomNumber){
        cout << "Give your guess between 1-" << maxNumber<<endl;
        cin>>playerGuess;

    if(playerGuess == randomNumber){
            cout << "Answer is right = "<<randomNumber<<endl;
        numOfGuesses ++;
        printGameResult();
    }
    else if(playerGuess <= randomNumber){
        cout <<"Your guess is too small"<<endl;
        numOfGuesses ++;
    }
    else if(playerGuess >= randomNumber){
        cout <<"Your guess is too big"<<endl;
        numOfGuesses ++;
    }
    }

}
