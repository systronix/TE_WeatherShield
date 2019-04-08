#ifndef TE_WeatherShield_H_
#define TE_WeatherShield_H_

// If Teensy, use i2c_t3, otherwise use Wire for I2C
#if !defined(I2C_T3_H) && (defined(__MK20DX128__) || defined(__MK20DX256__) || defined(__MKL26Z64__) || \
                           defined(__MK64FX512__) || defined(__MK66FX1M0__)) // 3.0/3.1-3.2/LC/3.5/3.6
  #include <i2c_t3.h>
#else 
  #include <Wire.h>
#endif                 

#include <htu21d.h>
#include <ms5637.h>
#include <ms8607.h>
#include <tsys01.h>
#include <tsd305.h>

enum TEWeatherShield_Sensor {
  Sensor_HTU21D,
  Sensor_MS5637,
  Sensor_MS8607,
  Sensor_TSYS01,
  Sensor_TSD305,
  Sensor_NONE
};

class TEWeatherShield {
public:
  htu21d HTU21D;
  ms5637 MS5637;
  ms8607 MS8607;
  tsys01 TSYS01;
  tsd305 TSD305;

  TEWeatherShield();

  void begin();
  void selectSensor(enum TEWeatherShield_Sensor sensor);
  void selectHTU21D();
  void selectMS5637();
  void selectMS8607();
  void selectTSYS01();
  void selectTSD305();
};

#endif  // TE_WeatherShield_H_
