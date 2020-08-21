#include <iostream>
#include <ctime>
#include <string>
using namespace std;

int main()
{
    
    const  int numberofcards = 52;
    int deck[numberofcards];
    string suits[] = {"Spades", "Hearts", "Diamonds", "Clubs"};
    string ranks[] = { "Ace", "2", "3", "4", "5", "6", "7", "8", " 9", "10", "Jack", "Queen", "King", };
    string q, nada;

    cout << "This program will pull 4 random cards from the deck. Press any button to continue." << endl;
    cin >> nada;


        for (int i = 0; i < numberofcards; i++)
        deck[i] = i;

        srand(time(0));

        for (int i = 0; i < numberofcards; i++) {

            int index = rand() % numberofcards;
            int temp = deck[i];
            deck[i] = deck[index];
            deck[index] = temp;
        }

        for (int i = 0; i < 4; i++) {

            string suit = suits[deck[i] / 13];
            string rank = ranks[deck[i] % 13];
            cout << "Card number " << deck[i] << ": "
                << rank << " of " << suit <<endl;
        }

        cout << "Press enter to run program again, otherwise please close the window." << endl;
        cin >>q;
        




}
