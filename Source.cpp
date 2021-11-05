#include <iostream>
#include <vector>
#include <ctime>
#include <stack>

using namespace std;
using std::vector;
using std::string;
using std::stack;

enum Elemento {
	ELETRICO,
	FOGO,
	AGUA,
	PEDRA,
	NORMAL
};


class Card {
private:
	string nome_pokemon;
	Elemento elemento;
	int poder;
public:
	void setElement(Elemento x) {
		elemento = x;
	}
	void setPower(int x) {
		poder = x;
	}
	void setName(string nome) {
		nome_pokemon = nome;
	}
	Elemento getElement() {
		return elemento;
	}
	int getPower() {
		return poder;
	}
	void setCarta(string nome, int power, Elemento element) {
		setElement(element);
		setName(nome);
		setPower(power);
	}
	string getName() {
		return nome_pokemon;
	}
};

class Deck {
private:
	stack<Card> deck;
public:
	Deck() {
		srand((unsigned)time(0));
		int randomNumber;
		for (int i = 0; i < 20; i++) {
			Card c;
			// c.setElement((Elemento)(rand() % 4));
			// randomNumber = (rand() % 600) + 900;
			// c.setPower(randomNumber);
			c.setCarta("Pikachu", (rand() % 400) + 100, Elemento::ELETRICO);
			deck.push(c);
		}
	}

	void drawCard(vector<Card>& hand, vector<Card>& deck) {
		if (hand.size() < 5) {
			hand.push_back(deck.back());
			deck.pop_back();
		}
	}

	stack<Card>& getDeck() {
		return deck;
	}
};

class Hand {
private:
	vector<Card> hand;
public:
	Hand(stack<Card>& deck) {
		for (int i = 0; i < 5; i++) {
			hand.push_back(deck.top());
			deck.pop();
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
	stack<Card> deck1 = deck.getDeck();
	int contador = 1;

	contador = 1;
	stack<Card> aux_deck = deck1;

	cout << "\n DECK INICIAL" << endl;
	for (int i = 0; i < 20; i++) {
		Card c = aux_deck.top();
		cout << contador << "o ";
		cout << c.getName() << " ";
		cout << c.getElement();
		cout << " " << c.getPower() << endl;
		contador++;
		aux_deck.pop();
	}

	Hand hand(deck1);
	contador = 1;

	cout << "\n HAND" << endl;
	for (Card c : hand.getHand()) {
		cout << contador << "o ";
		cout << c.getElement() << " ";
		cout << c.getPower() << endl;
		contador++;
	}

	contador = 1;
	aux_deck = deck1;

	cout << "\n DECK POS HAND" << endl;
	for (int i = 0; i < deck1.size(); i++) {
		Card c = aux_deck.top();
		cout << contador << "o ";
		cout << c.getName() << " ";
		cout << c.getElement();
		cout << " " << c.getPower() << endl;
		contador++;
		aux_deck.pop();
	}

	// cout << "\n DECK SEM A MAO" << endl;
	// for (Card c : deck1) {
	// 	cout << contador << "o ";
	// 	cout << c.getElement();
	// 	cout << " " << c.getPower() << endl;
	// 	contador++;
	// }

	// contador = 1;
	// hand.dumpCard(1);
	// cout << "\n HAND" << endl;
	// for (Card c : hand.getHand()) {
	// 	cout << contador << "o ";
	// 	cout << c.getElement() << " ";
	// 	cout << c.getPower() << endl;
	// 	contador++;
	// }

	// deck.drawCard(hand.getHand(), deck1);
	// contador = 1;
	// cout << "\n HAND" << endl;

	// for (Card c : hand.getHand()) {
	// 	cout << contador << "o ";
	// 	cout << c.getElement() << " ";
	// 	cout << c.getPower() << endl;
	// 	contador++;
	// }

	// contador = 1;

	// cout << "\n DECK POS DRAW" << endl;
	// for (Card c : deck1) {
	// 	cout << contador << "o ";
	// 	cout << c.getElement();
	// 	cout << " " << c.getPower() << endl;
	// 	contador++;
	// }

	return 0;
}
