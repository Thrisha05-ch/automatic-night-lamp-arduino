# Automatic Night Lamp using Arduino

## 📌 Project Description

This project is an Automatic Night Lamp using Arduino and a Photoresistor (LDR).

The LDR detects the surrounding light. When the environment becomes dark, the LED automatically turns ON and the buzzer gives an alert. When there is enough light, the LED and buzzer turn OFF.

## 🔧 Components Required

- Arduino UNO
- Photoresistor (LDR)
- 10kΩ Resistor
- LED
- 220Ω Resistor
- Piezo Buzzer
- Jumper Wires

## 🔌 Connections

- LDR → 5V and A0
- 10kΩ Resistor → A0 to GND
- D9 → 220Ω Resistor → LED Anode (+)
- LED Cathode (−) → GND
- Buzzer (+) → D10
- Buzzer (−) → GND

## ⚙️ Working

1. The LDR senses the surrounding light.
2. Arduino reads the LDR value through A0.
3. When the light level is low, the LED turns ON.
4. The buzzer also turns ON.
5. When the light level is high, the LED and buzzer turn OFF.

## 💻 Arduino Code

```cpp
int ldr = A0;
int led = 9;
int buzzer = 10;

void setup()
{
  pinMode(led, OUTPUT);
  pinMode(buzzer, OUTPUT);

  Serial.begin(9600);
}

void loop()
{
  int lightValue = analogRead(ldr);

  Serial.println(lightValue);

  if (lightValue < 500)
  {
    digitalWrite(led, HIGH);
    digitalWrite(buzzer, HIGH);
  }
  else
  {
    digitalWrite(led, LOW);
    digitalWrite(buzzer, LOW);
  }

  delay(500);
}
