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
	cout<<a/5;
	return ;
}

void excessiveMemory()
{
    int a = 100000000000;
    int* arr = new int[a];

    return;
}

void indexOutOfBound()
{
	vector<int>arr = {0,1};
	cout<<arr[2];
	return ;
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
	int de, ef;
	causeMemoryLeak();
	causeMemoryLeak();	
	//testing start
	causeMemoryLeak;	//1
	divideByZero();		//2
	excessiveMemory;	//3
	indexOutOfBound();	//4
	infiniteRecur(3);	//5
    return 0;
}