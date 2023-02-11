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

![Screenshot (268)](https://user-images.githubusercontent.com/123804483/218246474-9a536270-7956-49ca-9f6b-52c6cbf6c9fd.png)

jika tadi saya menjelaskan secara alurnya, maka untuk yang ini akan saya jelaskan berdasarkan urutan fungsinya

### fungsi main

![Screenshot (269)](https://user-images.githubusercontent.com/123804483/218246481-100b3060-7e94-4dc2-8142-ef19b9bdc845.png)

di awal kita diperintahkan untuk memasukkan huruf depan nama pelanggan, kenapa hanya satu huruf? ini dikarenakan array C hanya bisa menyimpan satu character, sebenarnya bisa lebih dari satu character yaitu menggunakan array multi dimensi, namun saya sudah mencoba berkali - kali dan selalu gagal, karena deadline mepet dan saya punya kesibukan lin sehingga tidak punya waktu untuk menyempurnakannya, oleh karena itu saya hanya menggunakan 1 huruf.
bisa dilihat juga saya mengdeclare awal untuk menentukan toko buka atau tutup, nam untuk nama pelanggan, untuk loop sendiri sebanarnya tidak terpakai saya lupa menghapusnya.

![Screenshot (270)](https://user-images.githubusercontent.com/123804483/218246489-da29182b-3893-49be-a2f9-670341d8ecf4.png)

int z berfungsi sebagai pemberi tau ke array bahwa saya memasukkan "nama" ke dalam array element "z", itulah kenapa ada pertanyaan "ini pelanggan ke berapa" berfungsi untuk memauskkan data ke element array[z], setelah itu saya mengarah kan ke fungsi "milihmakan" itu semua jika kita memasukkan 1 di pilihan buka atau tutup toko. lalu bagaimana jika kita memilih 2, bisa dilihat saya membuat int sum1 dan int sum2, ini bertujuan untuk menjumlahkan seluruh isi array dari pemasukkan1 dan pemasukkan2, dan saya juga membuat int sum3 untuk menjumlahkan sum1 dan sum2, jika sum3 = 0 maka akan keluar hasil "tidak ada trandsaksi", jika tidak maka program berikut yang kaan jalan

![Screenshot (262)](https://user-images.githubusercontent.com/123804483/218246501-7e53ca09-65a4-4f01-bb8e-d24c3d56f1cd.png)

saya membuat int jlhpelanggan, int jlhmakanan, dan int jlhminuman ini bertujuan untuk memberikanbatasan kepada program untuk mengprint data yang telah terinput ke dalam array, saya lupa memberi tau bahwa dalm array saya memberikan batasan 10, saya tidak tau apakah ada program untuk memberikan panjang array yang fleksibel, karena saya tidak tau jadi saya memberikan batasan 10. itulah kenapa saya bertanya berpa jumlah pelanggan, makanan dan minuman yang dipesan untuk memberikan batasan kepada program dalam mengeprint data didalam array.

### fungsi menu

fungsi ini hanyalah fungsi void yang isinya menampilkan menu ke layar berupa dafatr menu yang ditawarkan, fungsi ini kana dipanggil di fungsi selanjutnya, yaitu fungsi milihmakan 

