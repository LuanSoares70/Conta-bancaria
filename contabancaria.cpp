#include "ContaBancaria.h"

ContaBancaria::ContaBancaria(int n, Cliente t, double s)
    : numero(n), saldo(s), titular(t) {}

int ContaBancaria::getnumero() const {
    return numero;
}

double ContaBancaria::getsaldo() const {
    return saldo;
}

void ContaBancaria::setsaldo(double valor) {
    if (valor >= 0) {
        saldo = valor;
    }
}

void ContaBancaria::depositar(double valor) {
    if (valor > 0) {
        saldo += valor;
    }
}

void ContaBancaria::sacar(double valor) {
    if (valor > 0 && saldo >= valor) {
        saldo -= valor;
    } else {
        cout << "Saldo insuficiente.\n";
    }
}

void ContaBancaria::transferir(double valor, ContaBancaria &destino) {
    if (valor > 0 && saldo >= valor) {
        saldo -= valor;
        destino.depositar(valor);
    } else {
        cout << "Saldo insuficiente ou valor inválido.\n";
    }
}

void ContaBancaria::transferir(double valor, ContaBancaria &destino1, ContaBancaria &destino2) {
    double metade = valor / 2.0;
    if (valor > 0 && saldo >= valor) {
        saldo -= valor;
        destino1.depositar(metade);
        destino2.depositar(metade);
    } else {
        cout << "Saldo insuficiente ou valor inválido.\n";
    }
}

void ContaBancaria::exibirSaldo() const {
    cout << "Conta " << numero << " - Saldo: R$ " << saldo << endl;
}

void ContaBancaria::exibirInformacoes() const {
    cout << "Conta: " << numero << endl;
    cout << "Titular: " << titular.getnome() << " | CPF: " << titular.getcpf() << endl;
    cout << "Saldo: R$ " << saldo << "\n" << endl;
}