#include <string>
using namespace std;
class Player{
public:
    string name;
    int shotsTaken;
    int shotsMade;
    int passesAttempted;
    int passesMade;
    
    bool passBall();
    int takeShot(int shotValue);
};
