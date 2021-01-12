#include<stdio.h>
#include<stdlib.h>


struct node {
	
	int data;
	struct node *next;
	
	
}*first=NULL;


void create() {
	
	int n,item,i;
	
	struct node *temp , *last ;
	
	printf("enter no of nodes u wnt =>\n");
	scanf("%d",&n);
	
	if(n>=1) {
		
		printf("enter 1 node => ");
		scanf("%d",&item);
		first = (struct node *)malloc(sizeof(struct node));
		first->data = item;
		first->next = NULL;
		
		last = first ;
		
		for(i=1 ; i<n ; i++) {
			
			printf("enter %d node => ",i+1);
			scanf("%d",&item);
			temp = (struct node *)malloc(sizeof(struct node));
			temp->data = item;
			last->next = temp;
			temp->next = NULL;
			last = temp;
		}
		
	}
	else{
		printf("\n\nTHIS IS SOMETHING NOT POSSIBLE ");
	}
}

void display(struct node *p) {
	
	while(p!=NULL) {
		
		printf("%d\t",p->data);
		p=p->next;
		
	}
}

int main() {
	
	create();
	display(first);
	
}
