# Lista 02 - Complexidade

**1. Explique o código e informe qual a complexidade temporal e espacial do código abaixo?**

```
FUNÇÃO soma_elementos(lista):
    total ← 0 
    PARA i DE 0 ATÉ TAMANHO(lista) - 1 FAÇA:
        total ← total + lista[i] 
    RETORNE total 
```

  
**2. Explique o código e informe qual a complexidade temporal e espacial do código abaixo?**

```
FUNÇÃO verificar_duplicatas(lista): 
    PARA i DE 0 ATÉ TAMANHO(lista) - 1 FAÇA: 
        PARA j DE i + 1 ATÉ TAMANHO(lista) - 1 FAÇA: 
            SE lista[i] == lista[j]: 
                RETORNE VERDADEIRO 
    RETORNE FALSO ()
```
    
**3. Explique o código e informe qual a complexidade temporal e espacial do código abaixo?**

```
FUNÇÃO fibonacci(n): 
    SE n ≤ 1: 
        RETORNE n 
    SENÃO: 
        RETORNE fibonacci(n - 1) + fibonacci(n - 2) 
```
        
**4. Explique o código e informe qual a complexidade temporal e espacial do código abaixo?**

```
FUNÇÃO inverter_lista(lista): 
    invertida ← LISTA VAZIA 
    PARA i DE TAMANHO(lista) - 1 ATÉ 0 PASSO -1 FAÇA: 
        invertida.ADICIONAR(lista[i]) 
    RETORNE invertida 
```
    
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
        
**6. Implemente todos os códigos em C++ em um único script e peça para que o usário 
escolha uma dessas funções para que ele execute. Qual é a mais demorada e qual é a mais 
rápida?**
