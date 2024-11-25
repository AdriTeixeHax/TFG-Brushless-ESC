float x = 0;

void setup()
{
    Serial.begin(115200);
}

void loop()
{
    char msg[6], result[8];
    static char incomingByte = '1';

    if (Serial.available() > 0)
    {
        incomingByte = Serial.read();
    }

    if (incomingByte == '1')
    {  
        dtostrf(sin(x), sizeof(msg), 4, msg);
        strcat(msg, "\n");
        if (sin(x) >= 0)
            sprintf(result, "%s%s", " ", msg);
        else
            sprintf(result, "%s", msg);

        Serial.print(result);
    }
    else
    {
        dtostrf(abs(sin(x)), sizeof(msg), 4, msg);
        strcat(msg, "\n");
        if (abs(sin(x)) >= 0)
            sprintf(result, "%s%s", " ", msg);
        else
            sprintf(result, "%s", msg);

        Serial.print(result);
    }
    
    Serial.print(result);
    
    x += 0.01;
}