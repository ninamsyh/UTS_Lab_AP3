// TODO 1: Ubah nama file ini menjadi NIM Anda. Cth: 001.cpp, 042.cpp, 080.cpp

// TODO 2: Buat program anda di file ini. INGAT BERI KOMENTAR PADA SETIAP PROSES DALAM PROGRAM ANDA

// TODO 3: Selesaikan dan kumpulkan sebelum deadline yang telah ditentukan; Details ada dalam file README.md

// Tetap semangat walau sulit ;p

#include <iostream>
#include <string>

using namespace  std;
int main()
{
              string kartu;
              int checksum = 0;
              cout << "Masukkan angka kartu: ";
              cin >> kartu;

              for (int i = kartu.length() - 2;i>=0; i -= 2)
              {
                            int digit = kartu[i] - '0';
                            int hasil_kali = digit*2;
                            if (hasil_kali > 9)
                            {
                                          hasil_kali = (hasil_kali % 10) + (hasil_kali / 10);
                            }
                            checksum += hasil_kali;
              }
              for (int i = kartu.length() - 1; i >=0; i-=2)
              {
                            int digit = kartu[i] - '0';
                            checksum += digit;
              }
              if (checksum % 10 == 0)
              {
                            if (kartu[0] == '5' && (kartu[1] =='1' || kartu[1] =='2' || kartu[1] =='3' || kartu[1] =='4' || kartu[1] =='5'))
                            {
                                          cout << "Mastercard" << endl;
                            }
                            else if (kartu[0] =='4')
                            {
                                          cout << "Visa" <<endl;
                            }
                            else
                            {
                                          cout << "Tidak diketahui" << endl;
                            }
                            cout << "checksum: " <<checksum << endl;
              }
              else
              {
                            cout << "Tidak valid" << endl;
                            cout << "checksum: " << checksum << endl;
              }
              return 0;

}