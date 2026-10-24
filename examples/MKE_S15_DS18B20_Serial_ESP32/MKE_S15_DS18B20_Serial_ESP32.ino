#include "MKE_DS18B20.h"
// Đặt tên cho chân kết nối cảm biến
#define DS18B20_PIN 23     // IO23

OneWire oneWire_23(DS18B20_PIN);
MKE_DS18B20 TEMP23(&oneWire_23);

// Tạo biến lưu giá trị cảm biến
// value read from the sensor
float sensorValue23 = 0;

void setup()
{
  // Khởi động kết nối Serial UART ở tốc độ 115200 để truyền dữ liệu lên máy tính.
  // Start the Serial UART connection at 115200 to transfer data to the computer.
  Serial.begin(115200);

  TEMP23.begin();
}

void loop()
{
  // Đọc giá trị cảm biến
  // Get value
  TEMP23.requestTemperatures();
  sensorValue23 = TEMP23.getTempC();

  // Hiển thị giá trị đo được của cảm biến lên máy tính.
  // Show the sensor value on Arduno Serial Monitor
  Serial.print("Temp: ");
  Serial.println(sensorValue23);
  
  // Chờ 2000ms
  // Wait 2000ms
  delay(2000);
}
