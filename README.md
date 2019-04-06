# Weather Shield Arduino Library [![License: MIT](https://img.shields.io/badge/License-MIT-brightgreen.svg)](https://opensource.org/licenses/MIT) [![Analytics](https://ga-beacon.appspot.com/UA-97622785-1/README?flat)](https://github.com/igrigorik/ga-beacon)
Arduino library for the TE Connectivity Weather Shield.

This fork is being modified to work with [PRJC Teensy 3.X](https://www.pjrc.com/store/index.html), specifically a Teensy 3.1/3.2 in a [SparkFun Teensy Shield](https://www.sparkfun.com/products/13288) and using the robust [i2c_t3 library](https://github.com/systronix/i2c_t3) from [nox771](https://github.com/nox771/i2c_t3).

![weathershield](https://cloud.githubusercontent.com/assets/20226823/18585927/3a23b69a-7c1a-11e6-857b-6aa3a8e6d244.jpg)

This library provides easy access to all the sensors featured by the TE Connectivity Weather Shield :
* [HTU2xD(F)](http://www.te.com/usa-en/product-CAT-HSC0004.html) (Temperature and Humidity)
* [MS5637](http://www.te.com/usa-en/product-CAT-BLPS0037.html) (Temperature and Pressure)
* [MS8607](http://www.te.com/usa-en/product-CAT-BLPS0018.html) (Temperature, Humidity and Pressure)
* [TSYS01](http://www.te.com/usa-en/product-G-NICO-018.html) (Temperature)
* [TSD305](http://www.te.com/usa-en/product-G-TPMO-101.html) (Temperature and Contactless Temperature)
 
In order to work properly, all sensors libraries have to installed manually prior to using this library : 
* [TE Connectivity HTU2xD(F) Arduino Library](https://github.com/TEConnectivity/HTU21D_Arduino_Library)
* [TE Connectivity MS5637 Arduino Library](https://github.com/TEConnectivity/MS5637_Arduino_Library)
* [TE Connectivity MS8607 Arduino Library](https://github.com/TEConnectivity/MS8607_Arduino_Library)
* [TE Connectivity TSYS01 Arduino Library](https://github.com/TEConnectivity/TSYS01_Arduino_Library)
* [TE Connectivity TSD305 Arduino Library](https://github.com/TEConnectivity/TSD305_Arduino_Library)
