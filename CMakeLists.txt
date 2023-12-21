cmake_minimum_required(VERSION 3.25)
project(graph_puzzle_game_hidayetErenUludag)

set(CMAKE_CXX_STANDARD 14)

add_executable(graph_puzzle_game_hidayetErenUludag
        puzzle_game.cpp main.cpp List/Graph/EdgeList.h List/Graph/EdgeList.cpp List/Graph/Edge.cpp List/Graph/Graph.cpp List/DoublyLinkedList.cpp main.cpp main.h)
