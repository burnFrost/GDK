//Early testing, some things may not work.
//UNF = Unfinished

//C++ Libs.
#include <iostream>
#include <string>
#include <fstream>
#include <random>


//glm.
#include <glm/glm.hpp>
#include <glm/gtc/bitfield.hpp>
#include <glm/gtc/color_space.hpp>
#include <glm/gtc/constants.hpp>
#include <glm/gtc/epsilon.hpp>
#include <glm/gtc/integer.hpp>
#include <glm/gtc/matrix_access.hpp>
#include <glm/gtc/matrix_integer.hpp>
#include <glm/gtc/matrix_inverse.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/noise.hpp>
#include <glm/gtc/random.hpp>



using namespace std;



//Object Comparison. UNF
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
int numberInput(string text){
cout << text;
int x;
while(!(cin >> x)){
	cin.clear();
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	cout << "Invalid input.  Try again: ";}
return x;
}
#define IN(TEXT, VAR) cout << (TEXT); getline(cin, VAR)
#define OUT(TEXT) cout << (TEXT) << endl

//DataConversion.
#define toStr(NUMBER) to_string((NUMBER))

//Save the game. UNF
#define savefile(FILE) ofstream saving((FILE))
#define save(DATA) saving << (DATA) << endl

#define saved saving.close();

//Load the game. UNF
#define loadfile(FILE) ifstream loading((FILE))
#define load(VARIABLE) loading >> VARIABLE


//Sets a random seed for Random Number Generator based on clock.
#define seedrand srand(time(0))


//Random Number Generator.
int rng(int min, int max){
int R = min+(rand()%((max++)-min));
return R;}
