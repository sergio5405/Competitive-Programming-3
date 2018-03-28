#include <stdio.h>
#include <iostream>
#include <map>
#include <string>

struct node{
	int data;
	node *prev;
	node *next;
};

int main (){
	int S, B, L, R;

	scanf("%d %d", &S, &B);

	while(S!=0 && B!=0){
		//Fill Doubly LinkedList
		node *head, *tail, *nextN, *nL, *nR;

		head = new node;
		tail = new node;

		head->data = 1;
		tail = head;

		for (int i = 2; i <= S; i++){
			nextN = new node;

			tail->next = nextN;

			nextN->prev = tail;
			nextN->data = i;

			tail = nextN;
		}

		while(B--){
			scanf("%d %d", &L, &R);

			nextN = head;

			while (L>nextN->data){
				nextN = nextN->next;
			}
			nL = nextN;

			while(R>nextN->data){
				nextN = nextN->next;
			}
			nR = nextN;

			if (nL->prev!=NULL){
				nL->prev->next = nR->next;
			}

			if (nR->next!=NULL){
				nR->next->prev = nL->prev;
			}

			if (nL->prev!=NULL){
				printf("%d ", nL->prev->data);
			}else{
				printf("* ");
			}

			if (nR->next!=NULL){
				printf("%d\n", nR->next->data);
			}else{
				printf("*\n");
			}		
		}

		printf("-\n");

		scanf("%d %d", &S, &B);
	}
	
	return 0;
}