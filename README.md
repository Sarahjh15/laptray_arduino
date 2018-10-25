# laptray_arduino
\nFirst, read data through bluetooth. 
\nchar data = Serial.read();

\n\nIf data equals '0,' save -90 to servoAngle. 
\n If(data == '0') {servoAngle = -90;} 
\n If data equals '1,' save 0 to servoAngel. If data equals '2,' save 90 to servo angle.
\n\n If servoAngle equals -90, turn the servo -90 degrees. 
\n   if(servoAngle == -90)
\n  {
\n    digitalWrite(servoRightPin, HIGH);
\n    digitalWrite(servoLeftPin, HIGH);
\n    delay(2);
\n    digitalWrite(servoRightPin, LOW);
\n    digitalWrite(servoLeftPin, LOW);
\n    delay(18);
\n}
\nIf servoAngle equals 0, turn the servo 0 degrees. If the servoAngle quals 90, turn servo 90 degrees.
