# laptray_arduino
<br>First, read data through bluetooth. 
<br>char data = Serial.read();

<br><br>If data equals '0,' save -90 to servoAngle. 
<br>If(data == '0') {servoAngle = -90;} 
<br>If data equals '1,' save 0 to servoAngel. If data equals '2,' save 90 to servo angle.
<br><br>If servoAngle equals -90, turn the servo -90 degrees. 
<br>  if(servoAngle == -90)
<br>  {
<br><tab>    digitalWrite(servoRightPin, HIGH);
<br>    digitalWrite(servoLeftPin, HIGH);
<br>    delay(2);
<br>    digitalWrite(servoRightPin, LOW);
<br>    digitalWrite(servoLeftPin, LOW);
<br>    delay(18);
<br>  }
<br>If servoAngle equals 0, turn the servo 0 degrees. If the servoAngle equals 90, turn servo 90 degrees.
