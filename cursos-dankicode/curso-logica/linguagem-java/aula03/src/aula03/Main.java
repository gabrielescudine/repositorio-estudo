package aula03;

import com.gabrielescudine.utilidades.Utils;

public class Main extends Utils {
	
	public Main(float peso, String nome) {
		super(peso, nome);
		// TODO Auto-generated constructor stub
	}

	public static void main(String[] args) {
		//Utils utils = new Utils(40.5f, "Jeba");
		Main main = new Main(70.5f, "Jeba");
		main.printQualquer();
	}
}
