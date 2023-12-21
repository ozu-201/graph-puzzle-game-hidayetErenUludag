//
// Created by eu034534 on 12/21/2023.
//

#include <string>
#include <sstream>
#include <iostream>
#include <winnls.h>
#include "main.h"
#include "fstream"
#include "vector"
#include <windows.h>


using namespace std;

#pragma execution_character_set( "utf-8" )

int main(){
//    SetConsoleOutputCP(CP_UTF8);
    SetConsoleOutputCP( 65001 );

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
    file.close();
}
