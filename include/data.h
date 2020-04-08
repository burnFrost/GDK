#pragma once
#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

//New Data Object
#define ndo(X, Y) data (X); (X).file = (Y);

//Data management
class data{
    public:
        string file = "data";
        vector<string> v;

        //clear vector
        void cv(){
        v.clear();
        }

        //store value
        void sv(string key, string value){
        bool found = false;
        for(int i = 0; i < v.size(); i+=2){
            if(v[i] == key){
                v[i+1] = value;
                found = true;
                }
            }
        if(found == false){
            v.push_back(key);
            v.push_back(value);
            }
        }

        //get value
        string gv(string key){
        string value;
        for(int i = 0; i < v.size(); i+=2){
            if(v[i] == key){
                value = v[i+1];
                }
            }
        return value;
        }
        
        void save(){
            ofstream f(file);
            for(int i = 0; i < v.size(); i++){
                f << v[i] << endl;
            }
            f.close();
        }

        void load(){
            ifstream f(file);
            string x;
            v.clear();
            while(getline(f, x)){
                v.push_back(x);
            }
        }



};

