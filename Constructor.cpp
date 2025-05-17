#include <iostream>
#include <string>
using namespace std;

class Buku
{
private:
    string judul;
    string penulis;
    string peminjam;
    bool dipinjam;

public:
    Buku(string j, string p) : judul(j), penulis(p), dipinjam(false) {}
    friend void prosesPinjam(Buku &b, string);
    friend void prosesKembali(Buku &b);
};
class Peminjam
{
private:
    string nama;
    string id;
    int totalPinjaman;
