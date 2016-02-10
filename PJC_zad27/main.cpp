#include <iostream>
#include <cmath>

using namespace std;


struct Node
{
    int value;
    struct Node *next;
};

struct List
{
    struct Node *first, *last;
};

List*  list(){  //utworzy na stercie pustą listę,


    List* tmp = new List;
    tmp->first = NULL;

  return tmp;



}

Node* node(int v){  //utworzy na stercie nowy węzeł o wartości v oraz next = NULL


    Node* n = new Node;

    n->value = v;
    n->next = NULL;

return n;
}

List* push(List* s, Node* n){ //dodaje węzeł n na początek listy s (jeśli wcześniej nie było wartości węzła n na liście s) i zwraca zmodyfikowaną s

    n = new Node;

    if(s->first == NULL){

    s->last = n;
    n->next = NULL;

    } else{

    n->next = s->first;

    }
    s->first = n;

}

List* inject(List* s, Node* n){ // dodaje węzeł n na koniec listy s (jeśli wcześniej nie było wartości węzła n na liście s) i zwraca zmodyfikowaną s

    n = new Node;
    n->next = NULL;

    if(s->first == NULL){

        s->first = n;

} else{

    s->last->next=n;

}
    s->last=n;

    return s;

}

List* insertAfter(List* s, Node* curr, Node* n){ // dodaje do listy s węzęł n (jeśli nie było jego wartości wcześniej na liście) na pozycję bezpośrednio po węzle curr (licząc od lewej do prawej strony) i zwraca zmodyfikowaną s

}

List* insertBefore(List* s, Node* curr, Node* n){ //  dodaje do listy s węzęł n (jeśli nie było jego wartości wcześniej na liście) na pozycję bezpośrednio przed węzłem curr (licząc od lewej do prawej strony) i zwraca zmodyfikowaną s

}

List*  del(List* s, int v){  // usuwa z listy s węzeł o wartości v i zwraca zmodyfikowaną s

}

void  printNode(Node* n){  // wypisuje informacje o węzle n

    if (n != NULL) {
		cout << "Węzeł " << n->value<< endl;
		if (n->next != NULL)
			cout << ", jest kolejny węzeł";
		else
			cout << ", nie ma kolejnego węzła.";

		cout << endl;
	} else
		cout << "NULL. Nie ma takiego węzła." << endl;

}

void  printLR(List* s){  // wypisuje informacje o wszystkich węzłach z listy s, w kolejności od lewej do prawej


    if (s->first != NULL) {

		Node* tmp = s->first;
		for (int i=0; ; i++) {
			cout << i << " -> ";
			printNode(tmp);
			tmp = tmp->next;
		}
	} else
		cout << "printLR -> Lista pusta." << endl;

}

void  printRL(List* s){ // wypisuje informacje o wszystkich węzłach z listy s, w kolejności od prawej do lewej.

}

int main()
{
    const int R = 10;

	Node* tab[R];
	Node* tab2[R];

    Node* a = node(4);
    Node* b = node(7);
    Node* c = node(3);





	List* lista = list();
	cout << "Zapelnianie listy (PUSH).\n";
	for (int i = 0; i < R; i++) {
		push(lista, tab[i]);
	}
	printLR(lista);

	List* lista2 = list();
	cout << "Zapelnianie listy (INJECT).\n";
	for (int i = 0; i < R; i++) {
		inject(lista2, tab2[i]);
	}
	printLR(lista2);


    return 0;
}
