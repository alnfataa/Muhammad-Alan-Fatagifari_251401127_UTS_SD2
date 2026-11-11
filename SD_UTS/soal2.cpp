

#include <iostream>
using namespace std;

struct Node {
    int nilai;
    string nama;
    Node *next;
};

Node *head = NULL;
Node *tail = NULL;

void tambahDepan(string nama, int nilai) {
    Node *baru = new Node;
    baru->nilai = nilai;
    baru->nama = nama;
    baru->next = NULL;
    if (head == NULL) {
        head = baru;
        tail = baru;
    } else {
        baru->next = head;
        head = baru;
    }
    cout << "Nilai " << nilai << " masuk di depan." << endl;
    cout << "Nama " << nama << " masuk di depan." << endl;
}

void tambahBelakang(string nama, int nilai) {
    Node *baru = new Node;
    baru->nilai = nilai;
    baru->nama = nama;
    baru->next = NULL;
    if (head == NULL) {
        head = baru;
        tail = baru;
    } else {
        tail->next = baru;
        tail = baru;
    }
    cout << "Nilai " << nilai << " masuk di belakang." << endl;
    cout << "Nama " << nama << " masuk di belakang." << endl;
}

// TODO : Hapus node pertama
void deleteFirst() {
    if(head == NULL){
        cout << "List Nya isi dulu bang \n";
        return;
    }
    Node *temp = head;
    head = head-> next;
    if(head == NULL) tail = NULL;
    delete temp;
}


void tampil(int nilai, string nama) {
    if (head == NULL) {
        cout << "List masih kosong." << endl;
        return;
    }
    cout << "HEAD -> ";
    Node *bantu = head;
    int banyak = 0;
    int total = 0;
    while (bantu != NULL) {
        cout << bantu->nilai << " -> ";
        banyak++;
        total = total + bantu->nilai;
        bantu = bantu->next;
    }
    cout << "NULL" << endl;
    cout << "Jumlah node : " << banyak << endl;
    if (nilai >= 75){
        cout << "Nama :" << nama <<" "<< "Nilai : " << nilai;
    } else {
     cout << "Tidak Ada Nilai Lebih Dari 75" ;
    }
}

int main(string nama, int nilai) {
    int pilih, nilai;
    do {
        cout << endl << "Nilai Nama" << endl;
        cout << "1. Tambah depan" << endl;
        cout << "2. Tambah belakang" << endl;
        cout << "3. Hapus Depan" << endl;
        cout << "4. Tampilkan Nama" << endl;
        cout << "0. Keluar" << endl;
        cout << "Pilih : ";
        cin >> pilih;

        if (pilih == 1) {
            cout << "Nilai : ";
            cin >> nilai;
            tambahDepan(nilai);
            tambahDepan(nama);
            tampil();
        } else if (pilih == 2) {
            cout << "Nilai : ";
            cin >> nilai;
            tambahBelakang(nilai);
            tambahBelakang(nama);
            tampil();
        } else if (pilih == 4) {
            cout << "Nilai yang dihapus : ";
            cin >> nilai;
            deleteFirst(nilai);
            deleteFirst(nama);
            tampil();
        } else if (pilih == 4) {
            tampil();
        }
    } while (pilih != 0);

    return 0;
}