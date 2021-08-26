#include <iostream>
#include "src/test_class.h"

int main() {
    auto test = new TestClass();
    auto result = test->add(1, 2);
    std::cout << "Hello, World!" << result << std::endl;
    return 0;
}
