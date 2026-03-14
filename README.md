# 🌡️ Thermal Data Analyzer in C

Este projeto é um analisador de dados térmicos desenvolvido em linguagem C. Ele demonstra o uso prático de **matrizes bidimensionais**, **manipulação de arquivos (I/O)** e **processamento de dados estruturados**.

## 🚀 Sobre o Projeto

O objetivo deste programa é ler um conjunto de dados de temperatura (organizados por dia e período) a partir de um arquivo externo `.txt`, carregá-los na memória RAM utilizando uma matriz de precisão simples (`float`) e realizar cálculos estatísticos básicos (média diária).

Este projeto simula a base do funcionamento de motores de análise de dados, onde a performance e o controle de memória são cruciais.

## 🛠️ Conceitos Aplicados

* **File Handling:** Uso de `fopen`, `fscanf` e `fclose` para persistência de dados.
* **Matrizes (2D Arrays):** Armazenamento de dados em formato tabular (Linhas x Colunas).
* **Nested Loops:** Laços de repetição aninhados para percorrer a estrutura da matriz.
* **Data Formatting:** Saída de dados formatada com precisão decimal.

## 📂 Estrutura de Arquivos

* `main.c`: Código fonte do analisador.
* `dados.txt`: Dentro da pasta output, arquivo de entrada contendo as medições (7 dias x 3 períodos).

## ⚙️ Como Executar

1. Certifique-se de que o arquivo `dados.txt` esteja no mesmo diretório do executável.
2. Compile o código:
   ```bash
   gcc main.c -o analyser
