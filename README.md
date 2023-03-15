> Status Developing :warning:

# Exercício de Laboratório

## Descrição

<body>
    <p> O código foi projetado usando a ideia de um algoritmo guloso. O objetivo é percorrer uma matriz quadrada a partir do ponto [0][0] somando todos os maiores números até o ponto[N][N] com N definido pelo usuário, ou ja estabelecido no arquivo de entrada da matriz.</p>
</body>

## Instruções

<body>
  <ol>
    
    1- Preenche a matriz N x N com um arquivo lido pelo programa;

    2- Considere a posição Linha 0 e Coluna 0 (0,0) como início;

    3- Considere a posição (N, N) como posição final;

    4- Percorra a matriz a partir do início, somando a cada passo, o próximo maior valor encontrado;

    5- O próximo valor pode ser o que está na mesma linha e imediatamente à direita, imediatamente à esquerda, bem como, o que está na coluna abaixo do numero ou na diagonal da esquerda ou da direita
    </ol>
</body>

![478](https://user-images.githubusercontent.com/102326098/225309128-f9cee19f-542e-4d0f-a969-e26244f4dc4f.png)
 ## Algoritmo
 <body>
    <p>Para realizar o algoritmo que percorre a matriz os casos específicos foram divididos em passos com cada passo sendo uma estrutura condicional if enquanto o laço     while é verdadeiro. Cada if contém um tratamento específico como mostrado no código exemplo abaixo.</p>
    <pre>
        <code>
            while (Enquanto não chega no último elento da matriz){
                if(Trata o caso específico em que o número está na primeira linha){
                    //código
                }
                else if(Trata o caso específico em que o número está na última linha){
                    //código
                }
                else if(Trata o caso específico em que o número está na primeira coluna){
                    //código
                }
                else if(Trata o caso específico em que o número está na última coluna){
                    //código
                }
                else if(Trata o caso específico em que o número está no meio da matriz){
                    //código
                }
            }
        </code>
    </pre>
</body>

 ## Perguntas
<body>
  <ol>
  1- Há mais de uma maneira de resolver esse problema ?<br/>
    Resposta: Sim, com ponteiros ou usando outros tipos de algoritmos.<br/><br/>
    
  2- Há algoritmos em literatura que resolvam esse problema ?<br/>
    Resposta: Sim, estão listados alguns desses algoritmos a baixo.
    <ul>
        <li>Algoritmo de Força Bruta: Este algoritmo testa todas as possibilidades de caminhos através da matriz e determina qual caminho tem a maior soma. É um algoritmo simples e fácil de entender, mas pode ser ineficiente em matrizes grandes, pois sua complexidade é exponencial.</li>
        <li>Algoritmo de Programação Dinâmica: Este algoritmo resolve o problema da maior soma do caminho através da construção de uma tabela que armazena as somas máximas de todos os subcaminhos possíveis. O algoritmo começa pela primeira linha da matriz e, em seguida, trabalha para baixo, calculando as somas máximas de todos os subcaminhos possíveis até chegar à última linha. É um algoritmo eficiente e tem uma complexidade de tempo de O(n^2), onde n é o tamanho da matriz.</li>
        <li>Algoritmo de Backtracking: Este algoritmo utiliza uma abordagem de tentativa e erro para percorrer todos os possíveis caminhos através da matriz e determinar qual caminho tem a maior soma. O algoritmo começa na posição (0,0) da matriz e, em seguida, tenta avançar para a próxima posição, calculando a soma do caminho até esse ponto. Se a soma é maior do que a soma máxima encontrada até agora, a posição atual é adicionada ao caminho máximo. Se a soma não for maior, o algoritmo retorna à posição anterior e tenta outra direção. É um algoritmo mais lento que o algoritmo de programação dinâmica, mas pode ser mais fácil de implementar em certas situações.</li>
        <li>Algoritmo de Divisão e Conquista: Este algoritmo divide a matriz em submatrizes menores e calcula a maior soma de caminho para cada submatriz. Em seguida, combina as soluções de cada submatriz para determinar a maior soma de caminho para a matriz inteira. É um algoritmo eficiente e tem uma complexidade de tempo de O(n^3), onde n é o tamanho da matriz.</li>
    </ul>
  3- Pode existir mais de um caminho cujo valor total é o maximo?<br/>
    Resposta: Sim, quando os valores da matriz são iguais.<br/><br/>
  </ol>

  ## Compilação e Execução 

A pilha dinâmica disponibilizada possui um arquivo Makefile que realiza todo o procedimento de compilação e execução. Para tanto, temos as seguintes diretrizes de execução:


| Comando                |  Função                                                                                           |                     
| -----------------------| ------------------------------------------------------------------------------------------------- |
|  `make clean`          | Apaga a última compilação realizada contida na pasta build                                        |
|  `make`                | Executa a compilação do programa utilizando o gcc, e o resultado vai para a pasta build           |
|  `make run`            | Executa o programa da pasta build após a realização da compilação                                 |

</body>
