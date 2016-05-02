#pragma once

#include <iterator>

namespace util {

/* O(n^2) */
template <typename Iterator>
int longest_palindromic_substring(Iterator begin, Iterator end) {
    int max_length = 0;

    for (Iterator it = begin; it != end; ++it) {
        for (auto prev = 0; prev < 2; ++prev) {
            if (it == begin && prev == 1) {
                continue;
            }

            Iterator left = std::prev(it, prev);
            Iterator right = std::next(it); 

            auto length = prev;
            for (; right != end && *left == *right; --left, ++right) {
                length += 2;

                if (left == begin) {
                    break;
                }
            }

            if (max_length < length) {
                max_length = length;
            }
        }
    }

    return max_length;
}

} // namespace util
