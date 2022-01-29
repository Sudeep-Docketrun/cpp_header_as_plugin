CC = g++

TARGET = draw

CFLAGS := -I /home/docketrun/opencv-4.x/modules/imgproc/include/   \
         -I /home/docketrun/opencv-4.x/modules/core/include/      \
		 -I /home/docketrun/opencv-4.x/modules/imgcodecs/include/ \

LIBS := -L /home/docketrun/build/lib/ -lopencv_core -lopencv_imgproc -lopencv_highgui

all: 
	$(CC) main.cpp -o $(TARGET) $(LIBS)

clean:
	rm $(TARGET)