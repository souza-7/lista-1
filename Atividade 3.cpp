algoritmo mediaAritmetica;
// S�ntese
//  Objetivo:  Construa um algoritmo que calcule a m�dia aritm�tica de 3 n�meros quaisquer
// fornecidos pelo usu�rio.
//  Entrada : Valor de 3 n�meros ale�torios
//  Sa�da   : A m�dia aritm�tica


principal
	// Declara��es
real mediaAritmetica, A, B, C;
	// Instru��es
escreva("Valor do A");
leia(A);
escreva("Valor do B");
leia(B);
escreva("Valor do C");
leia(C);
	// c�lculos
mediaAritmetica = A + B + C \ 3;
	// resultado
escreval("O resultado � ", mediaAritmetica);
fimPrincipal
