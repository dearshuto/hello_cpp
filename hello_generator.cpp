#include <generator>

std::generator<int> TestCoroutine() {
  for (int i = 0; i < 10; i++) {
    if (i > 5) {
      co_return;
    }
    co_yield i;
  }
}

int main() {
  for (auto n : TestCoroutine()) {
    printf("%d\n", n);
  }
}
