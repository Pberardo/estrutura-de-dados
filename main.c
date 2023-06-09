#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(void) {
	setlocale(LC_ALL, "Portuguese");
	
		
	struct loja{
		char nome_produto[50];
		float preco;
		int codigo_produto;
		int qtd_estoque;
	};
	struct loja Loja;
	
	struct loja catalogo[3];
	
	strcpy(catalogo[0].nome_produto, "Geladeira");
	catalogo[0].preco = 1989.99;
	catalogo[0].codigo_produto = 1;
	catalogo[0].qtd_estoque = 9;
	
	strcpy(catalogo[1].nome_produto, "Fogão");
	catalogo[1].preco = 1499.99;
	catalogo[1].codigo_produto = 2;
	catalogo[1].qtd_estoque = 8;
	
	strcpy(catalogo[2].nome_produto, "Lava-louças");
	catalogo[2].preco = 1999.99;
	catalogo[2].codigo_produto = 3;
	catalogo[2].qtd_estoque = 4;
	
	int i;
	for(i = 0; i < sizeof(catalogo) / sizeof(catalogo[0]); i++){
		printf("\n Produto: %s",catalogo[i].nome_produto);
		printf("\n Preço: %.2f",catalogo[i].preco);
		printf("\n Código: %d",catalogo[i].codigo_produto);
		printf("\n Quantidade no estoque: %d\n\n",catalogo[i].qtd_estoque);
	}
	
	printf("\n\n\n\n** %d", sizeof(catalogo[0]));
	printf("\n char: %d", sizeof(char));
	printf("\n float: %d", sizeof(float));
	printf("\n int: %d", sizeof(int));
	
	system("pause");
	return 0;
}




