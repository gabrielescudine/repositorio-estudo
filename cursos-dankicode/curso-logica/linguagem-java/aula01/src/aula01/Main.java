package aula01;

public class Main {
	
	/*public static void printTeste() {
		System.out.println("Testando");
	}*/
	
	public static void main(String[] args) {
		Utils utils = new Utils();
		Utils.numero = 50;
		System.out.println(Utils.numero);
		utils.printTestando();
		
		Utils utils2 = new Utils();
		System.out.println(Utils.numero); //Por ser um objeto estático, o certo é invocar a classe principal(Utils);
		//utils2.printTestando();
		
		Utils utils3 = new Utils();
		utils.numero2 = 30;
		System.out.println(utils3.numero2);
		
		Utils utils4 = new Utils();
		System.out.println(utils4.numero2);
	}
}
