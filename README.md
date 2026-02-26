# Cảm biến nhiệt độ chống nước MKE-S15 DS18B20 Waterproof Temperature Sensor

MKE-S15 DS18B20 Waterproof Temperature Sensor là cảm biến đo nhiệt độ chống nước sử dụng giao tiếp Digital 1-Wire, chỉ cần một chân tín hiệu để truyền dữ liệu, giúp việc kết nối với vi điều khiển trở nên đơn giản và thuận tiện. Cảm biến tích hợp phần tử đo nhiệt độ cùng bộ xử lý tín hiệu bên trong, cho phép xuất dữ liệu đã được hiệu chuẩn dưới dạng số, giúp hệ thống đọc và xử lý nhanh chóng với độ ổn định cao. Đầu dò nhiệt độ được bọc vỏ kim loại chống nước, phù hợp cho các ứng dụng đo nhiệt độ trong môi trường ẩm, chất lỏng hoặc ngoài trời.

Sản phẩm phù hợp cho nhiều ứng dụng như đo nhiệt độ môi trường, đo nhiệt độ nước, vườn thông minh, thiết bị IoT và các dự án STEM. Mạch được thiết kế tối ưu về độ ổn định tín hiệu và khả năng chống nhiễu, đảm bảo hoạt động tin cậy trong cả môi trường học tập và ứng dụng thực tế.

Cảm biến nhiệt độ chống nước MKE-S15 DS18B20 Waterproof Temperature Sensor hỗ trợ điện áp giao tiếp 3.3V và 5VDC, cho phép kết nối trực tiếp và an toàn với các bo mạch điều khiển phổ biến như Arduino, Raspberry Pi, Jetson Nano, Micro:bit và nhiều nền tảng khác. Sản phẩm đi kèm cáp kết nối 3P XH2.54 – Dupont, đảm bảo kết nối chắc chắn, ổn định và thuận tiện trong quá trình lắp đặt và sử dụng.

## Thông số kỹ thuật
- Điện áp cấp nguồn: 5VDC
- Chuẩn tín hiệu điều khiển: Digital 1-Wire
- Điện áp giao tiếp: TTL 3.3 / 5VDC
- Cảm biến sử dụng: DS18B20
- Khoảng đo nhiệt độ: (-55) ~ 125°C
- Sai số: 0.5°C trong khoảng từ (-10°C) ~ 85°C.
- Khả năng tương thích:
  - Arduino
  - Raspberry Pi
  - Jetson Nano
  - Micro:bit
  - Và các board điều khiển 3.3/5VDC khác
- Thiết kế mạch:
  - Ổn định, chống nhiễu
  - Phù hợp cho ứng dụng học tập và thực tế
- Cổng kết nối cảm biến: Conector 3P Domino
- Đi kèm cáp kết nối: 3P XH2.54–Dupont

## Các chân tín hiệu
<table><thead>
  <tr>
    <th>MKE-S15</th>
    <th>3P XH2.54</th>
  </tr></thead>
<tbody>
  <tr>
    <td>-</td>
    <td>Chân cấp nguồn âm 0VDC</td>
  </tr>
  <tr>
    <td>+</td>
    <td>Chân cấp nguồn dương 5VDC</td>
  </tr>
  <tr>
    <td>S</td>
    <td>Chân tín hiệu Digital</td>
  </tr>
</tbody>
</table>

<table><thead>
  <tr>
    <th>MKE-S15</th>
    <th>3P Domino</th>
  </tr></thead>
<tbody>
  <tr>
    <td>G</td>
    <td>Chân cấp nguồn âm cho cảm biến 0VDC (Đen - Black)</td>
  </tr>
  <tr>
    <td>V</td>
    <td>Chân cấp nguồn dương cho cảm biến 3.3VDC (Đỏ - Red)</td>
  </tr>
  <tr>
    <td>D</td>
    <td>Chân tín hiệu Data của cảm biến (Vàng - Yellow)</td>
  </tr>
</tbody>
</table>

## Hướng dẫn sử dụng
### Hướng dẫn kết nối
- Cấp nguồn 5VDC cho mạch qua hai chân GND và 5V.
- Kết nối chân S (SIGNAL) của cảm biến với chân điều khiển được khai báo trong chương trình.
- Kết nối cảm biến với mạch truyền tín hiệu qua cổng 3P Domino.
### Hướng dẫn sử dụng với Arduino Uno / Vietduino Uno / ESP32
- Trong **Tools / Library Manager**, tìm và cài đặt bộ thư viện tổng hợp **"MKE_ONE" by MakerEdu.vn**
- Mở chương trình mẫu **"MKE_S15_DS18B20_Serial_XXX"** tại **File / Examples / MAKEREDU / Module / MKE_S15_DS18B20**
- Cấu hình board mạch tương ứng là **Arduino Uno / ESP32**, chọn đúng cổng **COM Port** của mạch và nhấn **Upload** để nạp chương trình.
- Cấp nguồn 5VDC cho mạch, kết nối chân S (SIGNAL) của cảm biến với chân điều khiển được khai báo trong chương trình.
- Xem kết quả mạch hoạt động theo chương trình đã nạp.

### Hướng dẫn lập trình với Micro:bit (kéo thả khối)

- Khởi động [Microsoft MakeCode](https://makecode.microbit.org/) và **Import** chương trình theo đường link sau: `https://github.com/makereduvn/mke_s15_ds18b20_microbit/`
- Kết nối mạch Micro:bit và **Download** chương trình.
- Cấp nguồn 5VDC cho mạch, kết nối chân S (SIGNAL) của cảm biến với chân điều khiển được khai báo trong chương trình.
- Xem kết quả mạch hoạt động theo chương trình đã nạp.

Nếu bắt đầu tự án mới cần cài đặt Extension **MKE_ONE_MICROBIT** trên [Microsoft MakeCode](https://makecode.microbit.org/) theo [hướng dẫn tại đây](https://github.com/makereduvn/MKE_ONE_MICROBIT). Sau khi cài đặt thành công, các khối lệnh của Extension **MKE_ONE_MICROBIT** sẽ xuất hiện trong danh sách block và sẵn sàng để sử dụng.

## Kích thước sản phẩm
![MKE-S15 DS18B20](/extras/MKE-S15_1.jpg)

## Hình ảnh sản phẩm
![MKE-S15 DS18B20](/extras/MKE-S15_4.png)
![MKE-S15 DS18B20](/extras/MKE-S15_2.png)
![MKE-S15 DS18B20](/extras/MKE-S15_3.png)










