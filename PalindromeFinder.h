/*
Pranav Surampudi
2407260
surampudi@chapman.edu
CPSC350-03
PA4
*/

#ifndef PALINDROME_FINDER_H
#define PALINDROME_FINDER_H


#include "DNASeq.h"  // Include the DNASeq class
#include <string>
using namespace std;

class PalindromeFinder {
public:
    PalindromeFinder();  // Constructor if needed
    ~PalindromeFinder(); // Destructor if needed

    bool isPalindrome(string& sequence);
    void findGeneticPalindromes(DNASeq& dnaSeq);
};

#endif
