#include <iostream>
#include "ghc/filesystem.hpp"

auto main(int argc, char** argv) -> int {
    std::cout << ghc::filesystem::weakly_canonical(argv[0]) << std::endl;
}
