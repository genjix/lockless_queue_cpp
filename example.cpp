// main.cpp
#include <iostream>
#include "lockless_queue.hpp"
using namespace obelisk;
 
int main()
{
    lockless_queue<int> s;
    s.produce(1);
    s.produce(2);
    s.produce(3);
    for (auto h: lockless_iterable(s))
    {
        std::cout << h << std::endl;
    }
}

