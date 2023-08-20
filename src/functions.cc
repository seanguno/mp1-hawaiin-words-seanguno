#include <cctype>
#include <iostream>
#include <vector>

#include "functions.hpp"

// in main, can say "if what was returned is equal to the char then just manual input it "

bool IsDash(std::string str, unsigned int i) {
    bool to_return = true;
    if (str.at(i + 1) == ' ' || str.at(i + 1) == '\'') {
        to_return = false;
    }
    return to_return;
}

bool IsVowel(char is_vowel) {
    std::vector<char> vowels = {'a', 'i', 'o', 'e', 'u'};
    for (size_t i = 0; i < vowels.size(); ++i) {
        if (is_vowel == vowels.at(i)) {
            return true;
        }
    }
    return false;
}

bool IsValid(char is_valid) {
    std::vector<char> valid = {'a', 'i', 'o', 'e', 'u', 'p', 'k', 'h', 'l', 'm', 'n', 'w', ' ', '\''};
    for (size_t i = 0; i < valid.size(); ++i) {
        if (is_valid == valid.at(i)) {
            return true;
        }
    }
    return false;
}

std::string CheckA(std::string str, unsigned int i) {
    if (i == str.length() - 1) {
        return "ah";
    }
    switch (str.at(i + 1))
    {
        case 'i' :
            return "eye";
            break;
        case 'o' :
            return "ow";
            break;
        case 'e' :
            return "eye";
            break;    
        case 'u' :
            return "ow";
            break;
        default:
            return "a";
            break;
    }
}
std::string CheckW(std::string str, unsigned int i) {
    if (i == 0) {
        return "w";
    }
    switch (str.at(i - 1)) {
        case 'a' :
            return "w";
            break;
        case 'i' :
            return "v";
            break;
        case 'u' :
            return "w";
            break;
        case 'e' :
            return "v";
            break;
        case 'o' :
            return "w";
            break;
        default :
            break;
    }
    return "";
}
std::string CheckE(std::string str, unsigned int i) {
    if (i == str.length() - 1) {
        return "eh";
    }
    switch (str.at(i + 1))
    {
    case 'i' :
        return "ay";
        break;
    case 'u' :
        return "eh-oo";
        break;
    case 'a' :
        return "eh-ah";
    case 'o' :
        return "eh-oh";
    default:
        return "e";
        break;
    }
}
std::string CheckO(std::string str, unsigned int i) {
    if (i == str.length() - 1) {
        return "oh";
    }
    switch (str.at(i + 1))
    {
    case 'i' :
        return "oy";
        break;
    case 'u' :
        return "ow";
        break;
    case 'e' :
        return "oh-eh";
    case 'a' :
        return "oh-ah";
    default:
        return "o";
        break;
    }
}
std::string CheckI(std::string str, unsigned int i) {
    if (i == str.length() - 1) {
        return "ee";
    }
    switch (str.at(i + 1))
    {
    case 'u' :
        return "ew";
        break;
    case 'a' :
        return "ee-ah";
    case 'o' :
        return "ee-oh";
    case 'e' :
        return "ee-eh";    
    default:
        return "i";
        break;
    }
}
std::string CheckU(std::string str, unsigned int i) {
    if (i == str.length() - 1) {
        return "oo";
    }
    switch (str.at(i + 1))
    {
    case 'i' :
        return "ooey";
        break;
    case 'a' :
        return "oo-ah";
    case 'e' :
        return "oo-eh";
    case 'o' :
        return "oo-oh";    
    default:
        return "u";
        break;
    }
}

std::string ToLower(std::string str) {
    std::string to_lower;
    for (unsigned int i = 0; i < str.length(); ++i) {
        to_lower += tolower(str.at(i));
    }
    return to_lower;
}

std::string CheckVowel(std::string str, unsigned int i) {
    if (str.at(i) == 'a') {
        return CheckA(str, i);
    }
    if (str.at(i) == 'e') {
        return CheckE(str, i);
    }
    if (str.at(i) == 'o') {
        return CheckO(str, i);
    }
    if (str.at(i) == 'u') {
        return CheckU(str, i);
    }
    if (str.at(i) == 'i') {
        return CheckI(str, i);
    }
    return "";
}

std::string ReturnDefault(char default_char) {
    if (default_char == 'a') {
        return "ah";
    }
    if (default_char == 'e') {
        return "eh";
    }
    if (default_char == 'o') {
        return "oh";
    }
    if (default_char == 'u') {
        return "oo";
    }
    if (default_char == 'i') {
        return "ee";
    }
    return "";
}

std::string CharToString(char to_string) {
    std::string to_return;
    to_return += to_string;
    return to_return;
}
