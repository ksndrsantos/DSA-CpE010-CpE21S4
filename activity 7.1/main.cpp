#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>
using namespace std;

vector<int> generateRandomArray(int size) {
    vector<int> array(size);
    srand(time(0)); // Seed the random number generator
    for (int i = 0; i < size; ++i) {
        array[i] = rand() % 100 + 1; // Random numbers between 1 and 100
    }
    return array;
}

void printArray(const vector<int>& array) {
    for (size_t i = 0; i < array.size(); ++i) {
        cout << array[i] << " "; 
    }
    cout << endl; // New line after printing
}

// Simplified Shell sort implementation
void shellSort(vector<int>& array, size_t size) {
    for (size_t gap = size / 2; gap > 0; --gap) { // Start with a large gap and decrement by 1
        for (size_t i = gap; i < size; ++i) { // Loop through the array
            int temp = array[i]; // Value to place
            size_t j = i;

            // Shift elements to find the right place for temp
            while (j >= gap && array[j - gap] > temp) {
                array[j] = array[j - gap];
                j -= gap;
            }
            array[j] = temp; // Place temp in its position
        }
    }
}

int main() {
    vector<int> array = generateRandomArray(100);
    cout << "Here is the unsorted array: ";
    cout << endl;
    printArray(array);

	cout << endl;
	cout << "===================================================================";
	cout <<endl;
	cout <<endl;
    // Sort the array using Shell sort
    shellSort(array, array.size());
    cout << "Here is the sorted array: ";
    cout << endl;
    printArray(array); 

    return 0;
}

