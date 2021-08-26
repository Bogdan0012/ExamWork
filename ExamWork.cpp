#include "C_2D.h"

int main()
{
    std::cout << "\tInput position of A: ";
    S_Position posA;
    std::cin >> posA.x >> posA.y;

    std::cout << "\n\tInput position of B: ";
    S_Position posB;
    std::cin >> posB.x >> posB.y;

    C_2D obj;
    obj.printPosition(posA, posB);

}
