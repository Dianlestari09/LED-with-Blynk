## 📘 Proyek: Sistem Otomatisasi dengan Blynk dan Sensor

### 🛠 Deskripsi

Proyek ini merupakan implementasi Internet of Things (IoT) menggunakan mikrokontroler (seperti ESP32), sensor ultrasonik, dan platform Blynk untuk memantau serta mengendalikan sistem secara real-time melalui aplikasi seluler.

Fitur yang tersedia:

* Monitoring sensor ultrasonik jarak jauh
* Kendali perangkat melalui tombol Blynk
* Feedback status sistem ke aplikasi Blynk

---

## 📁 Struktur Proyek

```bash
📦 Proyek-Blynk
├── LED-BLYNK.ino                              # File utama sketch Arduino
├── README.md                                  # Dokumentasi proyek


## ⚙️ Komponen Hardware

* ESP32 / NodeMCU
* Sensor Ultrasonik HC-SR04
* LED atau Relay (opsional)
* Breadboard & Jumper
* Koneksi WiFi

---

## 📲 Platform yang Digunakan

* [Blynk IoT](https://blynk.io/) (Gunakan aplikasi versi baru Blynk, bukan Blynk Legacy)
* Arduino IDE

---

## 🧩 Instalasi Library

1. **Install Arduino IDE**: [https://www.arduino.cc/en/software](https://www.arduino.cc/en/software)
2. **Tambahkan Board ESP32**:

   * Buka **File > Preferences**, masukkan URL Board Manager ESP32:
     https://raw.githubusercontent.com/espressif/arduino-esp32/gh-pages/package_esp32_index.json

   * Masuk ke **Tools > Board > Boards Manager**, cari dan install **ESP32**.
3. **Install Library Blynk**:

   * Buka **Tools > Manage Libraries**
   * Cari dan install:

     * **Blynk**
     * **NewPing** (jika menggunakan)
     * **WiFi** (sudah tersedia di ESP32)


## 🔌 Wiring Sensor HC-SR04 ke ESP32

| HC-SR04 | ESP32        |
| ------- | ------------ |
| VCC     | 5V / VIN     |
| GND     | GND          |
| TRIG    | D5 (GPIO 5)  |
| ECHO    | D18 (GPIO18) |

---

## 🧪 Panduan Setup Blynk

1. **Unduh aplikasi Blynk** dari Play Store atau App Store.
2. **Buat akun** dan **buat proyek baru**.
3. **Tambahkan widget**:

   * **Value Display** atau **Gauge** → untuk menampilkan jarak.
   * **Button** → untuk kendali (misalnya menghidupkan relay).
4. **Salin Auth Token** dari proyek Blynk.
5. **Ganti `BLYNK_AUTH_TOKEN` dalam kode** dengan token Anda.

## 📡 Output di Aplikasi

* Tampilan jarak sensor ditampilkan di **V0**
* Bisa dikembangkan dengan menambahkan notifikasi Blynk jika jarak terlalu dekat.


## ✅ Checklist Sebelum Upload

* [ ] Periksa koneksi kabel sensor
* [ ] Pastikan WiFi stabil
* [ ] Sudah memasukkan Auth Token dengan benar
* [ ] Sudah mengatur Virtual Pin sesuai dengan kode
