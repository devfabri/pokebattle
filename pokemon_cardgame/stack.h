//A pilha tem alocação estática pq tem o tamanho já definido (TAM)
//A pilha tem alocação sequencial pq é colocada em um vetor

#include <iostream>
#define TAM 20
using namespace std;

enum Elemento {
    ELETRICO=0,
	FOGO,
	AGUA,
	TERRESTRE,
	PLANTA
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

class stack{
    public:
    stack(); //abrindo a pilha
        bool isFull();
        bool isEmpty();
        void push(Card x); //x = vai ser adicionado ; work = passagem por referencia
        void pop(); //&x = vai ser armazenado o numero que foi retirado  
        Card top();
        int size();
    private:
    int head; //top sempre int pq se refere ao indice do vetor (0 até TAM-1)
    Card entry[TAM];
};
    stack::stack(){
            head=-1; //Pq é a ultima posição do vetor
    }
    bool stack::isFull(){
        return (head==(TAM-1)); //Por se tratar de um bool, ele só pode retornar true/false. Logicamente, ele analisará a condição do parêntes direto.
    }
    bool stack::isEmpty(){
        return (head==-1); //Por estar vazio, o top não existiria!
    }
    void stack::push(Card x){
        if(isFull()){
            return;
        }
        else{
            head++; //Incrementa o indice
            entry[head]=x; //Coloca o novo valor no vetor
        }
    }
    void stack::pop(){
        if(isEmpty()){
            return;
        }
        else{
            head--; //Decrementa o indice
        }
    }
    Card stack::top(){
        return entry[head];
    }
    int stack::size(){
        return head+1;
    }
