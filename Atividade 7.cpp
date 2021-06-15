algoritmo dadosDoFuncionario;
// Síntese
//  Objetivo:  Escreva um programa que leia o nome do funcionário, o sexo (F ou M), o número de
// matrícula do funcionário, o número de horas trabalhadas, o valor que recebe por hora
// e calcule o salário desse funcionário. A seguir, mostre todos os dados na tela, os dados
// de entrada e os dados de saída.
//  Entrada : nome, sexo, n° matrícula, n° horas trabalhadas, valor que recebe por hora
//  Saída   : salário e dados


principal
	// Declarações
texto nome, sexo
inteiro Matricula, Horas
real Hora, salario
	// Instruções
	// coleta de dados
	escreval("Seu nome: ");
leia(nome);
	escreval("F se for mulher e M se for homem: ");
leia(sexo);
	escreval("Número da matrícula: ");
leia(Matricula);
	escreval("Quantas horas trabalhadas? ");
leia(Horas);
	escreval("Quanto você ganha por hora? ");
leia(Hora);
	// salário
salario = Horas * Hora;
	// dados
	escreval("Nome: ", nome);
	escreval("Sexo: ", sexo);
	escreval("Número da Matrícula: ", Matricula);
	escreval("Horas trabalhadas: ", Horas);
	escreval("Valor ganho por hora: R$", Hora);
	escreval("Salário: R$", salario);
fimPrincipal
