algoritmo horasMinutosSegundos;
// S�ntese
//  Objetivo: Construa um algoritmo que leia um n�mero inteiro de horas e mostre ao usu�rio o
// correspondente em minutos e segundos destas horas 
//  Entrada : n�mero de horas
//  Sa�da   : n�mero de horas em minutos e segundos


principal
	// Declara��es
real horas, minutos, segundos;
	// Instru��es
escreva("N�mero de horas");
leia(horas);
	// c�lculo
minutos = horas * 60;
segundos = horas * 3600;
	// resultado
escreval(minutos, " minutos ou ", segundos, " segundos."); 
fimPrincipal
