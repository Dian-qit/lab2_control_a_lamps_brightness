bool switchOn = true;
int brightnessSetting = 75;
int lampBrightness = 0;

void setup() {
  Serial.begin(9600);
  while (!Serial); 

  Serial.println("--- Lamp Brightness Lab Simulation ---");

  runTest(true, 0);

  runTest(true, 50);

  runTest(true, 100);

  runTest(false, 0);

  runTest(false, 50);

  runTest(false, 100);
}

void loop() {
}

int getLampBrightness(bool switchState, int targetBrightness) {
  if (switchState == true) {
    return targetBrightness;
  } else {
    return 0;
  }
}

void runTest(bool sOn, int bSetting) {
  int result = getLampBrightness(sOn, bSetting);
  
  Serial.print("Switch: ");
  Serial.print(sOn ? "ON " : "OFF");
  Serial.print(" | Setting: ");
  Serial.print(bSetting);
  Serial.print(" | Resulting Lamp Brightness: ");
  Serial.println(result);
}