TRISAbits.TRISA0 = 0;   // Set RA0 as an output for LED
LATAbits.LATA0 = 1;    // Turn on the LED


void init ()
{ 
// Test if all LED's are working

	LATAbits.LATA0 = 1;	// turn on port RA0 (GREEN)
	LATBbits.LATA1 = 1;	// turn on port RA1 (YELLOW)
	LATBbits.LATB2 = 1; // turn on port RB2 (RED)
		
	LATAbits.LATB3 = 1;	// turn on port RB3	(GREEN)
	LATBbits.LATA3 = 1;	// turn on port RA3	(YELLOW)
	LATBbits.LATB4 = 1;	// turn on port RB4	(RED)
		
	LATAbits.LATA4 = 1; // turn on port RA4	(GREEN)
	LATBbits.LATB6 = 1;	// turn on port RB6	(YELLOW)
	LATBbits.LATB7 = 1;	// turn on port RB7	(RED)
	
	
	Wait();

// turn off all but red lights
	
	LATAbits.LATA0 = 0;	// turn on port RA0 (GREEN)
	LATBbits.LATA1 = 0;	// turn on port RA1 (YELLOW)
		
	
	LATAbits.LATB3 = 0;	// turn on port RB3	(GREEN)
	LATBbits.LATA3 = 0;	// turn on port RA3	(YELLOW)
		
	LATAbits.LATA4 = 0; // turn on port RA4	(GREEN)
	LATBbits.LATB6 = 0;	// turn on port RB6	(YELLOW)
}

int Wait()
{ 
for (int i = 0; i < 30000; i++)
 { 
  for (int i = 0; i < 30; i++);
    }

}