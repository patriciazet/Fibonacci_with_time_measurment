#include <iostream>
#include <chrono>
#include <iomanip>

long fibonacci(unsigned n)
{
    if (n < 2) return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
    auto start = std::chrono::steady_clock::now(); 
    std::cout << "fib(45) = " << fibonacci(45) << std::endl;
    auto end = std::chrono::steady_clock::now(); 

    std::chrono::duration<double, std::milli>elapsed = end - start;

    auto functionDuration = std::chrono::duration_cast<std::chrono::milliseconds>(end - start).count() / 1000.0;
    
    std::cout << "Calculation takes: " << functionDuration << "s" << std::endl;
    std::cout << "Calculation takes: " << elapsed.count() << "ms" << std::endl;
}


