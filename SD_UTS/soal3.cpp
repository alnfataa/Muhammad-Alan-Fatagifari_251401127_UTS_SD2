#include <iostream>
using namespace std;

#define MAX 100
char stack[MAX]; 
int top = -1;

// TODO : Menambahkan karakter ke stack 
void push(char value) {
    if(top == MAX-1){ 
        cout << "Stack Penuh \n";
    } else{ 
        top++; 
        stack[top] = value;
        cout << value << " ditambhkan dalam stack\n";
    }
}


// TODO : Mengambil karakter paling atas char 
char pop() {
    if (top == -1) { 
        cout << "Stack kosong\n";
        return '\0';
    } else {
        char value = stack[top];
        top--;
        return value;
    }
}

void display() {

    if(top == -1){ 
        cout << "Stack kosong\n";
     } else {
        cout << "\nIsi stack : \n";
        for(int i = top; i >= 0; i--){ 
            cout << stack[i] << " ";
        }
     }
}

int main() {
string kata;

cout << "Masukkan sebuah kata: ";
cin >> kata;

// TODO : Memasukkan setiap karakter ke stack
  for (int i = 0; i < (int)kata.size(); i++) {
        push(kata[i]);
    }
 
    display();

// TODO Mengeluarkan karakter dari stack
    cout << "\nKata setelah dibalik: ";
    while (top != -1) {
        cout << pop();
    }

    // 
    cout << "\n Kesimpulan";
    for (int i = 0; i < (int)kata.size(); i++) {
        push(kata[i]);
    if(kata[i] = kata[i]){
        cout << "Ini adalah Palindrom";
    }else{
        cout << "Bukan Palindrom";
    }

cout << endl;

return 0;
}