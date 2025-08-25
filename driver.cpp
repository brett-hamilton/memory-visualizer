#include <iostream>

int global_int = 14;
static int static_int = 15;

int main() {
	int local_int1 = 16;
	int local_int2 = 17;
	int local_int3 = 18;

	int* heap_int = new int;

	*heap_int = 20;

	std::cout << "Address of Global Integer: " << &global_int << "\n";
	std::cout << "Address of Static Integer: " << &static_int << "\n";
	std::cout << "Address of Local Integer1: " << &local_int1 << "\n";
	std::cout << "Address of Local Integer2: " << &local_int2 << "\n";
	std::cout << "Address of Local Integer3: " << &local_int3 << "\n";
	std::cout << "  Address of Heap Integer: " << &heap_int << "\n";
	std::cout << " Address of Main function: " << (void*)&main << "\n";

	delete heap_int;

	return 0;
}