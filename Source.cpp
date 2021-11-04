#include <iostream>
#include <vector>
#include <ctime>

using namespace std;
using std::vector;

enum Elemento {
	ELETRICO,
	FOGO,
	AGUA,
	PEDRA,
	NORMAL
};


class Card {
private:
	char nome_pokemon;
	Elemento elemento;
	int poder;
public:
	void setElement(Elemento x) {
		elemento = x;
	}
	void setPower(int x) {
		poder = x;
	}
	void setName(char x) {
		nome_pokemon = x;
	}	
	Elemento getElement() {
		return elemento;
	}
	int getPower() {
		return poder;
	}
};

class Deck {
private:
	vector<Card> deck;
public:
	Deck() {
		srand((unsigned)time(0));
		int randomNumber;
		for (int i = 0; i < 50; i++) {
			Card c;
			c.setElement((Elemento)(rand() % 4));
			randomNumber = (rand() % 600) + 900;
			c.setPower(randomNumber);
			deck.push_back(c);
		}
	}

	void drawCard(vector<Card>& hand, vector<Card>& deck) {
		if (hand.size() < 5) {
			hand.push_back(deck.back());
			deck.pop_back();
		}
	}

	vector<Card>& getDeck() {
		return deck;
	}
};

class Hand {
private:
	vector<Card> hand;
public:
	Hand(vector<Card>& deck) {
		for (int i = 0; i < 5; i++) {
			hand.push_back(deck.back());
			deck.pop_back();
		}
	};

	void dumpCard(int cardPosition) {
		cardPosition--;
		hand.erase(hand.begin() + cardPosition);
	}

	vector<Card>& getHand() {
		return hand;
	}
};

int main() {
	Deck deck;
	vector<Card> deck1 = deck.getDeck();
	int contador = 1;

	contador = 1;

	cout << "\n DECK INICIAL" << endl;
	for (Card c : deck1) {
		cout << contador << "o ";
		cout << c.getElement();
		cout << " " << c.getPower() << endl;
		contador++;
	}

	Hand hand(deck1);

	cout << "\n HAND" << endl;
	for (Card c : hand.getHand()) {
		cout << contador << "o ";
		cout << c.getElement() << " ";
		cout << c.getPower() << endl;
		contador++;
	}

	contador = 1;

	cout << "\n DECK SEM A MAO" << endl;
	for (Card c : deck1) {
		cout << contador << "o ";
		cout << c.getElement();
		cout << " " << c.getPower() << endl;
		contador++;
	}

	contador = 1;
	hand.dumpCard(1);
	cout << "\n HAND" << endl;
	for (Card c : hand.getHand()) {
		cout << contador << "o ";
		cout << c.getElement() << " ";
		cout << c.getPower() << endl;
		contador++;
	}

	deck.drawCard(hand.getHand(), deck1);
	contador = 1;
	cout << "\n HAND" << endl;

	for (Card c : hand.getHand()) {
		cout << contador << "o ";
		cout << c.getElement() << " ";
		cout << c.getPower() << endl;
		contador++;
	}

	contador = 1;

	cout << "\n DECK POS DRAW" << endl;
	for (Card c : deck1) {
		cout << contador << "o ";
		cout << c.getElement();
		cout << " " << c.getPower() << endl;
		contador++;
	}

	return 0;
}
