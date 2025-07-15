import pandas as pd
import matplotlib.pyplot as plt
from matplotlib.ticker import FuncFormatter

# Carrega os dados do CSV
df = pd.read_csv('resultados.csv', sep=';')

# Garante que as colunas tenham os tipos corretos
df['tamanho'] = df['tamanho'].astype(int)
df['tempo_em_segundos'] = df['tempo_em_segundos'].astype(float)

# Cria o gráfico com tamanho maior para evitar sobreposição
plt.figure(figsize=(12, 6))

# Plota os dados para cada algoritmo
for algoritmo in df['algoritmo'].unique():
    dados = df[df['algoritmo'] == algoritmo]
    plt.plot(dados['tamanho'], dados['tempo_em_segundos'], marker='o', label=algoritmo, linewidth=4,markersize=8 )

# Títulos e rótulos
plt.xlabel('Tamanho do array')
plt.ylabel('Tempo de execução (segundos)')
plt.title('Desempenho dos Algoritmos de Ordenação')

# Rotaciona os valores do eixo X para evitar sobreposição
plt.xticks(df['tamanho'].unique(), rotation=68)

# Formata os números do eixo X com separador de milhar
formatter = FuncFormatter(lambda x, _: f'{int(x):,}')
plt.gca().xaxis.set_major_formatter(formatter)

# Exibe grade, legenda e layout ajustado
plt.grid(True)
plt.legend()
plt.tight_layout()

# Exibe o gráfico
plt.show()
