//*************************************************************
//
//Danil Alieinikov
//H00880905
//CSC122-01
//
//I certify that this is my work and where appropriate an extension
//of the starter code provided by the assignment
//*************************************************************
#include <iostream>

int main() {
    int size;

    // user prompt
    std::cout << "Enter the number of elements: ";
    std::cin >> size;

    // Validation
    if (size <= 0) {
        std::cerr << "Invalid array size.\n";
        return 1;
    }

    int* data = new int[size];

    // Input
    std::cout << "Enter " << size << " integers:\n";
    for (int i = 0; i < size; ++i) {
        std::cout << "Value " << i + 1 << ": ";
        std::cin >> data[i];
    }

    // Outputs
    std::cout << "\nArray output using array indexing:\n";
    for (int i = 0; i < size; ++i) {
        std::cout << "data[" << i << "] = " << data[i] << "\n";
    }
    std::cout << "\nArray output using pointer arithmetic:\n";
    for (int i = 0; i < size; ++i) {
        std::cout << "*(data + " << i << ") = " << *(data + i) << "\n";
    }
    delete[] data;
    return 0;
}
