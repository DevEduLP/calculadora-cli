# Calculadora CLI em C (v1.0)

Uma aplicação de linha de comando leve desenvolvida em C para realização de operações aritméticas básicas com validações de fluxo e tratamento de exceções.

## Funcionalidades
- Operações de Soma, Subtração, Multiplicação e Divisão.
- Tratamento de erro para divisão por zero ($X / 0$).
- Leitura condicional de entradas conforme a opção selecionada.
- Menu interativo continuado via laço de repetição.

## Conceitos Utilizados
- Controle de fluxo (`do-while`, `switch-case`, `if/else`)
- Entrada e saída formatada (`printf`, `scanf`)
- Operadores aritméticos e lógicos

## Como Compilar e Executar

```bash
# Navegar até o diretório do código-fonte
cd src

# Compilar com GCC
gcc calculadora.c -o calculadora

# Executar
./calculadora
```
