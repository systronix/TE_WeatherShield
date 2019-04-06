# Weather Shield Arduino Library [![License: MIT](https://img.shields.io/badge/License-MIT-brightgreen.svg)](https://opensource.org/licenses/MIT) [![Analytics](https://ga-beacon.appspot.com/UA-97622785-1/README?flat)](https://github.com/igrigorik/ga-beacon)
Arduino libraries for the TE Connectivity Weather Shield especially when used with Teensy 3.X
For under $35 you get five sensors. DigiKey has a [WeatherShield product page](https://www.digikey.com/en/product-highlight/t/te-connectivity-measurement-specialties/weather-shield) and [so does TE](https://www.te.com/usa-en/product-10212634-00.html). There is also a Raspberry Pi HAT [at DigiKey](https://www.digikey.com/catalog/en/partgroup/raspberry-pi-weather-shield/69547) and [TE](https://www.te.com/usa-en/product-10212635-00.html) with all but the MS8607, probably due to I2C address space limits (the HAT doesn't have an I2C MUX).

![weathershield](https://cloud.githubusercontent.com/assets/20226823/18585927/3a23b69a-7c1a-11e6-857b-6aa3a8e6d244.jpg)

Here is [WeatherShield Google Doc](https://drive.google.com/open?id=1eGHTFTyg-MKDmUi-pIOsDonGO7se9EXlincUOEp1gHs) with some user notes on this WeatherShield.

This fork is being modified to work with [PRJC Teensy 3.X](https://www.pjrc.com/store/index.html), specifically a Teensy 3.1/3.2 in a [SparkFun Teensy Shield](https://www.sparkfun.com/products/13288) and using the robust [i2c_t3 library](https://github.com/systronix/i2c_t3) from [nox771](https://github.com/nox771/i2c_t3). It should still work with a generic Arduino but that's not the focus of this project.

The TE Connectivity Weather Shield includes five sensors. All include temperature.
* [HTU2xD(F)](http://www.te.com/usa-en/product-CAT-HSC0004.html) (Temperature and Humidity)
* [MS5637](http://www.te.com/usa-en/product-CAT-BLPS0037.html) (Temperature and Pressure)
* [MS8607](http://www.te.com/usa-en/product-CAT-BLPS0018.html) (Temperature, Humidity and Pressure)
* [TSYS01](http://www.te.com/usa-en/product-G-NICO-018.html) (Temperature)
* [TSD305](http://www.te.com/usa-en/product-G-TPMO-101.html) (Temperature and Contactless Temperature Thermopile)
 
In order to work properly, all individual sensor libraries have to installed prior to using the WeatherShield library. In addition, to use the example in each sensor library, you have to put the WeatherShield MUX into the proper state to access that sensor. Oddly, the TE libraries don't do that, but our modified version does, so you can test sensors one at a time on the WeatherShield. Here are links to the forked and modified-by-Systronix libraries, for all five WeatherShield sensors:
* [TE HTU21D Arduino Library](https://github.com/systronix/TE_HTU21D_Arduino_Library)
* [TE MS5637 Arduino Library](https://github.com/systronix/TE_MS5637_Arduino_Library)
* [TE MS8607 Arduino Library](https://github.com/systronix/TE_MS8607_Arduino_Library)
* [TE TSYS01 Arduino Library](https://github.com/systronix/TE_TSYS01_Arduino_Library)
* [TE TSD305 Arduino Library](https://github.com/systronix/TE_TSD305_Arduino_Library)
