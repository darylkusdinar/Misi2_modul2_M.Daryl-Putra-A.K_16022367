# overview program
program ini berisikan program untuk menerima data transaki, mulai dari makanan yang dibeli, minuman yang dibeli, data pelanggan yang beli, hingga ke pemasukkan.
Dalam program ini saya bagi ke dalam 3 vase, yaitu: vase awal, vase memilih , dan vase penutup.

### vase awal 
dalam vase ini kita akan memasukkan nama pelanggan, dan memilih 3 pilihan:

![Screenshot (256)](https://user-images.githubusercontent.com/123804483/218241433-55801cf6-1dd5-4dac-9a89-7a2fbb85961b.png)

program akan meminta kita keterangan untuk membuka toko atau menutup toko, kita diminta memasukkan angka antara 1 dan 2, jika kita memasukkan 1 maka program akan berlanjut, dan jika memasukkan 2 program akan berhenti dengan keluaran "tidak ada transaksi".
jika kita memilih 1, maka kita akan dimintai keterangan bahwa ini pelanggan ke berapa yang datang maka kita ketikkan 1 (karena memang ini pelanggan pertama), lalu kita diminta memasukkan huruf pertama nama pelanggan (alasan kenapa hanya satu huruf akan saya jelaskan di bagian cara kerja program), lalu setelah itu kita diminta memilih antara 1. melihat menu, 2. membeli makanan/minuman, 3. keluar
jika kita memilih 1 maka kita akan melihat menu dan dikembalikan untuk memilih antara 3 pilihan, jika kita memilih 2 maka kita diminta memasukkan nomor makanan sesuai dengan menu, jika kita memilih 3 maka kit aakan dikembalikan ke awal (bagian memilih membuka atau menutup toko)

### vase memilih
dalam vase ini kita akan memilih makanan dan minuman.

![Screenshot (257)](https://user-images.githubusercontent.com/123804483/218244509-30cac6e5-97d2-4f16-a33a-9c7593b0134b.png)

kita di berikan perintah untuk memasukkan makanan ke berapa yang dipesan, lalu kita diminta untuk memasukkan nomor makanan (nomor makanan harus sesuai dengan yang di menu jika tidak maka program akan berhenti berjalan.

![Screenshot (258)](https://user-images.githubusercontent.com/123804483/218244519-6cd8c606-6203-44c2-8415-c5d739a84ddb.png)

jika sudah kita diarahkan untuk memilih makanan lagi atau tidak, jika tidak maka kita akan diarahkan ke tampilan awal, sebagai contoh saya memasukkan pelanggan selanjutnya.
jika sudah memilih makanan dan minuman, kita diarahkan ke tampian memilih antara 3 pilihan, jika memasukkan 3 maka kita akan ditampilkan ke tampilan paling awal

### vase penutup
ketika sudah diarahkan ke tampilan paling awal, kita diminta untuk memilih buka toko atau tutup toko, jika kita memilih tutup toko maka kita akan diminta memasukkan berapa jumlah pembeli, makanan, dan minuman yang dipesan (jika binung  atau lupa, bisa dilihat di data input sebelumnya) , jika sudah maka akan ada daftar pengunjung, kode makanan dan minuman ynag dibeli, serta total pemasukkan.

![Screenshot (259)](https://user-images.githubusercontent.com/123804483/218245378-c17f2064-a4d0-4e59-a90d-a84ff78ba2ac.png)

# cara kerja program
jadi untuk menjalankan program ini saya membuat 4 fungsi, yaitu: main, menu, milihmakan, dan milih minum.
1. fungsi main bertujuan untuk menjalanklan program utama yaitu program pembuka dan penutup
2. fungsi menu yaitu fungi void yang tujuannya hanya untuk menampilkan menu makanan dan miuman
3. fungsi milih makan untuk menjalankan program memilih makan dan fungsi menu untuk menjalankan program memilih minuman

selain itu saya juga sebelumnya membuat 5 buah array kosong, yang nantinya akan diisikan data input.
1. array namapelangan, untuk menyimpan data pelanggan
2. array pemasukkan1, untuk menyimpan data pemasukkan dari makanan
3. array pemasukkan2, untuk menyimpan data pemasukkan dari minuman
4. array konsumsi1, untuk menyimpan data kode makanan yang sudah dibeli
5. array konsumsi2, untuk menyimpan data kode minuman yang sudah dibeli 

