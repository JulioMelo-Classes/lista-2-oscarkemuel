# Lista de exercicio de Ranges

Os conteúdos da lista de exercício estão no repositório: [Lista 2](https://github.com/JulioMelo-Classes/LP1-2021.1-Lista2.git), clone esse repositório em sua máquina e copie
os diretórios de cada questão. Usaremos esse formato para evitar os problemas de atualização que ocorreram na Lista 1. Caso hajam atualizações a serem feitas, vocês mesmos
irão atualizar os diretórios das suas questões fazendo o download novamente do diretório original (atualizado) e substituindo os arquivos necessários.

# Resolvendo as questões

Inicialmente copie o diretório **test_manager** para seu repositório, após isso copie o diretório contendo a questão que você vai resolver. O seu repositório deve 
ficar da seguinte forma:

```
test_manager
copy
find
find_if
```
Para compilar e executar use um dos formatos que seguem.

## Usando cmake
Nesta lista, todos os exercícios serão de implementação de função, todos os testes estão no arquivo `src/main.cpp`, você pode disabilitar os testes se achar necessário.

A compilação e execução das questões pode ser feita usando cmake, por exemplo se quisermos implementar a questão copy:

```
cd copy
mkdir build
cd build
cmake ..
cmake --build .
```
A compilação gera um executável com o nome run_tests dentro da pasta build, __no windows__ esse executável fica na pasta Debug. Logo após a compilação, para executar o programa gerado use os comandos:

No linux:
```
./run_tests
```
No windows:
```
.\Debug\run_tests.exe
```

## Usando compilação manual com g++

É possível compilar o programa "na mão" usando o g++, para isso use o comando abaixo a partir do diretório da questão específica, mais uma vez usando a questão copy como exemplo:
```
cd copy
g++ ../test_manager/src/test_manager.cpp src/main.cpp -I./include -I../test_manager/include -o run_tests
```
Neste caso, independente se é windows ou linux, o executável é gerado no diretório corrente, bastando executá-lo depois.
