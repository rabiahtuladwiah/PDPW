#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    cout << " Nama : Rabiahtul Adawiah Hasyani " << endl;
    cout << " NIM  : 4213550028 " << endl;
    cout << " Kelas: PSIK C 21  " << endl;
    cout << endl;
    
    // Tugas Stack
    stack<int> Stack; // Membuat stack
    int n,a;
    cout << "Stack"<< endl;
    cout << "Masukkan banyak data dalam stack : ";
    cin >> n;
    cout << "Masukkan data dalam stack : ";
    for (int i = 1; i <= n; i++) {
        cin >> a;
        Stack.push(a); // Memasukkan data ke dalam stack
    }

    cout << "Data dalam stack : ";
    while (!Stack.empty()) {
        cout << Stack.top() << " "; // Menampilkan data dari stack
        Stack.pop();
    }
}
