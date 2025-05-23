# 🃏 Super Trunfo - Comparador de Países

Este projeto é um jogo simples de **Super Trunfo** desenvolvido em **C**, onde dois países são comparados automaticamente com base em diversos atributos, como população, área, PIB e número de pontos turísticos.

---

## ✨ Funcionalidades

✅ Entrada dos dados de **dois países**

📊 Cálculo automático da **densidade demográfica**

⚔️ Comparação de **todos os atributos** com destaque para o vencedor

🏆 Regras claras:
- Em todos os atributos, **vence o maior valor**
- Exceto na **densidade demográfica**, onde o **menor valor vence**

---

## 🧑‍💻 Como compilar e executar

### 🛠️ Compilar com GCC

Navegue até a pasta do projeto e execute:

```bash
gcc cartas.c -o cartas.exe
```

### ▶️ Executar o programa

```bash
./cartas.exe
```

---

## 🕹️ Como jogar

1. O programa solicitará as **informações dos dois países**.
2. Em seguida, fará a **comparação automática** entre os atributos.
3. Os **resultados serão exibidos no terminal**, destacando o vencedor de cada categoria.

---

## 📊 Atributos para comparação

- 👥 **População** (int) → vence o **maior** valor  
- 🌍 **Área (km²)** (float) → vence o **maior** valor  
- 💰 **PIB (bilhões de dólares)** (float) → vence o **maior** valor  
- 🏛️ **Pontos turísticos** (int) → vence o **maior** valor  
- 📉 **Densidade demográfica** (calculada) → vence o **menor** valor  

---

## 🧾 Exemplo de uso

### Entrada do usuário:

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

### Saída esperada:

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

---

## 🔧 Tecnologias utilizadas

- 🖥️ Linguagem **C**
- 🛠️ Compilador **GCC**
- 💬 Entrada e saída via **terminal**

---



