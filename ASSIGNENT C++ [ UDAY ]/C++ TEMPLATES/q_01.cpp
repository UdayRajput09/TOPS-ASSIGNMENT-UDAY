#include <iostream> 
using namespace std; 

// Function template to swap two values 
template <class T> 
void SwapValues(T& val1, T& val2) 
{ 
	T temp = val1; 
	val1 = val2; 
	val2 = temp; 
} 

// Driver code 
int main() 
{ 
	// Declare and initialize two integer variables
	int num1 = 66, num2 = 92; 

	// Invoking the SwapValues() function template
	SwapValues(num1, num2); 
	
	// Output the swapped values
	cout << "Swapped values: " << num1 << " " << num2 << endl; 
	return 0; 
}

