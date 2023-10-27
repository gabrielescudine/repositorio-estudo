programa
{
	
	funcao inicio()
	{
		inteiro a, b, aux

		escreva("Indique um número para a variável A: ")
		leia(a)

		escreva("Indique um número para a variável B: ")
		leia(b)

		escreva("Variável antes da troca: \n")
		escreva("A = ", a + " B = ", b)

		aux = a
		a = b
		b = aux

		escreva("\nVariável depois da troca: \n")
		escreva("A = ", a + " B = ", b)
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 301; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */