#include <iostream>

void causeMemoryLeak(void) {
    int* data = new int[100]; // Allocate memory for 100 integers
    // ... operations with data ...
    // Missing delete[] data; statement
    data[0] = 0;
}

void divideByZero()
{
	int a = 5;
	cout<<a/0;
	return ;
}

void excessiveMemory()
{
    int a = 100000000000;
    int* arr = new int[a];

    return;
}

int main() {
    causeMemoryLeak();
    // Memory allocated in causeMemoryLeak is now leaked
    causeMemoryLeak();
    int a,b,c;
	int de, ef;
	excessiveMemory();
	excessiveMemory();
    return 0;
}