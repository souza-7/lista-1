algoritmo dadosDoFuncionario;
// S�ntese
//  Objetivo:  Escreva um programa que leia o nome do funcion�rio, o sexo (F ou M), o n�mero de
// matr�cula do funcion�rio, o n�mero de horas trabalhadas, o valor que recebe por hora
// e calcule o sal�rio desse funcion�rio. A seguir, mostre todos os dados na tela, os dados
// de entrada e os dados de sa�da.
//  Entrada : nome, sexo, n� matr�cula, n� horas trabalhadas, valor que recebe por hora
//  Sa�da   : sal�rio e dados


principal
	// Declara��es
texto nome, sexo
inteiro Matricula, Horas
real Hora, salario
	// Instru��es
	// coleta de dados
	escreval("Seu nome: ");
leia(nome);
	escreval("F se for mulher e M se for homem: ");
leia(sexo);
	escreval("N�mero da matr�cula: ");
leia(Matricula);
	escreval("Quantas horas trabalhadas? ");
leia(Horas);
	escreval("Quanto voc� ganha por hora? ");
leia(Hora);
	// sal�rio
salario = Horas * Hora;
	// dados
	escreval("Nome: ", nome);
	escreval("Sexo: ", sexo);
	escreval("N�mero da Matr�cula: ", Matricula);
	escreval("Horas trabalhadas: ", Horas);
	escreval("Valor ganho por hora: R$", Hora);
	escreval("Sal�rio: R$", salario);
fimPrincipal
