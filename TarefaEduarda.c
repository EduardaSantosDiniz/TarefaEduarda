int main() {
    int x, a, b, c, n, resultado;

    // Solicita ao usuário que digite um número de três algarismos (entre 100 e 999).
    printf("Digite um numero de tres algarismos (entre 100 e 999): ");
    scanf("%d", &x);

    // Verifica se o número digitado não possui três algarismos.
    if (x < 100 || x > 999) {
        printf("O numero digitado nao possui tres algarismos.\n");
        return 1; // Termina o programa com um código de erro.
    }

    // Divide o número em centenas, dezenas e unidades.
    a = x / 100;
    n = x % 100;
    b = n / 10;
    c = n % 10;

    // Verifica se a diferença entre as centenas e as unidades não é maior ou igual a 2.
    if (abs(a - c) < 2) {
        printf("A diferenca entre as centenas e as unidades nao e maior ou igual a 2.\n");
        return 1; // Termina o programa com um código de erro.
    }

    // Inverte a ordem dos algarismos, formando o número cba.
    int n_cba = c * 100 + b * 10 + a;

    // Soma x e n_cba, obtendo o número xyz.
    int xyz = x + n_cba;

    // Inverte a ordem de xyz, obtendo zyx.
    int zyx = (xyz % 10) * 100 + ((xyz / 10) % 10) * 10 + (xyz / 100);

    // Soma xyz e zyx para obter o resultado final.
    resultado = xyz + zyx;

    // Imprime o resultado.
    printf("Resultado: %d\n", resultado);

    return 0; // Retorna 0 para indicar que o programa foi executado com sucesso.
}
