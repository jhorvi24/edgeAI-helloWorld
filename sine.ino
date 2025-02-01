#include "sine_pred.h"
#include <tflm_esp32.h>
#include <eloquent_tinyml.h>


#define NUMBER_OF_INPUTS 1
#define NUMBER_OF_OUTPUTS 1
#define ARENA_SIZE 2000



Eloquent::TF::Sequential<2, ARENA_SIZE> tf;


float value;





void setup() {

  Serial.begin(115200);


  Serial.println("__TENSORFLOW SINE PREDICTION__");


  tf.setNumInputs(NUMBER_OF_INPUTS);
  tf.setNumOutputs(NUMBER_OF_OUTPUTS);

  tf.resolver.AddFullyConnected();
  tf.resolver.AddSoftmax();

  while (!tf.begin(sine_pred).isOk()) {

    Serial.println(tf.exception.toString());


  }
        
  Serial.println("Model loaded successfully");
}

void loop() {
  


  value = 0,5;

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