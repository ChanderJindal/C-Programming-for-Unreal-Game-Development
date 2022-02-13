// Copyright A.T. Chamillard. All Rights Reserved.

#include <iostream>

#include "Matherator.h"


int Matherator::GetNthEvenNumber(int N){
    return 2*N;
}
int Matherator::GetTenthEvenNumber(){
    return 20;
}
void Matherator::PrintMToN(int M , int N){
    for(int i = M ; i<= N;i++)
        std::cout<<i<<" ";
    std::cout<<"\n";
}
void Matherator::PrintOneToTen(){
    for(int i = 1; i < 11;i++)
    std::cout<<i<<" ";
    std::cout<<"\n";
}