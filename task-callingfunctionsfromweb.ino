int ledWhite = D6;

int ledBlue = D7;

void setup() {


    pinMode(ledWhite, OUTPUT);
    pinMode(ledBlue, OUTPUT);
    
    Particle.function("ledToggle", ledToggle);

    digitalWrite(ledWhite, LOW);
    digitalWrite(ledBlue, LOW);

}

void loop() {
}


int ledToggle(String command)
{
    if (command == "onWhite")
    {
        digitalWrite(ledWhite, HIGH);
        return 1;
    }
    else if (command  == "offWhite")
    {
        digitalWrite(ledWhite, LOW);
        return 0;
    }

    else if (command == "onBlue")
    {

        digitalWrite(ledBlue, HIGH);
        return 1;
    }
    else if (command  == "offBlue")
    {
        digitalWrite(ledBlue, LOW);
        return 0;
    }
    else
    {
        return -1;
    }
}