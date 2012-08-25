#include <csignal>
#include <cstdlib>
#include <iostream>

class HandlesSignals
{
public:
    HandlesSignals();
};

void handle_fpe_signal()
{
    std::cout << "FPE thrown" << std::endl;
    exit(0);
}

void signal_handler(int signal)
{
    switch (signal)
    {
    case SIGFPE:
        handle_fpe_signal();
        break;
    default:
        std::cout << "Unknown signal caught" << std::endl;
    }
}

int main()
{
    signal(SIGFPE, signal_handler); 
    int zero = 0;
    int a = 1/zero;
    return 0;
}
