#include <iostream>
using namespace std;

typedef int TIPOCHAVE;

struct no
{
    TIPOCHAVE chave;
    struct no *primFilho;
    struct no *proxIrmao;
};

typedef struct no *PONT;

PONT criaNovoNo(TIPOCHAVE ch)
{
    PONT novo = new struct no;
    novo->primFilho = NULL;
    novo->proxIrmao = NULL;
    novo->chave = ch;
    return (novo);
}

PONT inicializa(TIPOCHAVE ch)
{
    return criaNovoNo(ch);
}

PONT buscaChave(TIPOCHAVE ch, PONT raiz)
{
    if (raiz == NULL)
        return NULL;
    if (raiz->chave == ch)
        return raiz;
    PONT p = raiz->primFilho;
    while (p)
    {
        PONT resp = buscaChave(ch, p);
        if (resp)
            return resp;
        p = p->proxIrmao;
    }
    return NULL;
}

bool insere(PONT raiz, TIPOCHAVE novaChave, TIPOCHAVE chavePai)
{
    PONT pai = buscaChave(chavePai, raiz);
    if (!pai)
        return false;
    PONT filho = criaNovoNo(novaChave);
    PONT p = pai->primFilho;
    if (!p)
        pai->primFilho = filho;
    else
    {
        while (p->proxIrmao)
        {
            p = p->proxIrmao;
        }
        p->proxIrmao = filho;
    }
    return true;
}

void exibirArvore(PONT raiz)
{
    if (raiz == NULL)
        return;
    cout << raiz->chave << "(";
    PONT p = raiz->primFilho;
    while (p)
    {
        exibirArvore(p);
        p = p->proxIrmao;
    }
    cout << ")";
}

int main()
{
    PONT r = inicializa(8);
    insere(r, 15, 8);
    insere(r, 20, 15);
    insere(r, 10, 15);
    insere(r, 28, 15);
    insere(r, 23, 8);
    insere(r, 2, 8);
    insere(r, 36, 2);
    insere(r, 7, 2);
    exibirArvore(r);
    return 0;
}