package aula04;

class Calculadora {
    int somar(int a, int b) {
        return a + b;
    }

    double somar(double a, double b) {
        return a + b;
    }
}


class Animal {
    void fazerSom() {
        System.out.println("Som genérico de animal");
    }
}

class Cachorro extends Animal {
    @Override
    void fazerSom() {
        System.out.println("Latindo...");
    }
}

//Classe abstrata que serve como modelo para todos os veículos
abstract class Veiculo {
 // Atributos comuns a todos os veículos
 String marca;
 int anoFabricacao;

 // Método abstrato que representa um comportamento genérico
 abstract void acelerar();

 // Método abstrato para exibir informações básicas sobre o veículo
 abstract void exibirInformacoes();
}

//Classe concreta representando um carro
class Carro extends Veiculo {
 @Override
 void acelerar() {
     System.out.println("Carro acelerando...");
 }

 @Override
 void exibirInformacoes() {
     System.out.println("Carro - Marca: " + marca + ", Ano: " + anoFabricacao);
 }
}

//Classe concreta representando uma bicicleta
class Bicicleta extends Veiculo {
 @Override
 void acelerar() {
     System.out.println("Pedalando mais rápido...");
 }

 @Override
 void exibirInformacoes() {
     System.out.println("Bicicleta - Marca: " + marca + ", Ano: " + anoFabricacao);
 }
}

public class Main {
    public static void main(String[] args) {
        // Instanciando objetos das classes concretas
        Carro meuCarro = new Carro();
        meuCarro.marca = "Toyota";
        meuCarro.anoFabricacao = 2022;

        Bicicleta minhaBicicleta = new Bicicleta();
        minhaBicicleta.marca = "Trek";
        minhaBicicleta.anoFabricacao = 2021;

        // Chamando métodos abstratos de forma genérica
        meuCarro.acelerar();
        meuCarro.exibirInformacoes();

        minhaBicicleta.acelerar();
        minhaBicicleta.exibirInformacoes();
    }
}
