//
//  Main file
//  ----------------------------------
//  Developed with embedXcode
//
//  XBee
//  Created by jeroenjonkman on 06-07-15
//   


#include "WProgram.h"
#include "XBee.pde"

int main(void)
{
    init();
	setup();
	for (;;) loop();
	return 0;
}
