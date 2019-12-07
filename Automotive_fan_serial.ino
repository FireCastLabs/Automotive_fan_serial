// Include the G2MotorDriver library
#include "G2MotorDriver.h"

// Initialize library with board specific version
G2MotorDriver18v17 md;

int serialSpeed = 0;

void stopIfFault()
{
  if (md.getFault())
  {
    md.Sleep(); // put the driver to sleep on fault
    delay(1);
    Serial.println("Motor fault");
    while(1);
  }
}

void setup()
{
  // start serial port
  Serial.begin(115200);
  Serial.println("G2 Motor Driver");

  // Start up the library
  md.init();
  md.Wake(); // Wake the driver for current readings and general use
  md.calibrateCurrentOffset();
  delay(10);
}

void loop()
{
  if (Serial.available() > 0)
  {
    serialSpeed = Serial.parseInt();
    md.setSpeed(serialSpeed);
    stopIfFault();
    Serial.print("Motor current: ");
    Serial.println(md.getCurrentMilliamps());
  }
  
}
