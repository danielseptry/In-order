#include<stdio.h>
#include<conio.h>

typedef struct Node{
	int data;  
	Node *kiri;  
  	Node *kanan; 
};

void tambah(Node **root, int databaru){