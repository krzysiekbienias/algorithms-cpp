#include<vector>
#include "challenges.hpp"

#include <map>

#include "../utils/template_utils.hpp"

std::vector<std::vector<std::string>> groupAnagrams(const std::vector<std::string>& words) {
    return {{"test"}};

}



std::string cesarCipherEncryptor(const std::string &password,int key) {
    std::string encryptedPass;
    key=key%26;
    for (char ch : password) {
        int asciiCodeShifted=ch+key;
        if (asciiCodeShifted<='z') {
            encryptedPass+=static_cast<char>(asciiCodeShifted);
        }
        else {
            //'a'-1=96
            //wrap around from 'a' again
            // asciiCodeShifted % 'z' is the same like asciiCode % 122

            encryptedPass+=static_cast<char>('a'-1+asciiCodeShifted % 'z');
        }
    }
    return encryptedPass;
}

char firstNonRepeatingCharacter(std::string & word) {
    //first traversal to crete map occurence
    std::unordered_map<char,int> freq=countOccurrences(word);
    //second traverse to check
    for (const auto & [key,value]:freq) {
        if (value==1) {
            return key;
        }
    }
    return '0';
}

bool isPalindrome(std::string& word) {
    int l_p=0;
    int r_p=word.length()-1;
    while (l_p<r_p) {
        if(word[l_p]==word[r_p]) {
            l_p++;
            r_p--;
        }
        else {
            std::cout<<word<<" is not a palindrome";
            return false;
        }
    }
    std::cout<<word<<" is a palindrome";
    return true;
}