//Core. Alpha version.
#pragma once

//C++ Libs.
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <random>
#include <cstdlib>
#include <limits>
#include <math.h>
#include <ctime>

//C++11.
#include <thread>
#include <chrono>


//Namespaces.
using namespace std;
using namespace this_thread;
using namespace chrono;




//Object Comparison. WIP
//template <typename T> void function(const T& object)



//Creates a loop.
#define fastLoop(VALUE) for(int i = 0; i < (VALUE); i++)

//Terminal.
string input(string note){
	string result;
	cout << note;
	getline(cin, result);
	return result;
	}
#define print(TEXT) cout << (TEXT) << endl


//Threading.
#define vt(TYPE) vecT.emplace_back(TYPE)
vector<thread> vecT;

void jvt() {

	for (auto &t : vecT)
	t.join();
}


/*
void thread1(){
	cout << "Hello" << endl;
}
int main(){
thread t1(thread1);

t1.join();
}
*/

//Time. Must be in a thread.
#define sec(TIME) sleep_for(seconds(TIME))
#define msec(TIME) sleep_for(milliseconds(TIME))


//DataConversion.
#define str(NUMBER) to_string(NUMBER)
#define num(TEXT) stoi(TEXT)

//unsigned long long
#define ull unsigned long long

//max value check
#define limit(TYPE) numeric_limits<(TYPE)>::max();

//Random Number Generator.
#define randomEngine default_random_engine RNG(time(NULL))
#define random uniform_int_distribution<int>
#define randF uniform_real_distribution<float>








