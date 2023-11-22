package aula02;

import com.gabrielescudine.utilidades.Utils;

public class Main {
	public static void main(String[] args) {
		Utils utils = new Utils();
		utils.peso = 80.5f;
		utils.idade = 32;
		utils.printPrivado();
		
		System.out.println(utils.peso);
		System.out.println(utils.idade);
		System.out.println(new Utils().getIdade());
	}
}
