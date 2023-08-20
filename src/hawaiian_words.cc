#include <iostream>
#include <string>

#include "functions.hpp"


int main(int argc, char** argv) {
  if (argc != 2) {
    std::cerr << "Usage: ./bin/exec word" << std::endl;
    return 1;
  }

  std::string word = argv[1];
  std::string phonetics;
  std::string original_word = word;
  
  for (unsigned int i = 0; i < word.length(); ++i) {
    word = ToLower(word);
    if (!(IsValid(word.at(i)))) {
      std::cout << original_word << " contains a character not a part of the Hawaiian language." << std::endl;
      return 1;
    }
    if (IsVowel(word.at(i))) {
      if (CheckVowel(word, i) == CharToString(word.at(i))) {
        phonetics += ReturnDefault(word.at(i));
      } else {
        phonetics += CheckVowel(word, i);
        if (i != word.length() - 1) {
          ++i;
        }
        
      }
      if (i != word.length() - 1 && IsDash(word, i)) {
        phonetics += "-";
      } 
      continue;
    }
    if (word.at(i) == 'w') {
      phonetics += CheckW(word, i);
    } else {
      phonetics += CharToString(word.at(i));
    }
  }

  std::cout << phonetics << std::endl;
  return 0;
}
