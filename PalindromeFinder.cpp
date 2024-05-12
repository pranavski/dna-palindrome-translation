/*
Pranav Surampudi
2407260
surampudi@chapman.edu
CPSC350-03
PA4
*/
#include "PalindromeFinder.h"
#include <iostream>


PalindromeFinder::PalindromeFinder() {
    
}

PalindromeFinder::~PalindromeFinder() {
    
}

bool PalindromeFinder::isPalindrome(string& sequence) {
    int left = 0;
    int right = sequence.length() - 1;

    while (left < right) {
        if (sequence[left] != sequence[right]) {
            return false;
        }
        left++;
        right--;
    }

    return true;
}


void PalindromeFinder::findGeneticPalindromes(DNASeq& dnaSeq) {
    string sequence = "";
    for (int i = 0; i < dnaSeq.m_sequenceList.size(); ++i){
        sequence += dnaSeq.m_sequenceList.get(i);
    }

    if(isPalindrome(sequence)){
        cout << " sequence is a genetic palindrome: " << sequence << endl;
    }

    for (int i = 5; i < sequence.length(); i++){
        for(int j =0; j <= sequence.length() - 1; j++){
            string subsequence = sequence.substr(j,i);

            if(isPalindrome(subsequence)){
                cout << "palindrome found: " << subsequence << endl;
            }
        }
    }
}

