#include <iostream>

namespace t {
  constexpr int TEST = 1;
  const int TEST2 = 2;
}

class TestClass {
    void thing()
    {
        int a = 1;
        int b = 2;
        int c = a + b;
        this->thing();
    }
};

using namespace t;
// Comment
int main() {
    std::cout << "Hello, World!\n" << TEST << TEST2 << std::endl;
    TEST = 2;
    TEST2 = 3;

    int a /= 0;
    int b = a = 1;

    bool c = true;

    return 0;
}
