algoritmo fiosREFiosA;
// S�ntese
//  Objetivo: Fazer um algoritmo para auxiliar um construtor a descobrir a quantidade de rolos e a
// quantidade de metros avulsos de fios que ele precisa adquirir. Sabe-se que o
// construtor tem a quantidade total de fios em metros a serem utilizados na instala��o
// el�trica da obra e que cada rolo de fio tem 50 metros. 
//  Entrada : metros necess�rios
//  Sa�da   : quantidade de fios avulsos e rolos


principal
	// Declara��es
inteiro rolos, fiosR, FiosA, metros;
	// Instru��es
escreva("Metragem da obra: ");
leia(metros);
	// quantia de fiosR e fiosA
fiosR = metros/50;
fiosA = metros % 50;
	// resultado
escreval("A quantia de fiosR �: ", fiosR, ".");
escreval("A quantia de fiosA �: ", fiosA, ".");
fimPrincipal
