lps
===========

Longest Palindromic Subarray

Usage
=====

````cpp

#include "lps.h"

#include <iostream>
#include <vector>

int main() {
    std::vector<int> v = { 1, 3, 1, 2, 3, 2, 1, 5 };

    std::cout << util::longest_palindromic_subarray(v.begin(), v.end()) << std::endl;

    return 0;
}
```
