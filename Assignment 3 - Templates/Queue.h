//
// Created by Wridzer on 27/11/2021.
//

#pragma once

#include <string>
#include <vector>
#include <iostream>

template<typename T>
class Queue {
public:
    Queue(){};
    void Put(T input){
        myQueue.push_back(input);
    };
    void Get(){
        for (auto a : myQueue) {
            std::cout << a << std::endl;
        }};
    int Size(){
        return myQueue.size();
    };

private:
    std::vector<T> myQueue;

};


