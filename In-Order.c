#include<stdio.h>
#include<conio.h>

typedef struct Node{
	int data;  
	Node *kiri;  
  	Node *kanan; 
};

void tambah(Node **root, int databaru){
	if((*root) == NULL){ 
	    Node *baru;
            baru = new Node;
            baru->data = databaru; 
            baru->kiri = NULL;
            baru->kanan = NULL;
            (*root) = baru; 
            (*root)->kiri = NULL;
            (*root)->kanan = NULL;
            printf("Data bertambah!");
      }