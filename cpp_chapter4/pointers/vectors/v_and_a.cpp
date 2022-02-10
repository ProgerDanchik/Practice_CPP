#include <iostream>
#include <vector>
#include <string>
#include <array>

int main() {

	const int LENGTH = 10;

	std::vector<std::string> v_arr(LENGTH);
	v_arr[0] = "Egor";
	v_arr[1] = "Daniil";
	v_arr[2] = "Anna";
	v_arr[3] = "Dima";
	v_arr[4] = "Vlad";
	v_arr[5] = "Sasha";
	v_arr[6] = "Yarik";
	v_arr[7] = "Lena";
	v_arr[8] = "Nikita";
	v_arr[9] = "Julia";
	
	std::array<std::string, LENGTH> arr{
		"John",
		"Morgan",
		"Mika",
		"Lui",
		"Jordan",
		"Mike",
		"GAY",
		"Yellow",
		"Green",
		"Red"
	};
}
