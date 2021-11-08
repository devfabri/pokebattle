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
	TERRESTRE,
	PLANTA
};

class Boss {
private:
	Elemento elemento;
	int hp;
public:
	Boss() {
		hp = 2000;
		elemento = Elemento(rand() % 3 + 1);
	}
	int getBossHp() {
		return hp;
	}
	int getBossElement() {
		return (int)elemento;
	}
    void setBossHp(int damage){
        hp = damage;
    }
	void takeDamage(int power, Elemento element) {
		switch (elemento)
		{
		case 0:
			if (element == 3) {
				hp = hp - power * 2;
			}
			else {
				hp = hp - power;
			}
			break;
		case 1:
			if (element == 3 || element == 2) {
				hp = hp - power * 2;
			}
            if (element == 4){
                hp = hp - power/2;
            }
			else {
				hp = hp - power;
			}
			break;
		case 2:
			if (element == 0 || element == 4) {
				hp = hp - power * 2;
			}
			else {
				hp = hp - power;
			}
			break;
		case 3:
			if (element == 2 || element == 4) {
				hp = hp - power * 2;
			}
			else if (element == 0) {
				hp = hp;
			}
			else {
				hp = hp - power;
			}
			break;
		case 4:
			if (element == 1) {
				hp = hp - power * 2;
			}
			else {
				hp = hp - power;
			}
		default:
			break;
		}
	}
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
        Card c;
        // c.setElement((Elemento)(rand() % 4));
        // randomNumber = (rand() % 600) + 900;
        // c.setPower(randomNumber);

        c.setCarta("Pikachu", (rand() % 400) + 100, Elemento::ELETRICO);
        deck.push(c);
        c.setCarta("Charizard", (rand() % 400) + 100, Elemento::FOGO);
        deck.push(c);
        c.setCarta("Blastoise", (rand() % 400) + 100, Elemento::AGUA);
        deck.push(c);
        c.setCarta("Venusaur", (rand() % 400) + 100, Elemento::PLANTA);
        deck.push(c);
        c.setCarta("Onix", (rand() % 400) + 100, Elemento::TERRESTRE);
        deck.push(c);
        c.setCarta("Geodude" , (rand() % 400) + 100, Elemento::TERRESTRE);
        deck.push(c);
        c.setCarta("Magikarp", (rand() % 400) + 100, Elemento::AGUA);
        deck.push(c);
        c.setCarta("Rapidash", (rand() % 400) + 100, Elemento::FOGO);
        deck.push(c);
        c.setCarta("Voltorb" , (rand() % 400) + 100, Elemento::ELETRICO);
        deck.push(c);
        c.setCarta("Gyrados", (rand() % 400) + 100, Elemento::AGUA);
        deck.push(c);
        c.setCarta("Oddish", (rand() % 400) + 100, Elemento::PLANTA);
        deck.push(c);
        c.setCarta("Dugtrio", (rand() % 400) + 100, Elemento::TERRESTRE);
        deck.push(c);
        c.setCarta("Golduck" , (rand() % 400) + 100, Elemento::AGUA);
        deck.push(c);
        c.setCarta("Arcanine", (rand() % 400) + 100, Elemento::FOGO);
        deck.push(c);
        c.setCarta("Magneton ", (rand() % 400) + 100, Elemento::ELETRICO);
        deck.push(c);
        c.setCarta("Electbuzz", (rand() % 400) + 100, Elemento::ELETRICO);
        deck.push(c);
        c.setCarta("Ninetales" , (rand() % 400) + 100, Elemento::FOGO);
        deck.push(c);
        c.setCarta("Rhyhorn", (rand() % 400) + 100, Elemento::TERRESTRE);
        deck.push(c);
        c.setCarta("Tangela" , (rand() % 400) + 100, Elemento::PLANTA);
        deck.push(c);
        c.setCarta("Exeggutor", (rand() % 400) + 100, Elemento::PLANTA);
        deck.push(c);
	}

	void drawCard(vector<Card>& hand, stack<Card>& deck) {
		if (hand.size() < 5) {
			hand.push_back(deck.top());
			deck.pop();
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

	void dumpCard(int cardPosition, Boss& boss) {
		cardPosition--;
        if (boss.getBossHp() <= hand[cardPosition].getPower()){
            boss.setBossHp(0);
        }else{
            boss.takeDamage(hand[cardPosition].getPower(), hand[cardPosition].getElement());
        }

		hand.erase(hand.begin() + cardPosition);
	}

	vector<Card>& getHand() {
		return hand;
	}
};


