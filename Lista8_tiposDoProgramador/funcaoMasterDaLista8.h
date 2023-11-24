#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<conio.h>
#include<locale.h>


enum TpSexo {M = 1, F};
enum TpEstadoCívil {solteiro = 1, casado, viúvo, separado, desquitado};

struct Endereço{

  enum TpLogradouro {Rua = 1, avenida, estrada, jardim, morro, largo};
  int numero;
  char* complemento;
  char* bairro;
  char* cidade;
  char* estado;
  int cep;

};

struct xadrez {

 int x;
 char y;

};

struct parOrdenado {

  float posiX;
  float posiY;
};

struct fracao{
  int numerador;
  int denominador;
};

struct agenda {

 int ddd;
 int numero;

 enum TpTelefone {residencuial = 1, comercial, celular, fixo};

 char* nomeDoUsuario;

};

 struct poltrona {

  enum TpCorSetor {Azul = 1, amarelo, verde, branco};
  char fileira;
  int caadeira;


 };
