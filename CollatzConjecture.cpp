#include <iostream>

void Collatz(int x)
{
    int i = 1;
    while (x != 1)
    {
        if (x % 2 == 0)
        {
            x = x / 2;
        }
        else
        {
            x = x * 3 + 1;
        }
        std::cout << "Collatz iteration №" << i << " = " << x << std::endl;
        i++;
    }
}

int main()
{
    int x = 0;

    while (true)
    {
        std::cout << "Enter any positive integer: ";
        std::cin >> x;
        if (x > 0) 
        {
            std::cout << std::endl;
            break;
        }
        else 
        {
            std::cout << "This integer is less than zero! Try again..." << std::endl;
        }
    }
    Collatz(x);
}


