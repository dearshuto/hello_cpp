#include <print>

int main()
{
    // Simple
    std::print("Hello print\n");

    // with format
    std::print("Hello format {:2d}(0x{:04x})\n", 120, 120);

    return EXIT_SUCCESS;
}
