//methodPrac.h 

#include <iostream> 

#include <string> 

#include <stdlib.h> 

#include <time.h> 

using namespace std; 

  

class Card { 

    public: 

        string suit; 

        string value; 

        bool inDeck; 

}; 

  

class Deck { 

    public: 

        int numCards; 

        card Cards[52]; 

         

        Deck(string* suits, string* values, int numValues, int numSuits){ 

            numCards = numSuits * numValues; 

            int deckPos = 0; 

            for( int i = 0; i < numSuitss: i++ ){ 

                for( int j = 0; j < numValues; j++ ){ 

                    cards[deckPos].suit = suit[i]; 

                    cards[deckPos].value = values[j]; 

                    cards[deckPos].inDeck = true; 

                    deckPos++; 

                } 

            } 

        } 

         

        Deck shuffle(Deck deck); 

        Card** dealHand(int numHands, int numCards, Deck deck); 

        void printHands(int numHands, int numCards, card** hands); 

        void printDeck( Deck deck); 

        Deck updateDeck(int numHands, int numCards, Deck deck); 

}; 

  

Deck Deck :: shuffle(Deck deck){ 

    srand(time(NULL)); 

    int pos1; 

    int pos2; 

    Card temp; 

    for( int i = 0; i < deck.numCards; i++ ){ 

        pos1 = i; 

        pos2 = rand()%(deck.numCards-1); 

        temp = deck.cards[pos1]; 

        deck.cards[pos1] = deck.cards[pos2]; 

        deck.cards[pos2] = temp; 

    } 

    return deck 

} 

  

Card** Deck :: dealHand(int numHand, int numCards, Deck deck){ 

    if( numHands * numCards < deck.numCards ){ 

        cout << "Not enough cards in deck \n"; 

        return NULL; 

    } 

    Card** hands = new Card*[numHands]; 

    for( int i = 0; i < numHnds; i ++ ){ 

        hand[i] = new Card[numCards]; 

    } 

    for( int i = 0; i < numHands; i++ ){ 

        int pos = i; 

        for( int j = 0; j < numCards; j++ ){ 

            hands[i][j] = deck.cards[pos]; 

            deck.cards[pos].inDeck = false; 

            pos += numHands; 

        } 

    } 

    return hands; 

} 

  

void Deck :: printHands( int numHands, int numCards, Card** hands){ 

    for( int i = 0; i < numHands; i++ ){ 

        int pos = numHnds; 

        for( int j = 0; j < numCards; j++){ 

            cout << "(" << hands[i][j].suit << " " << hands[i][j].value << ") "; 

        } 

        cout<< "\n"; 

    } 

} 

  

void Deck :: printDeck( Deck deck){ 

    for( int i = 0; i < deck.numCards; i++ ){ 

        if( deck.cards[i].inDeck ){ 

            cout << "(" << deck.cards[i].suit << " " << deck.cards[i].value << ") "; 

        } 

    } 

    cout << " \n\n"; 

} 

  

Deck Deck :: updateDeck(int numHands, int numCards, deck deck){ 

    for( int i = 0; i < numHands*numCards; i++ ){ 

        deck.cards[i].inDeck = false; 

    } 

    return deck; 

} 
