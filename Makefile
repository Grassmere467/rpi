SOURCE=main.cpp
MYPROGRAM=robot
MYINCLUDES=/home/pi/git/Rpi-hw/include
MYLIBRARIES=rpihw
LIB_DIR=/home/pi/git/Rpi-hw/build
CC=g++

#------------------------------------------------------------------------------

all: $(MYPROGRAM)

$(MYPROGRAM): $(SOURCE)
	$(CC)  -std=c++0x -I$(MYINCLUDES) $(SOURCE) -o$(MYPROGRAM) -L$(LIB_DIR)  -l$(MYLIBRARIES)

clean:
	rm -f $(MYPROGRAM)
