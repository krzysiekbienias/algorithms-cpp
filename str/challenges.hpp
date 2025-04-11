
#ifndef STR_CHALLENGES_H
#define STR_CHALLENGES_H

#include <vector>
#include <string>

std::vector<std::vector<std::string>> groupAnagrams(const std::vector<std::string>& words);


/**
 * @brief Encrypts a string using the Caesar cipher.
 *
 * The Caesar cipher shifts each lowercase letter in the string by a specified number of positions
 * in the alphabet, wrapping around if needed.
 *
 * @param input The input string (assumed to contain only lowercase letters).
 * @param key The shift amount (wrapped modulo 26 if larger than the alphabet).
 * @return Encrypted string after applying Caesar cipher.
 */
std::string cesarCipherEncryptor(std::string password,int key);



/**
 * @brief Finds the first non-repeating character in a given string.
 *
 * This function uses a two-pass approach to identify the first character
 * in the input string that appears only once. The first pass counts the
 * frequency of each character using a hash map, and the second pass
 * returns the first character with frequency equal to one.
 *
 * @param word A string in which to find the first non-repeating character.
 * @return The first non-repeating character, or '0' if none exists.
 *
 * @note Time complexity is O(n), where n is the length of the input string.
 *       This version does not preserve the original character order — it checks
 *       the order of the hash map, not the string itself.
 *
 * @example
 * firstNonRepeatingCharacter("swiss") -> 'w'
 * firstNonRepeatingCharacter("aabbcc") -> '0'
 */
std::string firstNonRepeatingCharacter(std::string);


bool isPalindrome(std::string& word);

#endif // STR_CHALLENGES_H