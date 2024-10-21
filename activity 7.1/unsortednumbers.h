#include <iostream>
#include <vector>
using namespace std;

vector<int> generateRandomArray(int size) {
    vector<int> array(size);
    srand(time(0));
    for(int i = 0; i < size; ++i) {
        array[i] = rand() % 100 + 1; // Random numbers between 1 and 100
    }
    return array;
}
    void printArray(const vector<int>& array) {
    for(int num : array) {
        cout << num << " ";
    }
    cout << endl;
}

int main() {
    vector<int> array = generateRandomArray(100);
    cout << "Here is the unsorted array: ";
    printArray(array);
    return 0;
}
