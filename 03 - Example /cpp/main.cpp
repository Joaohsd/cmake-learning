#include <iostream>
#include <helloConfig.h>

int main(int argc, char const *argv[])
{
    std::cout << "Welcome to " << PROJECT_NAME << "! VERSION: " 
            << HELLO_VERSION_MAJOR << "."  << HELLO_VERSION_MINOR << std::endl;

    std::cout << "Hello, " << argv[1] << "!" << std::endl;

    return 0;
}
