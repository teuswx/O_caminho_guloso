> Status finished :heavy_check_mark:

# Exercício de Laboratório
## Problema
<body>
    <p>O objetivo é obter o caminho com a maior soma adjacente entre os números contidos na matriz, partindo do ínicio [0][0] até o final [N][N].</p>
</body>

## Descrição

<body>
    <p> O código foi projetado usando a ideia de um algoritmo guloso, percorrendo a matriz quadrada a partir do ponto [0][0] obtendo a maior soma adjacente até o ponto[N][N] com N definido pelo usuário, ou ja estabelecido no arquivo de entrada da matriz.</p>
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

![478 (1)](https://user-images.githubusercontent.com/102326098/225345250-6e0903e8-0917-428c-b454-bcdb3fe8dbaa.png)

 ## Algoritmo
 <body>
    <p>1-Ao inicar, o programa irá ler o arquivo já com o nome padronizado como "input.data", obtendo o tamanho da matriz N que se encontra na primeira linha do arquivo.</p>
    <p>2-Posteriormente o algoritmo vai criar uma matriz[N][N] para registrar o conteúdo do arquivo sempre pegando um número de cada vez no formato string e convertendo-o para dados do tipo inteiro.</p>
    <p>3-Para realizar o algoritmo que percorre a matriz os casos específicos foram divididos em passos com cada passo sendo uma estrutura condicional if enquanto o laço     while é verdadeiro. Cada if contém um tratamento específico como mostrado no código exemplo abaixo.</p>
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
    <p>4-Ao final o programa retorna a soma de todos os caminhos adjacentes das matrizes.</p>
   
</body>
 Obs..
    <p>O programa roda enquanto o arquivo não chega ao final.</p>
    <p>O algoritmo funciona apenas com dados do tipo inteiro positivo.</p>
      
 ## Exemplo de execução
 <body>
     <p>Arquivo:</p>
  </body>

 ![image](https://user-images.githubusercontent.com/102326098/225883350-9cd4086e-2c2c-4e0f-b408-03d397bf0c63.png)

<body>
     <p>Execução:</p>
  </body>


 ![image](https://user-images.githubusercontent.com/102326098/225883883-ef3cdb45-52c7-4c4b-b4fd-c9fd7720e99b.png)
 ## Perguntas
<body>
  <ol>
  1- Há mais de uma maneira de resolver esse problema ?<br/>
    <p>Resposta: No meu nível de racíocinio atual, foi possível desenvolver uma solução com o custo computacional extremamente alto. Entretanto, acredito que há maneiras mais inteligentes de resolver esse problema, como por exemplo, ordenar os maiores valores contidos na matriz e adicionar em um vetor ou lista. Assim, reduzindo o custo computacional gerado pelos laços de repetição.</p>
    
  2- Há algoritmos em literatura que resolvam esse problema ?<br/>
    Resposta: Sim, estão listados alguns desses algoritmos a baixo.
    <ul>
        <li>[Algoritmo de Força Bruta](https://www.freecodecamp.org/portuguese/news/algoritmos-de-forca-bruta-explicados/): Este algoritmo testa todas as possibilidades de caminhos através da matriz e determina qual caminho tem a maior soma. É um algoritmo simples e fácil de entender, mas pode ser ineficiente em matrizes grandes, pois sua complexidade é exponencial.</li>
        <li>[Algoritmo de Programação Dinâmica](https://www.ime.usp.br/~pf/analise_de_algoritmos/aulas/dynamic-programming.html): Este algoritmo resolve o problema da maior soma do caminho através da construção de uma tabela que armazena as somas máximas de todos os subcaminhos possíveis. O algoritmo começa pela primeira linha da matriz e, em seguida, trabalha para baixo, calculando as somas máximas de todos os subcaminhos possíveis até chegar à última linha. É um algoritmo eficiente e tem uma complexidade de tempo de O(n^2), onde n é o tamanho da matriz.</li>
        <li>[Algoritmo de Backtracking](http://www3.decom.ufop.br/toffolo/site_media/uploads/2011-1/bcc402/slides/10._backtracking.pdf): Este algoritmo utiliza uma abordagem de tentativa e erro para percorrer todos os possíveis caminhos através da matriz e determinar qual caminho tem a maior soma. O algoritmo começa na posição (0,0) da matriz e, em seguida, tenta avançar para a próxima posição, calculando a soma do caminho até esse ponto. Se a soma é maior do que a soma máxima encontrada até agora, a posição atual é adicionada ao caminho máximo. Se a soma não for maior, o algoritmo retorna à posição anterior e tenta outra direção. É um algoritmo mais lento que o algoritmo de programação dinâmica, mas pode ser mais fácil de implementar em certas situações.</li>
        <li>[Algoritmo de Divisão e Conquista](https://www.ime.usp.br/~pf/analise_de_algoritmos/aulas/divide-and-conquer.html): Este algoritmo divide a matriz em submatrizes menores e calcula a maior soma de caminho para cada submatriz. Em seguida, combina as soluções de cada submatriz para determinar a maior soma de caminho para a matriz inteira. É um algoritmo eficiente e tem uma complexidade de tempo de O(n^3), onde n é o tamanho da matriz.</li>
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
