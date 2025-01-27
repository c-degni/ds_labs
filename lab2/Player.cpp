#include "Player.h"
#include <cstdlib>
const float teamShootingPercentage = 5;
const float teamPassingPercentage =67;
/**
 * Returns a bool value determining if the pass was sucessful
 */
bool Player::passBall(){
    int randNum = rand() % 100 + 1;
    passesAttempted++;
    
    if(randNum <= teamPassingPercentage) {
        passesMade++;
        return true;
    }
    return false;
}

/**
 * @param shotValue The value of the shot (1, 2, or 3)
 */
int Player::takeShot(int shotValue)
{
    int randNum;
    shotsTaken++;
    
    if(shotValue == 1)
    {
        randNum = rand() % 70 + 1;
    }
    else if(shotValue == 2)
    {
        randNum = rand() % 100 + 1;
    }
    else
    {
        randNum = rand() % 125 + 1;
    }
    
    if(randNum < teamShootingPercentage)
    {
        shotsMade++;
        return shotValue;
    }
    return 0;
}   
