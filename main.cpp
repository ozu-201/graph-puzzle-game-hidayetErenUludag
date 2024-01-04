//
// Created by eu034534 on 12/21/2023.
//

#include <string>
#include <iostream>
#include "fstream"
#include "vector"
#include "src/Array/Graph/Graph.h"
#include <windows.h>
#pragma execution_character_set( "utf-8" )
using namespace std;

//Finds if two strings have only one change by parsing the strings.
bool isAdj(string first, string second){
    int diffCounter = 0;
    for(int i = 0; i<first.length(); i++){
        if( first[i] != second[i]){
            diffCounter ++;
        }
        if(diffCounter > 1){
            return false;
        }
    }
    return true;
}
//Adds edge if the adjacency is satisfied.
void addEdgeIfAdj(std::vector<std::string> length, array::Graph my_Graph){
    for(int i = 0; i<length.size(); i++){
        for(int j = i+1; j<length.size();j++){
            if(isAdj(length[i],length[j])){
                my_Graph.addEdge(i,j);
                my_Graph.addEdge(j,i);
            }
        }
    }
}

int shortestPath(string start, string end, array::Graph my_graph,std::vector<std::string> lengthcome){
    int lenght = start.size();
    int lenght2 = end.size();
    if(lenght != lenght2 || lenght<3 || lenght>5){
        cout << "requirements are not met" << endl;
        return 0;
    }
    bool* visited = new bool[lengthcome.size()];
    my_graph.breadthFirstSearch(visited, 4);
    return 1;
}

int main(){
    //Changes the console output to utf-98 to be able to display turkish characters.
    SetConsoleOutputCP( 65001 );

    vector<string> threes;
    vector<string> fours;
    vector<string> fives;

    string filePath = "C:\\Users\\TEMP.OZUN.000\\CLionProjects\\graph-puzzle-game-hidayetErenUludag\\dict.txt";
    fstream file(filePath);
    string line;
    int x = 0;//x, y, z keeps count of the graphs sizes
    int y = 0;
    int z = 0;
    if (getline(file,line)){
        string ad;
        vector<wstring> aldi;
        while(getline(file,line))//separates the strings based on their lengths.
            switch(line.size()){
                case 3:
                    threes.push_back(line);
                    x ++;
                    break;
                case 4:
                    fours.push_back(line);
                    y++;
                    break;

                case 5:
                    fives.push_back(line);
                    z++;
                    break;
            }
    }
    array::Graph threeGraph = array::Graph(x);
    array::Graph foursGraph = array::Graph(y);
    array::Graph fivesGraph = array::Graph(z);
    addEdgeIfAdj(threes,threeGraph);
    addEdgeIfAdj(fours,foursGraph);
    addEdgeIfAdj(fives,fivesGraph);

    for(string& g:threes){
        cout<<g<< endl;
    }
    for(string& g:fours){
        cout<<g<< endl;
    }
    for(string& g:fives){
        cout<<g<< endl;
    }
    file.close();

    shortestPath("cali","cati",threeGraph,threes);
}


