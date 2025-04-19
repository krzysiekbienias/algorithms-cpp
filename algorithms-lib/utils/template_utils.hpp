#ifndef TEMPLATE_UTILS_HPP
#define TEMPLATE_UTILS_HPP

#include <unordered_map>
#include <iostream>
#include <vector>
#include <iterator>


/**
 * @brief Counts the frequency of elements in a generic container.
 *
 * @tparam Container Any iterable container (e.g., vector, string, list).
 * @param input The container to process.
 * @return A map with element counts.
 */
template <typename Container>
std::unordered_map<typename Container::value_type, int>
countOccurrences(const Container& input) {
    std::unordered_map<typename Container::value_type, int> freq;
    for (const auto& item : input) {
        freq[item]++;
    }
    return freq;
}

// Add other generic utility templates or function declarations here.


template <typename A, typename B>
auto zip(const A& a, const B& b) {
    std::vector<std::pair<typename A::value_type, typename B::value_type>> zipped;
    size_t size = std::min(a.size(), b.size());
    for (size_t i = 0; i < size; ++i) {
        zipped.emplace_back(a[i], b[i]);
    }
    return zipped;
}

/**
 * @brief Print elements in a container.
 */
template <typename Container>
void printContainer(const Container& input) {
    for (const auto& item : input) {
        std::cout << item << " ";
    }
    std::cout << "\n";
}


#endif // TEMPLATE_UTILS_HPP