#include "sine.h"
#include <tflm_esp32.h>
#include <eloquent_tinyml.h>


#define NUMBER_OF_INPUTS 1
#define NUMBER_OF_OUTPUTS 1
#define ARENA_SIZE 2000



Eloquent::TF::Sequential<2, ARENA_SIZE> tf;


// Pin del potenciómetro
const int potentiometerPin = 4; // GPIO34 (ADC1)




void setup() {

  Serial.begin(115200);


  Serial.println("__TENSORFLOW SINE PREDICTION__");


  tf.setNumInputs(NUMBER_OF_INPUTS);
  tf.setNumOutputs(NUMBER_OF_OUTPUTS);

  tf.resolver.AddFullyConnected();
  tf.resolver.AddSoftmax();

  while (!tf.begin(sine).isOk()) {

    Serial.println(tf.exception.toString());


  }
        
  Serial.println("Model loaded successfully");
}

void loop() {

  // Leer el valor del potenciómetro (0-4095 para ADC de 12 bits)
  int potValue = analogRead(potentiometerPin);

  // Normalizar el valor del potenciómetro al rango del modelo (0 a 2π)
  //float value = map(potValue, 0, 4095, 0.0, 6.2832);
  float value = (potValue * 6.2832) / 4095.0;
  Serial.print("Valor de X: ");
  Serial.println(value);

  float input[1] = {value};



  // Make predictions
  if (!tf.predict(input).isOk()){

      Serial.println(tf.exception.toString());
      return;

  }

  // Get the predicted values
    float value_sin = tf.output(0);
   

    Serial.print("Predicted Sine: ");
    Serial.println(value_sin);
   

    // Benchmark
    Serial.print("Prediction time: ");
    Serial.print(tf.benchmark.microseconds());
    Serial.println("us");

    delay(3000);  // Adjust delay as needed
    
}
