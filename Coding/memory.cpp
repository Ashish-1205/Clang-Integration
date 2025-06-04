#include <iostream>

void causeMemoryLeak(void) {
    int* data = new int[100]; // Allocate memory for 100 integers
    // ... operations with data ...
    // Missing delete[] data; statement
    data[0] = 0;
}

void causeMemoryLeakk(void) {
    int* databb = new int[100]; // Allocate memory for 100 integers
    // ... operations with data ...
    // Missing delete[] data; statement
    databb[0] = 0;
}

void causeMemoryLleakk(void) {
    int* databb = new int[100]; // Allocate memory for 100 integers
    // ... operations with data ...
    // Missing delete[] data; statement
    databb[0] = 0;
}

void excessiveMemory()
{
    int a = 100000000000;
    int* arr = new int[a];

    return;
}

void infiniteRecur(int a)
{
    return infiniteRecur(a);
}

int main() {
    causeMemoryLeak();
    // Memory allocated in causeMemoryLeak is now leaked
    causeMemoryLeak();
    int a,b,c;
	causeMemoryLeakk();
	causeMemoryLleakk();
	excessiveMemory();
	infiniteRecur(5);
    return 0;
}