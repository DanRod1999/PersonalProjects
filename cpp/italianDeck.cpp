//italianDeck.cpp 

#include <iostream> 

#include <string> 

#include <stdlib.h> 

#include <time.h> 

#include "italianDeck.h" 

using namespace std; 

  

int main(){ 

    string suits[4] = {"Denari","Coppe","Bastoni","Spade"}; 

    string values[10] = {"1","2","3","4","5","6","7","8","9","10"}; 

    int numValues = 10; 

    int numSuits = 4; 

     

    ItalianDeck myDeck(suits, values, numValues, numSuits); 

     

    myDeck.printDeck(myDeck); 

    return 0; 

} 