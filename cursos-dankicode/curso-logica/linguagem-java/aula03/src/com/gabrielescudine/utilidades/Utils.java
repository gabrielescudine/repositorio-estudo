package com.gabrielescudine.utilidades;

public class Utils {
	
	public int idade = 20;
	public float peso = 30.3f;
	public String nome = "Gabriel";
	
	public Utils(float peso, String nome) {
		this.nome = nome;
		this.peso = peso;
		System.out.println(nome);
		System.out.println(peso);
		System.out.println(this.nome);
		System.out.println(this.peso);
	}
	
	public void printQualquer() {
		System.out.println("Hello World!");
	}
}
