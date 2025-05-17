#include <iostream>
using namespace std;

class Buku {
private:
    string judul;
    string penulis;
    bool dipinjam;

public:
    Buku(string j, string p) : judul(j), penulis(p), dipinjam(false) {}

    friend void prosesPinjam(Buku& b, Peminjam* p);
    friend void prosesKembali(Buku& b);
};