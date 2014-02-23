#include <stdio.h>

// Include Rpi-hw headers
#include <rpi-hw.hpp>
#include <rpi-hw/time.hpp>
#include <rpi-hw/gpio.hpp>
//
// // Use Rpi-hw namespace
using namespace rpihw;

int main(int argc, char **argv)
{
	printf("GPIO Example\n");
	
        // GPIO controller interface
	gpio &io = gpio::get();

	io.setup( 23, OUTPUT );
// Main loop
	for ( ;; ) {

		// Turn it on
		io.write( 23, HIGH );

		// Wait some time
		time::sleep(1);

		// Turn it off
		io.write( 23, LOW );

		// Wait some time
		time::sleep(2);
	}


	
	return 0;
}

