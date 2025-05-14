# Lista 02 - Complexidade

**1. Explique o código e informe qual a complexidade temporal e espacial do código abaixo?**<br>

```
FUNÇÃO soma_elementos(lista):
    total ← 0 
    PARA i DE 0 ATÉ TAMANHO(lista) - 1 FAÇA:
        total ← total + lista[i] 
    RETORNE total 
```
    
**2. Explique o código e informe qual a complexidade temporal e espacial do código abaixo?**<br>

FUNÇÃO verificar_duplicatas(lista): <br>
    PARA i DE 0 ATÉ TAMANHO(lista) - 1 FAÇA: <br>
        PARA j DE i + 1 ATÉ TAMANHO(lista) - 1 FAÇA: <br>
            SE lista[i] == lista[j]: <br>
                RETORNE VERDADEIRO <br>
    RETORNE FALSO ()<br>

    
**3. Explique o código e informe qual a complexidade temporal e espacial do código abaixo?**<br>

FUNÇÃO fibonacci(n): <br>
    SE n ≤ 1: <br>
        RETORNE n <br>
    SENÃO: <br>
        RETORNE fibonacci(n - 1) + fibonacci(n - 2) <br>

        
**4. Explique o código e informe qual a complexidade temporal e espacial do código abaixo?**<br>

FUNÇÃO inverter_lista(lista): <br>
    invertida ← LISTA VAZIA <br>
    PARA i DE TAMANHO(lista) - 1 ATÉ 0 PASSO -1 FAÇA: <br>
        invertida.ADICIONAR(lista[i]) <br>
    RETORNE invertida <br>

    
**5. Explique o código e informe qual a complexidade temporal e espacial do código abaixo?**<br>

FUNÇÃO potencia(x, n): <br>
    SE n == 0: <br>
        RETORNE 1 <br>
    SENÃO SE n % 2 == 0: <br>
        temp ← potencia(x, n / 2) <br>
        RETORNE temp * temp <br>
    SENÃO: <br>
        RETORNE x * potencia(x, n - 1) <br>

        
**6. Implemente todos os códigos em C++ em um único script e peça para que o usário 
escolha uma dessas funções para que ele execute. Qual é a mais demorada e qual é a mais 
rápida?**
