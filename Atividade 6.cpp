algoritmo media;
// S�ntese
//  Objetivo:  Leia 2 valores A e B, que correspondem a 2 notas de um aluno. A seguir, calcule a
// m�dia do aluno, sabendo que a nota A tem peso 3.5 e a nota B tem peso 7.5 (A soma
// dos pesos portanto � 11). Assuma que cada nota pode ir de 0 at� 10.0.
//  Entrada : valor de A e B
//  Sa�da   : M�dia do aluno


principal
	// Declara��es
real A, B, media;
	// Instru��es
escreva("Valor de A: ");
leia(A);
	// A > 10
se (A > 10) entao
	escreval("Nota alterada para valor m�ximo: 10");
	A = 10;
	escreva("Insira o valor de B: ");
senao 
	escreva("Insira o valor de B: ");
fimSe 
	// A < 10
se (A < 10) entao
	escreval("Nota alterada para valor m�nimo: 0");
	A = 0;
	escreva("Insira o valor de B: ");
senao
	escreva("Insira o valor de B: ");
fimSe
	// B > 10
se (B > 10) entao
	escreval("Nota alterada para valor m�ximo: 10");
	B = 10;
senao 
	escreva("");
fimSe
se (B < 10) entao
	escreval("Nota alterada para valor m�nimo: 0");
	B = 0;
senao	
	escreva("");
fimSe
	// valor da m�dia
media = (A*3.5 + B*7.5);
	// resultado
escreval("A m�dia �: ");
leia(media);
fimPrincipal
