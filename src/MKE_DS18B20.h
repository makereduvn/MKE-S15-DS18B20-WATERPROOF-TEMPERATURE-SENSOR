#include "OneWire.h"

//  Error Code
#define DEVICE_DISCONNECTED     -127
#define DEVICE_CRC_ERROR        -128

//  configuration codes
#define MKE_DS18B20_CLEAR           0x00
#define MKE_DS18B20_CRC             0x01


typedef uint8_t DeviceAddress[8];
typedef uint8_t ScratchPad[9];


class MKE_DS18B20
{
public:
  explicit  MKE_DS18B20(OneWire * ow, uint8_t resolution = 9);
  bool      begin(uint8_t retries = 3);
  bool      isConnected(uint8_t retries = 3);

  void      requestTemperatures(void);
  bool      isConversionComplete(void);
  //        backwards compatible
  float     getTempC(bool checkConnect = true);

  bool      getAddress(uint8_t * buf);

  bool      setResolution(uint8_t resolution = 9);
  uint8_t   getResolution();  //  returns cached value

  void      setConfig(uint8_t config);
  uint8_t   getConfig();


private:
  void          readScratchPad(uint8_t *, uint8_t);
  void          _setResolution();

  DeviceAddress _deviceAddress;
  OneWire*      _oneWire;
  bool          _addressFound;

  uint8_t       _resolution;
  uint8_t       _config;
};


//  -- END OF FILE --

