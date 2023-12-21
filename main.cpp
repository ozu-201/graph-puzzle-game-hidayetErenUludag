//
// Created by eu034534 on 12/21/2023.
//

#include <string>
#include <iostream>
#include "fstream"
#include "vector"
#include <windows.h>
#include "src/List/Graph/Graph.h"
#include "src/List/Graph/Graph.cpp"
#pragma execution_character_set( "utf-8" )
using namespace std;


int main(){
    SetConsoleOutputCP( 65001 );

    list::Graph test;
    test.addEdge()

    vector<string> threes;
    vector<string> fours;
    vector<string> fives;

    string filePath = "C:\\Users\\TEMP.OZUN.000\\CLionProjects\\graph-puzzle-game-hidayetErenUludag\\dict.txt";
    fstream file(filePath);
    string line;
    if (getline(file,line)){
        string ad;
        vector<wstring> aldi;
        while(getline(file,line))
            switch(line.size()){
                case 3:
                    threes.push_back(line);
                     break;
                case 4:
                    threes.push_back(line);
                    break;

                case 5:
                    threes.push_back(line);
                    break;

            }
        }
    for(string g:threes){
        cout<<g<< endl;
    }
    for(string g:fours){
        cout<<g<< endl;
    }
    for(string g:fives){
        cout<<g<< endl;
    }
    file.close();
}
