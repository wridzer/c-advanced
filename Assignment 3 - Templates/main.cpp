#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <array>
#include "Queue.h"

using namespace std;

array<string, 15> myStringArray = {"Frikandellen", "Pannenkoeken", "Kroketten", "Bamischijf"};
array<float, 15> myFloatArray = {1 , 5, 1.5, 53, 5948.564, 5641, 9, 4, 5.6};

template<typename T>
void Sorter(T array){
    sort(array.begin(), array.end());
    for (auto a : array) {
        cout << a << endl;
    }
}

int main() {

    Sorter(myStringArray);
    Sorter(myFloatArray);

    myFloatArray[10] = 4.35;
    myFloatArray[11] = 6.546;

    myStringArray[5] = "Gehaktballen";
    myStringArray[6] = "fried chicken";

    Sorter(myStringArray);
    Sorter(myFloatArray);

    Queue<int> myQueue;
    cout << "my queue: " << endl;
    for (int i: {5, 5, 6, 9, 7, 3, 4, 5, 4}) {
        myQueue.Put(i);
    }
    myQueue.Get();
    cout << "Queue length is: " << myQueue.Size() << endl;

    return 0;
}
