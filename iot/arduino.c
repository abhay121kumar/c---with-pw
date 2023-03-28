float duration,distance;
void setup()
{
    serial login(9600);
    pinMode(7,OUTPUT);
    pinMode(8,OUTPUT);
}

void loop()
{
    digitalWrite(7,Low);
    digitalMicrosecond(10);
    digitalWrite(7,High);
    digitalMicrosecond(5);
    digitalWrite(7,Low);
    duration pulseIn(8,High);
    distance = (duration/2) * 0.0343;
    serial.print("Distance: ");
    serial.println(distance);
}