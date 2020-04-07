#pragma once
#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

//Data management
class data{
    public:
        string file = "data";
        vector<string> v;

        void cv(){
        v.clear();
        }

        void sv(string key, string value){
        v.push_back(key);
        v.push_back(value);
        }

        string gv(string key){
        string value;
        for(int i = 0; i < v.size(); i = i + 2){
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
            while(f >> x){
                v.push_back(x);
            }
        }



};

