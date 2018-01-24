namespace Psyche{
	int rand(){
	return 5;
	}
}
#include <iostream>
#include <time.h>
int main() {
	srand(time(NULL));
	int RandNum = rand();
	int FakeNum;
	FakeNum = Psyche::rand();
	std::cout << RandNum << std::endl;
	std::cout << FakeNum << std::endl;
	system("pause");
}