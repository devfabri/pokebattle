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

/// FUNÇÕES DE TESTE
void printDeck(stack<Card> deck) {
	int contador = 1;
	cout << "\n DECK INICIAL" << endl;
	while (!deck.empty()) {
		Card c = deck.top();
		cout << contador << "o ";
		cout << c.getName() << " ";
		cout << c.getElement();
		cout << " " << c.getPower() << endl;
		contador++;
		deck.pop();
	}
}

void printHand(Hand hand) {
	vector<Card> mao = hand.getHand();
	int contador = 1;
	cout << "\n HAND" << endl;
	for (Card c : mao) {
		cout << contador << "o ";
		cout << c.getElement() << " ";
		cout << c.getPower() << endl;
		contador++;
	}
}

int main() {
	Deck deck;
	stack<Card> deck1 = deck.getDeck();
	Hand hand1(deck1);
	Hand hand2(deck1);
	printDeck(deck1);
	printHand(hand1);
	printHand(hand2);


	return 0;
}
