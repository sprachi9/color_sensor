int redPin = 13;
int greenPin = 14;
int bluePin = 15;
void setup() {
  Serial.begin(115200);
  pinMode(redPin,OUTPUT);
  pinMode(greenPin,OUTPUT);
  pinMode(bluePin,OUTPUT);
}

void loop() {
  int rval,gval,bval;
  int colorData = analogRead(A0);
  for(rval=255;rval>=0;rval--)
  {
    for(gval=255;gval>=0;gval--)
    {
      for(bval=255;bval>=0;bval--)
      {
        analogWrite(11,rval);
        analogWrite(10,gval);
        analogWrite(9,bval);
        if((rval == 255)&&(gval == 255)&&(bval == 255))
        {
           Serial.println("White color ");
           Serial.print(colorData);
           Serial.println();
        }
        if((rval == 255)&&(gval == 255)&&(bval == 125))
        {
          Serial.println("Yellow color ");
          Serial.print(colorData);
          Serial.println();
        }
        if((rval == 255)&&(gval == 125)&&(bval == 125))
        {
          Serial.println("Pink color");
          Serial.print(colorData);
          Serial.println();
        }
        
        if((rval == 125)&&(gval == 125)&&(bval == 125))
        {
 
          Serial.println("Grey color");
          Serial.print(colorData);
          Serial.println();
        }
    
        if((rval == 125)&&(gval == 125)&&(bval == 62))
        {
          Serial.println(" Dark Green color");
          Serial.print(colorData);
          Serial.println();
        }
  
        if((rval == 125)&&(gval == 62)&&(bval == 62))
        {
          Serial.println("Brown color");
          Serial.print(colorData);
          Serial.println();
        }
        
        if((rval == 62)&&(gval == 62)&&(bval == 62))
        {
          Serial.println("Dark Grey color");
          Serial.print(colorData);
          Serial.println();
        }
        
        if((rval == 0)&&(gval == 0)&&(bval == 0))
        {
          Serial.println("Black color");
          Serial.print(colorData);
          Serial.println();
        }
        delay(1000);
      }
    }  
  }
  for(rval=0;rval<=255;rval++)
  {
    for(gval=0;gval<=255;gval++)
    {
      for(bval=0;bval<=255;bval++)
      {
        analogWrite(11,rval);
        analogWrite(10,gval);
        analogWrite(9,bval);
        if((rval == 255)&&(gval == 255)&&(bval == 255))
        {
           Serial.println("White color ");
           Serial.print(colorData);
           Serial.println();
        }
        if((rval == 255)&&(gval == 255)&&(bval == 125))
        {
          Serial.println("Yellow color ");
          Serial.print(colorData);
          Serial.println();
        }
        if((rval == 255)&&(gval == 125)&&(bval == 125))
        {
          Serial.println("Pink color");
          Serial.print(colorData);
          Serial.println();
        }
        
        if((rval == 125)&&(gval == 125)&&(bval == 125))
        {
          Serial.println("Grey color");
          Serial.print(colorData);
          Serial.println();
        }
    
        if((rval == 125)&&(gval == 125)&&(bval == 62))
        {
          Serial.println(" Dark Green color");
          Serial.print(colorData);
          Serial.println();
        }
  
        if((rval == 125)&&(gval == 62)&&(bval == 62))
        {
          Serial.println("Brown color");
          Serial.print(colorData);
          Serial.println();
        }
        
        if((rval == 62)&&(gval == 62)&&(bval == 62))
        {
          Serial.println("Dark Grey color");
          Serial.print(colorData);
          Serial.println();
        }
        
        if((rval == 0)&&(gval == 0)&&(bval == 0))
        {
          Serial.println("Black color");
          Serial.print(colorData);
          Serial.println();
        }
        delay(1000);
      }
    }
  }
 }
