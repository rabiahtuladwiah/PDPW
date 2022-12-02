#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    cout << " Nama : Rabiahtul Adawiah Hasyani " << endl;
    cout << " NIM  : 4213550028 " << endl;
    cout << " Kelas: PSIK C 21  " << endl;
    cout << endl;
    
    queue<int> Queue; // Membuat queue
    int n,a;
    cout << "Queue"<< endl;
    cout << "Masukkan banyak data dalam queue : ";
    cin >> n;
    cout << "Masukkan data dalam queue : ";
    for (int i = 1; i <= n; i++) {
        cin >> a;
        Queue.push(a); // Memasukkan data ke dalam queue
    }

    cout << "Data dalam queue : ";
    while (!Queue.empty()) {
        cout << Queue.front() << " "; // Menampilkan data dari queue
        Queue.pop();
    }
}
