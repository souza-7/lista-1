algoritmo restoEQuociente;
// S�ntese
//  Objetivo:  Construa um algoritmo que a partir da leitura de dois n�meros forne�a o resto e o
// quociente da divis�o do primeiro pelo segundo n�mero.
//  Entrada : ler 2 n�meros 
//  Sa�da   : fornecer o resto e o resultado da divis�o do primeiro pelo segundo 


principal
	// Declara��es
real A, B, valorResto, valorQuociente;
	// Instru��es
escreva("Valor de A");
leia(A);
escreva("Valor de B");
leia(B);
	// c�lculo
valorResto = A % B; // ou "mod"
valorQuociente = A \ B;
	// resultado
escreval("O resto vale ", valorResto);
escreval("O quociente da divis�o vale ", valorQuociente);
fimPrincipal
