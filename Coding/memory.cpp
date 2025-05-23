#include <iostream>

void causeMemoryLeak(void) {
    int* data = new int[100]; // Allocate memory for 100 integers
    // ... operations with data ...
    // Missing delete[] data; statement
    data[0] = 0;
}

int main() {
    causeMemoryLeak();
    // Memory allocated in causeMemoryLeak is now leaked
    causeMemoryLeak();
    int a,b,c;
    return 0;
}