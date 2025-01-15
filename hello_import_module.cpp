export module my_module;

namespace my_module {

export auto hello_world() -> const char * { return "Hello World!"; }

export auto add(int x, int y) -> int { return x + y; }

} // namespace my_module
