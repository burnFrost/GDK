#pragma once

#include <limits>

using namespace std;

//value types

//simax 32767
#define si short int
#define simax numeric_limits<short int>::max()

//usimax 65535
#define usi unsigned short int
#define usimax numeric_limits<unsigned short int>::max()

//intmax 2147483647
#define intmax numeric_limits<int>::max()

//uintmax 2147483647
#define uint unsigned int
#define uintmax numeric_limits<int>::max()

//longmax 9223372036854775807
#define longmax numeric_limits<long>::max()

//ulmax 18446744073709551615
#define ul unsigned long
#define ulmax numeric_limits<unsigned long>::max()

//llmax 9223372036854775807
#define ll long long
#define llmax numeric_limits<long long>::max()

//ullmax 18446744073709551615
#define ull unsigned long long
#define ullmax numeric_limits<unsigned long long>::max()
