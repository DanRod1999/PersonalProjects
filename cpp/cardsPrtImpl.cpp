//cardsPrtImpl.cpp 

#include <iostream>
#include <string> 
#include <stdlib.h> 
#include <time.h> 

using namespace std; 

class Card
{
    public:
        string suit;
        string value;
        Card* nextCard;

        Card* makeDeck(string* suits, string* values, int numValues, int numSuits);
        void printDeck(Card* topCard);
        Card* shuffle(Card* topCard);
        void testPrint(Card* top);
        Card* getRandomCard(Card* top);
        Card* removeTopCard(Card* top);
        Card* updateDeck(Card* top, int numHands, int numCards);
        Card** dealHands(Card* card, int numHands, int numCards);
};

Card* Card :: makeDeck(string* suits, string* values, int numValues, int numSuits)
{
    Card* topCard = new Card;
    topCard->nextCard = NULL;

    for( int i = 0; i < numSuits; i++)
    {
        for( int j = 0; j < numValues; j++ )
        {
            Card* newCard = new Card();
            newCard->suit = suits[i];
            newCard->value = values[j];
            newCard->nextCard = topCard;
            topCard = newCard;
        }
    }
    return topCard;
}

void Card :: printDeck(Card* topCard)
{
    Card* currentCard = topCard;
    int count = 0;
    while( currentCard->nextCard != NULL )
    {
        cout << "(" << currentCard->suit << " " << currentCard->value << ")";
        currentCard = currentCard->nextCard;
        count++;
    }
    cout << "Total Cards " << count << "\n";
}

Card* Card :: shuffle(Card* topCard)
{
    srand(time(NULL));
    Card* top = new Card();
    Card* oldTop = new Card();
    top = topCard;
    for( int i = 0; i < 200; i++ )
    {
        Card* temp = new Card();
        Card* newTop = new Card();
        temp = getRandomCard(top);

        if( temp->nextCard == top || temp->nextCard->suit == "")
        {
            continue;
        }
        else
        {
            Card* card2 = temp;
            temp = temp->nextCard;
            
            newTop->value = temp->value;
            newTop->suit = temp->suit;
            newTop->nextCard = top;
            card2->nextCard = temp->nextCard;
            top = newTop;
            free(temp);
        }
    }
    return top;
}

Card* Card :: getRandomCard(Card* topCard)
{
    int pos = rand()%100;
    Card* card = new Card();
    card = topCard;
    for( int i = 0; i < pos; i++ )
    {
        if( card->nextCard->nextCard == NULL )
        {
            card = topCard;
        }
        else
        {
            card = card->nextCard;
        }
    }
    return card;
}

Card** Card :: dealHands(Card* top, int numHands, int numCards){
    int count = 0;
    Card* topCard = new Card();
    topCard = top;
    Card** hands = new Card*[numHands+1];
    for( int i = 0; i < numHands; i++ )
    {
        hands[i] = new Card();
    }
    while( topCard->nextCard != NULL && count < numCards )
    {        
        for( int i = 0; i < numHands; i++ )
        {
            Card* newCard = new Card();
            newCard->value = topCard->value;
            newCard->suit = topCard->suit;
            newCard->nextCard = hands[i];
            hands[i] = newCard;
            topCard = topCard->nextCard;
        }
        count++;
    }
    return hands;
}

Card* Card :: removeTopCard(Card* top)
{
    Card* newTop = new Card();
    newTop = top->nextCard;
    free(top);
    return newTop;
}

Card* Card :: updateDeck(Card* topCard, int numHands, int numCards)
{
    for( int i = 0; i < numHands*numCards; i++ )
    {
        topCard = removeTopCard(topCard);
    }
    return topCard;
}

int main(){
    string suits[4] = {"Heart","Diamond","Club","Spade"};
    string values[13] = {"Ace","2","3","4","5","6","7","8","9","10","Jack", "Queen","King"};
    
    Card* top = new Card();
    top = top->makeDeck(suits, values, 13, 4);
    top->printDeck(top);
    cout << "\n";
    
    top = top->shuffle(top);
    top->printDeck(top);
    cout << "\n";
    
    Card** myHands = top->dealHands(top, 3, 5);
    
    for( int i = 0; i < 3; i++ )
    {
        myHands[i]->printDeck(myHands[i]);
    }

    top = top->updateDeck(top, 3, 5);
    cout << "\n";
    
    top->printDeck(top);
    cout << "\n";
}
