package com.gabrielescudine.utilidades;

public class Utils {
	public int idade = 32;
	public float peso = 90.4f;
	private String nome = "Gabriel";
	
	public void printPrivado() {
		this.printNome();	
	}
	private void printNome() {
		System.out.println(nome);
	}
	
	public int getIdade() {
		return idade;
	}
}
