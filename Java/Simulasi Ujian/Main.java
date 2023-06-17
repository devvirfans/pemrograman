import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

interface Answerable {
    boolean cekJawaban(String jawaban);
}

class Soal implements Answerable {
    private String pertanyaan;
    private String kunciJawaban;

    public Soal(String pertanyaan, String kunciJawaban) {
        this.pertanyaan = pertanyaan;
        this.kunciJawaban = kunciJawaban;
    }

    public String getPertanyaan() { return pertanyaan; }
    public String getKunciJawaban() { return kunciJawaban; }
    public boolean cekJawaban(String jawaban) { return kunciJawaban.equalsIgnoreCase(jawaban); }
}

class SoalIsian {
    private List<Soal> soalList;

    public SoalIsian() {
        soalList = new ArrayList<>();
    }

    public void tambahSoal(Soal soal) {
        soalList.add(soal);
    }

    public List<Soal> getSoalList() { return soalList; }
}

class Ujian {
    private SoalIsian soalIsian;

    public Ujian(SoalIsian soalIsian) {
        this.soalIsian = soalIsian;
    }

    public double nilaiUjian(List<Integer> nomorJawaban, List<String> jawaban) {
        int totalPertanyaan = soalIsian.getSoalList().size();
        int totalBenar = 0;

        for (int i = 0; i < nomorJawaban.size(); i++) {
            int nomor = nomorJawaban.get(i) - 1;
            String jawabanSiswa = jawaban.get(i);

            if (nomor >= 0 && nomor < totalPertanyaan) {
                Soal soal = soalIsian.getSoalList().get(nomor);
                if (soal.cekJawaban(jawabanSiswa)) {
                    totalBenar++;
                }
            }
        }

        double nilai = (double) totalBenar / totalPertanyaan * 100;
        return Math.round(nilai * 100.0) / 100.0;
    }
}

public class Main {
    public static void main(String[] args) {
        try (Scanner scanner = new Scanner(System.in)) {
            int jumlahPertanyaan = scanner.nextInt();
            scanner.nextLine();

            SoalIsian soalIsian = new SoalIsian();
            for (int i = 0; i < jumlahPertanyaan; i++) {
                String pertanyaan = scanner.nextLine();
                String kunciJawaban = scanner.nextLine();

                Soal soal = new Soal(pertanyaan, kunciJawaban);
                soalIsian.tambahSoal(soal);
            }

            int jumlahJawaban = scanner.nextInt();
            scanner.nextLine();

            List<Integer> nomorJawaban = new ArrayList<>();
            List<String> jawaban = new ArrayList<>();
            for (int i = 0; i < jumlahJawaban; i++) {
                int nomor = scanner.nextInt();
                scanner.nextLine();
                String jawabanSiswa = scanner.nextLine();
                nomorJawaban.add(nomor);
                jawaban.add(jawabanSiswa);
            }

            Ujian ujian = new Ujian(soalIsian);
            double nilai = ujian.nilaiUjian(nomorJawaban, jawaban);
            System.out.printf("%.2f%n", nilai);
        }
    }
}
