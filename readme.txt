2.đệ quy thiếu base case
double H(int N) {
 return H(N-1) + 1.0/N;
}

khi chạy thì chương trình ngay lập tức kết thúc mà ko trả về bất kì giá trị nào. lí do là vì không chương trình không khởi tạo trường hợp đơn giản nhất ( base case ) của vấn đề.

3.lỗi công thức đệ quy
double H(int N) {
 if (N == 1) return 1.0;
 return H(N) + 1.0/N;
}

khi chạy chương trình ngay lập tức kết thúc mà không trả về giá trị nào. do hàm được trả về bị sai. sửa : return(N-1) +1.0/N;

4.Đệ quy quá sâu
double H(int N) {
 if (N == 1) return 0.0;
 return H(N-1) + 1.0/N;
}

ở giá trị N=5000 thì chương trình vẫn chạy bình thường, nhưng khi em chạy N=10000 thì chương trình không trả về kết quả nào. Lí do là độ sâu của đệ quy đã đạt đến mức tối đa để chống tràn.

5.Đệ quy tính toán quá nhiều
long F(int n) {
 if (n == 0) return 0;
 if (n == 1) return 1;
 return F(n-1) + F(n-2);
}

ở phép đệ quy này ở những giá trị n thấp thì có trả về giá trị chính xác. tuy nhiên khi cho chạy n có giá trị lớn hơn ( với n=100 ) thì chương trình chạy rất lâu. việc chạy bằng vòng lặp thì n=100 chương trình vẫn trả về kết quả nhanh chóng

6.Dùng mảng địa phương trong hàm đệ quy

