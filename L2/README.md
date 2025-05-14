# Lista 02 - Complexidade
### Aluno: Bruno Dias
**1. Explique o código e informe qual a complexidade temporal e espacial do código abaixo?**

```
FUNÇÃO soma_elementos(lista):
    total ← 0 
    PARA i DE 0 ATÉ TAMANHO(lista) - 1 FAÇA:
        total ← total + lista[i] 
    RETORNE total 
```
- **R:** O codigo acima mostra um função que percorre uma "lista[n]" e soma todos os seus indíces e salva na variavel "total", sendo assim a complexidade temporal total é = **O(N) - (Linear)**, e a sua complexidade espacial é = O(1) - (Constante).


  
**2. Explique o código e informe qual a complexidade temporal e espacial do código abaixo?**

```
FUNÇÃO verificar_duplicatas(lista): 
    PARA i DE 0 ATÉ TAMANHO(lista) - 1 FAÇA: 
        PARA j DE i + 1 ATÉ TAMANHO(lista) - 1 FAÇA: 
            SE lista[i] == lista[j]: 
                RETORNE VERDADEIRO 
    RETORNE FALSO ()
```
- **R:** O algoritmo acima percorre a "lista[n]" em comparando o indíce i com todos os outros elementos da  "lista[j]", caso seja o mesmo valor retorna verdadeiro, caso contrario retorna falso, sendo a ssim a complexidade temporal total é = **O(n^2) - (Quadrático)**, e a espacial é = **O(1) - (Constante)**.

**3. Explique o código e informe qual a complexidade temporal e espacial do código abaixo?**

```
FUNÇÃO fibonacci(n): 
    SE n ≤ 1: 
        RETORNE n 
    SENÃO: 
        RETORNE fibonacci(n - 1) + fibonacci(n - 2) 
```
- **R:** O algoritmo acima representa uma função responsiva, que nada mais é do que uma função que chama ela mesma, onde no momento em que n=1 o codigo começa a retornar caso contrario o codigo chama a mesma função 2x sendo assim a complexidade temporal é = **O(2^n) - (Exponencial)** e pela natureza da pilha de execução(chamadas), a complexidade espacial é = **O(n) - (Linear)**.

**4. Explique o código e informe qual a complexidade temporal e espacial do código abaixo?**

```
FUNÇÃO inverter_lista(lista): 
    invertida ← LISTA VAZIA 
    PARA i DE TAMANHO(lista) - 1 ATÉ 0 PASSO -1 FAÇA: 
        invertida.ADICIONAR(lista[i]) 
    RETORNE invertida 
```
- **R:** O algoritmo em questão recebe uma lista re retorna uma lista invertido, percorrendo a lista por completo de tras para frente e criando uma nova lista, portando a complexidade temporal é = **O(n) - (Linear)**, sendo tambem sua complexidade espacial = **O(n) - (Linear)**.

**5. Explique o código e informe qual a complexidade temporal e espacial do código abaixo?**

```
FUNÇÃO potencia(x, n): 
    SE n == 0: 
        RETORNE 1 
    SENÃO SE n % 2 == 0: 
        temp ← potencia(x, n / 2) 
        RETORNE temp * temp 
    SENÃO: 
        RETORNE x * potencia(x, n - 1) 
```
- **R:**  O algoritmo acima representa uma função de potenciação onde é utlizado a propriedade da matématica (x^n = x^(n/2) * x^(n/2)) e (x^n = x * x^(n-2)), criando assim uma pilha de chamdas recursivas reduzindo em n/2 o número de operações por chamada(divisao e conquista), sendo assim complexidade temporal é = **O(log n) - (logarítmica)**, sendo tambem sua complexidade espacial = **O(log n) - (logarítmica)**.


**6. Implemente todos os códigos em C++ em um único script e peça para que o usário 
escolha uma dessas funções para que ele execute. Qual é a mais demorada e qual é a mais 
rápida?**

- **R:**  A mais rapida com certeza será a **questão 05 - O(log n)** e a mais devagar será a **questão 03 - O(2^n)**.
