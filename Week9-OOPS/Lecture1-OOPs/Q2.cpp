#include <iostream>
using namespace std;

int main()
{
    // Dynamic Memeory Allocation
    Animal *suresh = new Animal;
    // Addess 
    (*suresh).age = 14;
    (*suresh).type = "Lion";

    return 0;
}