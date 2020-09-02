//methPrac.cpp 

#include <iostream> 

#include <string> 

#include <stdlib.h> 

#include <time.h> 

#include "methodPrac.h" 

using namespace std; 

  

int main(){ 

    string suit[4] = {"Heart","Diamond","Club","Spade"}; 

    string values[13] = {"Ace","2","3","4","5","6","7","8","9","10","Jack","Queen","King"}; 

    int numValues = 13; 

    int numSuits = 4; 

  

    Deck myDeck(suits, values, numValues, numSuits); 

     

    int numHands = 3; 

    int numCards = 5; 

     

    myDeck.printDeck(myDeck); 

    myDeck = myDeck.shuffle(myDeck); 

    Card** myHands = myDeck.dealHand(3,5,myDeck); 

    myDeck.printHands(3,5,myHands); 

    cout << "\n"; 

    myDeck = myDeck.updateDeck(numHands, numCards, myDeck); 

    myDeck.printDeck(myDeck); 

    return 0; 

} 