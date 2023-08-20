#ifndef FUNCTIONS_HPP
#define FUNCTIONS_HPP
#include <string>


std::string CheckA(std::string str, unsigned int i);
std::string CheckE(std::string str, unsigned int i);
std::string CheckW(std::string str, unsigned int i);
std::string CheckO(std::string str, unsigned int i);
std::string CheckI(std::string str, unsigned int i);
std::string CheckU(std::string str, unsigned int i);
std::string ToLower(std::string str);
bool IsDash(std::string str, unsigned int i);
bool IsVowel(char is_vowel);
bool IsValid(char is_valid);
std::string CheckVowel(std::string str, unsigned int i);
std::string ReturnDefault(char default_char);
std::string CharToString(char to_string);



#endif
