#include <iostream>

int global_int = 14;
static int static_int = 15;

void recursive(int depth) {
	int local_var = depth;

	std::cout << "Depth " << depth << " local_var @ " << &local_var << "\n";
	if (depth < 5) {
		recursive(depth + 1);
	}
}

int main() {
	int local_int = 16;

	int* heap_int = new int;

	*heap_int = 17;

	// Display addresses and values for declared variables and main function
	std::cout << "     Address of Global Integer: " << &global_int << " | Value: " << global_int << "\n";
	std::cout << "     Address of Static Integer: " << &static_int << " | Value: " << static_int << "\n";
	std::cout << "      Address of Local Integer: " << &local_int << " | Value: " << local_int << "\n";
	std::cout << "       Address of Heap Integer: " << &heap_int << " | Value: " << *heap_int << "\n";
	std::cout << "      Address of Main function: " << (void*)&main << "\n";
	std::cout << " Address of Recursive function: " << (void*)&recursive << "\n";

	std::cout << "\n";

	// Show stack behavior in recursive function
	recursive(1);

	// Clean up
	std::cout << "\n";
	delete heap_int;

	return 0;
}