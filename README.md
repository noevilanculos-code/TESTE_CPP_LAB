# Sistema de Gestão de Pessoas em C++

## 📖 Descrição

Este projeto foi desenvolvido no âmbito da disciplina de **Laboratório II (C++)** da Licenciatura em Informática.

O sistema implementa conceitos fundamentais de Programação Orientada a Objetos (POO), utilizando uma classe abstrata `Pessoa` como base para as classes `Estudante` e `Professor`.

O projeto demonstra a aplicação dos principais pilares da POO:

* Encapsulamento
* Herança
* Abstração
* Polimorfismo

---

## 🚀 Funcionalidades

* Cadastro de estudantes
* Cadastro de professores
* Listagem de estudantes
* Listagem de professores
* Pesquisa de pessoas por nome
* Remoção de registos
* Demonstração de polimorfismo (Late Binding)
* Cálculo de média dos estudantes
* Verificação de aprovação dos estudantes
* Atualização salarial dos professores

---

## 🏗️ Estrutura do Projeto

```text
1-Pessoa.h
2-Pessoa.cpp

3-Estudante.h
4-Estudante.cpp

5-Professor.h
6-Professor.cpp

7-Sistema.h
8-Sistema.cpp

main.cpp
```

---

## 🛠️ Tecnologias Utilizadas

* C++
* Programação Orientada a Objetos (POO)
* Dev-C++
* GCC Compiler

---

## 📚 Conceitos Aplicados

### Encapsulamento

Proteção dos atributos através dos modificadores de acesso (`private`, `protected` e `public`).

### Herança

As classes `Estudante` e `Professor` herdam da classe base `Pessoa`.

### Abstração

A classe `Pessoa` é abstrata através do método virtual puro:

```cpp
virtual void mostrarDados() = 0;
```

### Polimorfismo

Utilização de ponteiros da classe base `Pessoa` para armazenar objetos das classes derivadas e invocar métodos em tempo de execução.

---

## ▶️ Como Executar

1. Abrir o projeto no Dev-C++;
2. Adicionar todos os ficheiros ao projeto;
3. Compilar o projeto;
4. Executar o programa.

---

## 👥 Participantes

* **Noé Samuel Vilanculos**
* **Honey Macário**
* **Shelsea Uane**
* **Adelina Jorge**

---

## 🎓 Instituição

**Licenciatura em Informática – 2.º Ano**
**Disciplina:** Laboratório II (C++)
**Ano Letivo:** 2026

---

## 📄 Licença

Este projeto foi desenvolvido para fins académicos e educativos.
