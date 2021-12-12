const int led = 13;
const int pul = 11;
int stat;


void setup() {
                 pinMode (13, OUTPUT);
                 pinMode (11, INPUT);
             }

void loop() {
                stat=digitalRead (pul);
                digitalWrite (led, stat);

            }
