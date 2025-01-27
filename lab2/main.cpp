#include "Player.h"
#include <iostream>

/**
 * `
*/
string getPrettyStats;
int opposingPossession =30;
struct ScoreBoard{
    int teamScore;
    int oppScore;
};

/* 
 * Controls:
 * s: shoot
 * p: pass
 * g: see player stats
 * v: see score
 */

void readUserInput(Player players[], int playerWithBall, int numOfPlayers) {
    cout << "Enter input. " << players[playerWithBall].name << " has possession. " << endl
    << "Controls\n"
    << "s : shoot\np: pass\ng:See player stats\nt: see score";
    char playerInput;
    int shotValue;;
    cin >> playerInput;
    switch (playerInput) {
        case 's':
            cout >> "Which shot would you like the player to take? ";
            cin << shotValue;
            players[playerWithBall].takeShot(shotValue);
            break;
        case 'p':
            players[playerWithBall].passBall();
            break;
        case 'g':
            // Showing player stats
            for (int i = 0; i < numOfPlayers; i++) {
                cout << "Player Name: " << players[i].name << "\t\t";
            }
            break;
        case 'v':
            return;
            break;
    }
}

void opposingPossession(int currentPossesion){
    int shotProbability = rand() % 100 +1;
    int retainProbability = rand() % 100 +1;
    ScoreBoard ScoreBoard;
    if(shotProbability<60){
        int randNum = rand() %3+1;
        oppositionTakesShot(randNum,ScoreBoard);
    }
}

void oppositionTakesShot(int shotValue, ScoreBoard scoreBoard){
    if(shotValue==1){
        cout<<"Opponent made a free throw";
        scoreBoard.oppScore++;
    }else if(shotValue==2){
        cout<<"Opponent made a mid range shot";
        scoreBoard += 2;
    }else if(shotValue==3){
        cout<<"Opponent made a three pointer";
        scoreBoard+=3;
    }
}


int main()
{
    Player players[5] = {
        {"Lebron James"},
        {"Jason Tatum"},
        {"Anthony Edwards"},
        {"Ja Morant"},
        {"Stephen Curry"}
    };
    
    

    return 0;
}
