/*
Pranav Surampudi
2407260
surampudi@chapman.edu
CPSC350-03
PA4
*/
#ifndef DNA_SEQ_H
#define DNA_SEQ_H

#include <iostream>
#include <string>
#include "DblList.h"
using namespace std;

class DNASeq{
    public:
        DNASeq();
        ~DNASeq();
        DNASeq(string sequence);
        DNASeq complement();
        DNASeq substring(int s, int e);
        bool isGeneticPalindrome();
        char switchDNA(char DNA);
        string toString();
        DblList<char> m_sequenceList;
};
#endif