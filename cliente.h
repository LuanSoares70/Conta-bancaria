#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>
using namespace std;

class Cliente {
private:
    string nome;
    string cpf;

public:
    Cliente(string a, string b);
    string getcpf() const;
    string getnome() const;
};

#endif
