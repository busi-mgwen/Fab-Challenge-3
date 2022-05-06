#include <Keypad.h>

const byte ROWS = 4; //four rows
const byte COLS = 4; //three columns
char keys[ROWS][COLS] = {
  {'1','2','3','A'},
  {'4','5','6', 'B'},
  {'7','8','9', 'C'},
  {'*','0','#', 'D'}
};
byte rowPins[ROWS] = {9, 8, 7 ,6 }; //connect to the row pinouts of the keypad
byte colPins[COLS] = {5, 4, 3, 2}; //connect to the column pinouts of the keypad

Keypad keypad = Keypad( makeKeymap(keys), rowPins, colPins, ROWS, COLS );

void setup(){
  Serial.begin(9600);
}

void loop(){
  char key = keypad.getKey();

  if (key != NO_KEY){
    //Serial.println(key);

     if (key=='1'){
      Serial.println("1");
      Serial.println(F("?"));
                                             
     }
     else if (key=='2'){
      Serial.println(F("       ~~-   __.--~~               _/  |                  \\"));
      Serial.println(F("                                ~~~   /\\         \\_ -._    \\"));
      Serial.println(F("         --.__    __.--~~    __.-----~  ~-._       ~-._~~-. |"));
      Serial.println(F("  ___         ~~        _.-~                ~~-._      ~\\  \\"));
      Serial.println(F("     ~~~~---.___.---~_.-                         ~-._    \\  |"));
      Serial.println(F(" _.-~  --~/         /                                 ~~\\ |'"));
      Serial.println(F("/   .-~~~~-./  //  /      ,;;;;;;;,,                  /| )'"));
      Serial.println(F("  / / ~~-.  \\  /  /           ``';;;;;,              ~/  '"));
      Serial.println(F(" | |      \\  ; | /                 `';;;,           |~"));
      Serial.println(F(" ; ;     _|  ((((                      ';           |                     .-~"));
      Serial.println(F("| |    /~ |                `~~--.___/          |,..|                     (_"));
      Serial.println(F("| |      |                       ```          /,;;;|                   (   ~-"));
      Serial.println(F("| |    /                                     |  _ /                __.--\\  \\"));
      Serial.println(F(" \\ \\__ \\                                      |~               .-~~      ~- )"));      
      Serial.println(F("- \\                                           |               /.,..         \\"));
      Serial.println(F("/  `---'                           ,   .       |           _/  ;;;;;,"));
      Serial.println(F("    /                             |            ;  ___.---~~     `'';;;"));
      Serial.println(F("   |                              \\__.--._  __.-~~               _| `';."));
      Serial.println(F("   |                                '~~~.-~~                   _/ ~\\  `';."));
      Serial.println(F("   |                                 , (                     `;;\\   `.  `;,"));
      Serial.println(F("    |                       _.-~~~~~~-.|\\ -.   .              `:;\\   |   `;"));
      Serial.println(F("     |                  __~~__.---._  _/ `\\ `\\   |              `'`,.|"));
      Serial.println(F("      |                 \\ ~~--._)..--~  _.-'.'  ,'                   `"));
      Serial.println(F("       \\                 \\    - _\\    /`.    ~-~                          _.-'"));
      Serial.println(F("        `\\                `._    .'  (  |                                /  ("));
      Serial.println(F("          `\\                 ~--~  _.-\\ |                               ((_("));
      Serial.println(F("            `\\               /   .~  ( ||                                )\\)"));     
      Serial.println(F("           /  `._           |    \\_   `\\;                                  |"));
      Serial.println(F("         /'      ~--.____.-~     / ~~~~~                             /--/ /  |"));
      Serial.println(F("        /                      /                                   ._((_/|  /"));
      Serial.println(F("       /                      |                                     _()_/("));
      Serial.println(F("       |                      |                                     \\  /    |"));
      Serial.println(F("        \\_                    `.                       _.-~          \\/    /"));
      Serial.println(F("          ~-._                  ~-._ _______________.-~             / )  /(  |"));
      Serial.println(F("              ~-._                  ~~--._                          |   |  )"));
      Serial.println(F("                  ~-.__                   ~-._                      |  /|   /)"));
      Serial.println(F("                       ~~--.__                \\                      \\ \\|  |"));
      Serial.println(F("                              ~-._             |                      ))|  |"));
      Serial.println(F("                                  ~\\            |                     ( \\  \\ )"));
      Serial.println(F("                                    `\\           |                       | |("));
      Serial.println(F("                                      \\           |                      )) )"));
      Serial.println(F("                                                                         (  (("));
      Serial.println(F("?"));
     }
     if (key=='3'){
      Serial.println("3");
      Serial.println(F("?"));
  }
      if (key=='4'){
      Serial.println("4");
      Serial.println(F("?"));
  }
        if (key=='5'){
      Serial.println("5");
      Serial.println(F("?"));
  }
       if (key=='6'){
      Serial.println("6");
      Serial.println(F("?"));
      
  }
         if (key=='7'){
      Serial.println("7");
      Serial.println(F("?"));
  }
       if (key=='8'){
      Serial.println("8");
      Serial.println(F("?"));
      
  }
         if (key=='9'){
      Serial.println("9");
      Serial.println(F("?"));
  }
 }
}
