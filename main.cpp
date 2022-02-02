#include <iostream>
#include "Cat.h"


int main() {
    std::cout << "Hello, Cat Lovers!" << std::endl;
    Cat cat("Persian");
    cat.printBreed();
    cat.speak();

    return 0;
}
