/*
Pranav Surampudi
2407260
surampudi@chapman.edu
CPSC350-03
PA4
*/
#include "DNASeq.h"
using namespace std;

DNASeq::DNASeq(){

}

DNASeq::~DNASeq(){

}

DNASeq::DNASeq(string sequence){
    for(int i = 0; i < sequence.size(); ++i){
        if(sequence[i] == 'A' || sequence[i] == 'C' || sequence[i] == 'T' || sequence[i] == 'G'){
            m_sequenceList.addFront(sequence[i]);
        }
    }
}

DNASeq DNASeq::complement(){
    DNASeq complementSeq;
    for(int i = 0; i < m_sequenceList.size(); ++i){
        complementSeq.m_sequenceList.addFront(switchDNA(m_sequenceList.get(i)));
    }
    return complementSeq;
}

DNASeq DNASeq::substring(int start, int end){
    if (start < 0 || start >= m_sequenceList.size() || end > m_sequenceList.size() || start >= end) {
        // Handle invalid substring indices here
        return DNASeq();
    }

    DNASeq subSeq;
    for(int i = start; i < end; i++){
        subSeq.m_sequenceList.addBack(m_sequenceList.get(i));
    }
    return subSeq;
}

bool DNASeq::isGeneticPalindrome(){
    int front = 0;
    int back = m_sequenceList.size() - 1;

    while (front < back){
        if (switchDNA(m_sequenceList.get(front)) != m_sequenceList.get(back)){
            return false;
        }

        ++front;
        --back;
    }

    return true;
}

char DNASeq::switchDNA(char DNA){
    switch(DNA){
        case 'A':
            return 'T';
        case 'T':
            return 'A';
        case 'C':
            return 'G';
        case 'G':
            return 'C';
        default:
            return DNA;
    }
}


// Implementation of toString method
string DNASeq::toString(){
    // Convert the DNA sequence (DblList) to a string representation
    std::string sequenceString;

    // Traverse the DblList using a for loop
    for (ListNode<char>* currentNode = m_sequenceList.m_front; currentNode != nullptr; currentNode = currentNode->m_next) {
        sequenceString += currentNode->m_data;
    }

    return sequenceString;
}




