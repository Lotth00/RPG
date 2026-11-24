# Mundo dos Pesadelos (RPG em C)

Jogo de aventura de texto feito em C para estudar a lógica de programação por trás de um jogo. A história acontece em um quarto escuro, e as escolhas do jogador levam a finais diferentes.

## Como funciona

- O jogador digita o nome do personagem e escolhe ações por menus numerados, como olhar embaixo da cama, verificar a porta ou observar a pintura.
- Cada escolha muda o rumo da história, e algumas levam ao fim do jogo.
- A cena da pintura tem diálogos com várias respostas e finais diferentes.
- Pausas entre as falas (`Sleep`) dão o ritmo da narrativa.

## O que pratiquei

- Estruturas de decisão (`switch`, `if`/`else`)
- Laços de repetição para manter o jogo ativo
- Variáveis de estado, como `jogo_ativo`, `feliz` e `pintura_menorie`, para lembrar o que já aconteceu
- Entrada e saída no terminal (`printf`, `scanf`)

## Como rodar

O jogo usa a biblioteca `windows.h` (função `Sleep`), então roda no Windows. É preciso ter um compilador C, como o GCC (MinGW).

```
git clone https://github.com/Lotth00/RPG.git
cd RPG
gcc RPG.c -o RPG
RPG.exe
```

## Observação

É um projeto de estudo: a história tem um único cenário, o quarto.
