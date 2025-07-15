import subprocess
import csv

tamanhos = [10000, 50000, 100000, 500000, 1000000]
algoritmos = [1, 2]  # 1 = Selection Sort, 2 = Quick Sort

with open('resultados.csv', 'w', newline='') as csvfile:
    writer = csv.writer(csvfile, delimiter=';')
    writer.writerow(['tamanho', 'algoritmo', 'tempo_em_segundos'])
    for tamanho in tamanhos:
        for algoritmo in algoritmos:
            print(f"Testando tamanho {tamanho} com algoritmo {algoritmo}...")
            resultado = subprocess.run(['./ordenacao', str(tamanho), str(algoritmo)], capture_output=True, text=True)
            saida = resultado.stdout.strip()
            if resultado.returncode == 0:
                writer.writerow(saida.split(';'))
            else:
                print(f"Erro: {resultado.stderr}")

print("Testes concluídos e resultados salvos em resultados.csv")
