# Super Trunfo - Comparador de Países

Este projeto é um jogo simples de Super Trunfo, onde dois países são comparados com base em diversos atributos, como população, área, PIB e número de pontos turísticos.

## Funcionalidades
- Permite a entrada dos dados de dois países.
- Calcula automaticamente a densidade demográfica.
- Compara todos os atributos automaticamente.
- Apresenta os resultados de forma clara, destacando o vencedor para cada categoria.
- Segue a regra especial onde **densidade demográfica** é o único atributo em que o **menor valor vence**.

## Como compilar e executar

### **Compilar o código**
Caso esteja utilizando **GCC**, execute o seguinte comando no terminal após o comando cd com o local da pasta:

```sh
gcc cartas.c -o cartas.exe
```

### **Executar o programa**
```sh
./cartas.exe
```

## Como jogar

1. Ao iniciar o programa, o usuário deverá fornecer os dados de dois países.
2. O programa realizará a comparação automaticamente para todos os atributos.
3. O resultado será exibido no terminal, mostrando qual país venceu em cada categoria.

## Atributos disponíveis para comparação
- **População** (int) → vence o maior valor.
- **Área (km²)** (float) → vence o maior valor.
- **PIB (bilhões de dólares)** (float) → vence o maior valor.
- **Número de pontos turísticos** (int) → vence o maior valor.
- **Densidade demográfica** (float) → vence o **menor** valor.

## Exemplo de entrada e saída

### **Entrada do usuário**
```
Informe os dados da carta 1:
Nome do país: Brasil
População: 213000000
Área (km²): 8515767
PIB (em bilhões de dólares): 1444730
Número de pontos turísticos: 50

Informe os dados da carta 2:
Nome do país: França
População: 67000000
Área (km²): 551695
PIB (em bilhões de dólares): 2786700
Número de pontos turísticos: 120
```

### **Saída esperada**
```
===== Comparação de Atributos =====

População:
Brasil: 213000000.00 vs França: 67000000.00
Resultado: Brasil venceu!

Área:
Brasil: 8515767.00 vs França: 551695.00
Resultado: Brasil venceu!

PIB:
Brasil: 1444730.00 vs França: 2786700.00
Resultado: França venceu!

Número de pontos turísticos:
Brasil: 50.00 vs França: 120.00
Resultado: França venceu!

Densidade Demográfica:
Brasil: 25.00 vs França: 122.00
Resultado: Brasil venceu!
```

## Tecnologias utilizadas
- Linguagem C
- Compilador GCC
- Terminal (para entrada e saída de dados)


