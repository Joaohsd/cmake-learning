#include "../../DemoLib/cpp/adder.h"
#include <iostream>
#include <demoprojectConfig.h>

int main(int argc, char* argv[]){
    std::cout << "Project started..." << std::endl;

    std::cout << "Project " << argv[0] << " version: " << DEMOPROJECT_VERSION_MAJOR << "." << DEMOPROJECT_VERSION_MINOR << std::endl;
    
    std::cout << myNamespace::add(2, 3) << std::endl;

    return EXIT_SUCCESS;
}