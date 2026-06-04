#include "src/HeptaSat.h"

HeptaCdh    cdh;
HeptaEps    eps;
HeptaSensor sensor;

void setup() {
  cdh.begin();
  eps.init();
  sensor.begin();
}

void loop() {
  float mx, my, mz;
  sensor.get_magnetometer(&mx, &my, &mz);
  cdh.printf("Magnetometer: mx=%.2f uT, my=%.2f uT, mz=%.2f uT\n", mx, my, mz);
  delay(1000);
}
