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

public:
    Peminjam(string n, string i) : nama(n), id(i), totalPinjaman(0) {}

    friend void prosesPinjam(Buku &b, Peminjam *p);
    friend void prosesKembali(Buku &b);
};
class Petugas
{
private:
    string nama;
    string idPetugas;
    string levelAkses;

public:
    void prosesPinjam(Buku &b, Peminjam *p);
};
if (!b.dipinjam)
{
    b.dipinjam = true;
    p->totalPinjaman++;
    cout << "Buku '" << b.judul << "' berhasil dipinjam oleh " << p->nama << endl;
}
else
{
    cout << "Buku '" << b.judul << "' sudah dipinjam." << endl;
}
}
void prosesKembali(Buku &b)
{
    if (b.dipinjam)
    {
        b.dipinjam = false;
        cout << "Buku '" << b.judul << "' berhasil dikembalikan." << endl;
    }
    else
    {
        cout << "Buku '" << b.judul << "' tidak sedang dipinjam." << endl;
    }

    ;
    void prosesKembali(Buku & b)
    {
        if (b.dipinjam)
        {
            b.dipinjam = false;
            cout << "Buku '" << b.judul << "' berhasil dikembalikan." << endl;
        }
        else
        {
            cout << "Buku '" << b.judul << "' tidak sedang dipinjam." << endl;
        }
    };
    class Admin
    {
    private:
        string nama;

    public:
        Admin(string n) : nama(n) {}
        void lihatStatistik(Peminjam *p)
        {
            cout << "Total pinjaman " << p->nama << ": " << p->TotalPinjaman << endl;
        }
    };
    void prosesPinjam(Buku & b, Peminjam * p)
    {
        // Logic untuk proses pinjam
    }
    void prosesKembali(Buku & b)
    {
        // Logic untuk proses kembali
    }
    int main()
    {
        Buku buku1("Belajar matematika", "J.K. Rowling");
