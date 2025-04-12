#include <stdio.h>

int main() {
    float preco, novoPreco;

    printf("Digite o preco do produto: ");
    scanf("%f", &preco);

    if (preco <= 50) {
        novoPreco = preco * 1.05;
    } else if (preco <= 100) {
        novoPreco = preco * 1.10;
    } else {
        novoPreco = preco * 1.15;
    }

    printf("O novo preco do produto e: %.2f\n", novoPreco);

    return 0;
}
