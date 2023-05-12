#include <iostream>
#include <string>
#include <cmath>

using namespace std;


int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}


void generate_key(int p, int q, int& n, int& e, int& d) {
    
    n = p * q;
    int phi = (p - 1) * (q - 1);


    for (e = 2; e < phi; e++) {
        if (gcd(e, phi) == 1)
            break;
    }

 
    int k = 1;
    while (true) {
        d = (k * phi + 1) / e;
        if (d * e % phi == 1)
            break;
        k++;
    }
}


string encrypt(string message, int e, int n) {
    string encrypted = "";

    
    for (char c : message) {
        
        int m = (int)c;
        int crypted = 1;
        for (int i = 0; i < e; i++)
            crypted = (crypted * m) % n;
        encrypted += to_string(crypted) + " ";
    }
    return encrypted;
}

int main() {
    int p, q, n, e, d;
    string message, encrypted;

   
    cout << "Enter two prime numbers: ";
    cin >> p >> q;

    
    generate_key(p, q, n, e, d);

  
    cout << "Enter a message to encrypt: ";
    cin.ignore();
    getline(cin, message);

    
    encrypted = encrypt(message, e, n);
    cout << "Encrypted message: " << encrypted << endl;

    return 0;
}



