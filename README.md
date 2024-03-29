# Árvore N-ária

## Descrição ❓
Este é um programa em C++ que implementa uma árvore n-ária. Uma árvore n-ária é uma estrutura de dados onde cada nó pode ter um número variável de filhos. Neste programa, os nós da árvore contêm uma chave do tipo inteiro e podem ter qualquer número de filhos. O programa oferece funcionalidades para criar uma árvore, inserir novos nós e exibir a árvore.

## Funcionalidades 💢

- `PONT criaNovoNo(TIPOCHAVE ch)`: Cria um novo nó com a chave especificada.
- `PONT inicializa(TIPOCHAVE ch)`: Inicializa a árvore com um único nó raiz contendo a chave especificada.
- `PONT buscaChave(TIPOCHAVE ch, PONT raiz)`: Busca por um nó com a chave especificada na árvore a partir do nó raiz.
- `bool insere(PONT raiz, TIPOCHAVE novaChave, TIPOCHAVE chavePai)`: Insere um novo nó com a chave especificada como filho do nó com a chave de pai especificada.
- `void exibirArvore(PONT raiz)`: Exibe a árvore a partir do nó raiz.

## Compilação e Execução 💥

Para compilar o programa, você pode utilizar um compilador C++ compatível com o padrão C++11. Por exemplo, para compilar utilizando g++, você pode utilizar o seguinte comando:
