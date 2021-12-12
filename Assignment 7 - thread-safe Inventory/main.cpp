#include <iostream>
#include <thread>
#include <mutex>
#include <vector>
#include <string>

using namespace std;

mutex mutexLock;

vector<string> inventory;

void AddItem(){
    const std::lock_guard<std::mutex> lock(mutexLock);

    inventory.push_back("item");
}

void RemoveItem(){
    const std::lock_guard<std::mutex> lock(mutexLock);

    inventory.pop_back();
}


int main() {

    thread T1(AddItem);
    thread T2(AddItem);
    thread T3(RemoveItem);
    thread T4(AddItem);

    T1.join();
    T2.join();
    T3.join();
    T4.join();

    thread T5(RemoveItem);
    thread T6(RemoveItem);
    thread T7(AddItem);
    thread T8(RemoveItem);

    T5.join();
    T6.join();
    T7.join();
    T8.join();

    cout << "Net: " << inventory.size() << endl;
}
