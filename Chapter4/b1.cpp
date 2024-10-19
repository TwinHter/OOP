mt19937 random(chrono::steady_clock::now().time_since_epoch().count());
int seed;

// sinh ngẫu nhiên các số trong đoạn từ l đến r
int rnd_seg(int l, int r) {
    assert(l <= r);
    int len = r - l + 1;
    int add = rng() % len;
    return (l + add);
}
int main() {
    // số test mà ta muốn sinh ra để kiểm tra
    int tests; cin >> tests; 
    for (int test = 1; test <= tests; test++) {
        // Câu lệnh dùng để mở file, ví dụ ở đây là file "ADN.inp"
        // Reset thành file rỗng và sinh test vào input
        ofstream inp("ADN.inp");

        // Tạo seed ngẫu nhiên đại diện cho testcase hiện tại
        seed = random();
        rng = mt19937(seed);

        // Input mẫu: Nhập một mảng a[] chứa n số (1 <= n <= 1000, 0 <= ai <= 10^6)
        // sinh n ngẫu nhiên thuộc khoảng [1, 1000]
        int n = rnd_seg(1, 1000);

        // Tùy theo cú pháp sau ofstream mà ta sẽ có cú pháp đưa vào file
        // Ở đây là "ofstream inp("ADN.inp");" nên ta sẽ dùng inp thay cho cin thông thường
        inp << n << '\n';
        for (int i = 1; i <= n; i++)
            inp << rnd_seg(0, 1000000) << ' ';
        inp << '\n';
        inp.close();

        // Câu lệnh dùng để chạy code, ví dụ ở đây là code "ADN.cpp" và "ADN_2.cpp"
        system("ADN.exe"); system("ADN_2.exe");

        // File đầu ra của code "ADN.cpp" là "ADN.out".
        // File đầu ra của code "ADN_2.cpp" là "ADN.ans".
        if (("system fc ADN.out ADN.ans") != 0) -> Hai file output khac nhau
    }
    return 0;
}