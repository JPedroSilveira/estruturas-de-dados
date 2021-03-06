// ArvoreBinariaDePesquisa.cpp : define o ponto de entrada para o aplicativo do console.
//

#include "stdafx.h"
#include "Tree.h"

int main()
{
	/*Cria as duas árvores*/
	int treeOneArray[10] = { 42, 15, 88, 6, 27, 63, 94, 20, 57, 71};
	int lengthTreeOne = 10;

	Node * treeOne = initialize();

	for (int x = 0; x < lengthTreeOne; x++) {
		insert(treeOneArray[x], &treeOne);
	}

	int treeTwoArray[4] = { 42, 15, 27, 20 };
	int lengthTreeTwo = 4;

	Node * treeTwo = initialize();

	for (int x = 0; x < lengthTreeTwo; x++) {
		insert(treeTwoArray[x], &treeTwo);
	}
	/*Fim da criação das duas árvores*/

	printf("Arvore 1 - Impressao: \n");
	amazingPrint(treeOne, 0);

	/*Calcula o fator de balanceamento de cada Nodo da árvore um*/
	treeBalanceCalculator(treeOne);

	/*Busca o fator de balanceamento da árvore (maior em módulo)*/
	printf("Arvore 1 - Fator de Balanceamento: %d \n", getTreeBalanceFactor(treeOne));

	printf("\n\n");

	printf("Arvore 2 - Impressao: \n");
	amazingPrint(treeTwo, 0);

	/*Calcula o fator de balanceamento de cada Nodo da árvore dois*/
	treeBalanceCalculator(treeTwo);

	/*Busca o fator de balanceamento da árvore (maior em módulo)*/
	printf("Arvore 2 - Fator de Balanceamento: %d \n", getTreeBalanceFactor(treeTwo));

	scanf_s("Tecle qualquer coisa pra finalizar");

    return 0;
}

