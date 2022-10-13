#include <bits/stdc++.h>

using namespace std;

// В реализации фичи будет 2 бага
// 1 баг - неправильная реализация самого алгоритма, его пофиксим в релизе
// 2 баг - возращаться будет unsigned, а пользователь будет переполнять, надо будет заменить на unsigned long long

unsigned EuclideAlgorithm(unsigned a, unsigned b) {
    if (a < b) {
        return EuclideAlgorithm(b, a);
    }
    if (a % b == 0) {
        return b;
    }
    return EuclideAlgorithm(b, b % a);
}


int main() {

    return 0;
}