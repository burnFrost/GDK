//Core. Alpha version.

//C++ Libs.
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <random>
#include <limits>
#include <math.h>

//C++11.
#include <thread>
#include <chrono>

//glm.
//#include <glm/glm.hpp>
//#include <glm/gtc/bitfield.hpp>
//#include <glm/gtc/color_space.hpp>
//#include <glm/gtc/constants.hpp>
//#include <glm/gtc/epsilon.hpp>
//#include <glm/gtc/integer.hpp>
//#include <glm/gtc/matrix_access.hpp>
//#include <glm/gtc/matrix_integer.hpp>
//#include <glm/gtc/matrix_inverse.hpp>
//#include <glm/gtc/matrix_transform.hpp>
//#include <glm/gtc/noise.hpp>
//#include <glm/gtc/random.hpp>


//Namespaces.
using namespace std;
using namespace this_thread;
using namespace chrono;



//Object Comparison. WIP
//template <typename T> void function(const T& object)





//Creates a loop.
#define fastLoop(VALUE) for(int i = 0; i < (VALUE); i++)


//Inversion.

int invertInt(int var){
var = -var;
return var;
}

float invertFloat(float var){
var = -var;
return var;
}

//Terminal.
#define input(TEXT, VAR) cout << (TEXT); getline(cin, VAR)
#define print(TEXT) cout << (TEXT) << endl

//Time.
#define sec(TIME) sleep_for(seconds(TIME))
#define msec(TIME) sleep_for(milliseconds(TIME))


//DataConversion.
#define STR(NUMBER) to_string(NUMBER)
#define INT(TEXT) stoi(TEXT)

//Save the game. 
#define saveFile(FILE) ofstream saving((FILE))
#define save(KEY, VAR) saving << (KEY) << endl << (VAR) << endl

#define saved saving.close();

//Load the game. WIP
#define loadFile(FILE) ifstream loading((FILE))
#define load(VAR) loading >> VAR


//Sets a random seed for Random Number Generator based on clock.
#define seedrand srand(time(0))


//Random Number Generator.
int rng(int min, int max){
int R = min+(rand()%((max++)-min));
return R;}
