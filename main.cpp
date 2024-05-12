/*
Pranav Surampudi
2407260
surampudi@chapman.edu
CPSC350-03
PA4
*/
#include <iostream>
#include <fstream>
#include <string>
#include "DNASeq.h"

int main(int argc, char* argv[]) {
    if (argc != 2) {
        std::cerr << "Usage: " << argv[0] << " <filename>" << std::endl;
        return 1;
    }

    std::ifstream inputFile(argv[1]);
    if (!inputFile.is_open()) {
        std::cerr << "Failed to open " << argv[1] << "\n";
        return 1;
    }

    std::string line;
    while (std::getline(inputFile, line)) {
        if (line == "END") break;

        DNASeq dna(line);
        
        for (int len = 5; len < dna.m_sequenceList.size(); ++len) { 
             for (int i = 0; i <= dna.m_sequenceList.size() - len; ++i) {
                 DNASeq subSeq = dna.substring(i, i + len);
                 if (subSeq.isGeneticPalindrome()) {
                     std::cout << subSeq.toString();
                 }
             }
         }
    }

    inputFile.close();
    return 0;
}