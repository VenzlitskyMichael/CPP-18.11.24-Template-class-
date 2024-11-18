#include "Forward.h"
using namespace std;

int main() {
	srand(time(NULL));
    Point<int>obj1(0);
	obj1.InitRandom();
	obj1.Print();
	obj1.Init(10, 5);
	obj1.Print();
}
