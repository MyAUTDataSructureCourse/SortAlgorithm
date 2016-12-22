#include <iostream>
#include "sort.h"

int main() {
    int a[10];
    selection_sort<int>(a,10);
    std::cout << "Hello, World!" << std::endl;
    return 0;
}