#include "Cliente.h"

Cliente::Cliente(string a, string b) : nome(a), cpf(b) {}

string Cliente::getcpf() const {
    return cpf;
}

string Cliente::getnome() const {
    return nome;
}

