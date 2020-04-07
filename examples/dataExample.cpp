//example
#include <core.h>
#include <data.h>

int exp = 250;
int coins = 50;

//to create an object to reference stored data about the file and related vector
ndo(game, "game"); //new data object, for game file


//to save

game.sv("exp", str(exp)); //stores value, exp to the key "exp"
game.sv("coins", str(coins)); //stores value, coins to the key "coins"

game.save(); //saves the above game data which is stored in a vector to a file

//to load it

game.load(); //load the file into the vector

exp = num(game.gv("exp")); //gets value, from the key "exp" and stores it in the exp variable
coins = num(game.gv("coins")); //gets value, from the key "coins" and stores it in the coins variable
