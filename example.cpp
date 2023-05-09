 #include <iostream>

using MyType = int;

namespace t {
  constexpr int TEST = 1;
  const int TEST2 = 2;
}

/**
 * @brief TEST <code>Markup</code>
 */
class TestClass {

    int tester = 0;

    void thing()
    {
        MyType a = 1;
        int b = 2;
        int c = a + b;
        this->thing();
        this->tester = 5;
    }

    template <typename T, size_t SizeT>
    [[maybe_unused]] void thing2() noexcept
    {
        T a = SizeT;
        T b = 2;
        T c = a + b;
        this->thing();
    }

    void thing3();
};

void TestClass::thing3()
{
    MyType a = 1;
    int b = 2;
    int c = a + b;
    this->thing();
}

using namespace t;
// Comment
/* Block comment */
int main() {
    constexpr int TESTER = 1;
    const int TESTER2 = 1;  //!< Test

    static_assert(2 + 2 == 4);

    std::cout << "Hello, World!\n" << TEST << TEST2 << std::endl;
    TEST = 2;
    TEST2 = 3;

    int a /= 0x1;
    int b = a = static_cast<int>(1.5);

    bool c = true;

    return 0;
}
