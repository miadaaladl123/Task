# Task
External interrupt using switch and sending Temperature Sensor data using UART

# Description

- Program to control one input and output (IO Pins) the input pin is a switch as interrupt 
- Once it pressed it should lighting the led connected to output pin.
- If the switch pressed must send “pressed” to the serial monitor only one time also send the LED states ”ON” or “OFF”
- The whole function could be used many times in the program without interfering each-other
- The program can send continuous serial date comes from temperature sensor with 3 second rate .at the same time


# Installation

 - Install GCC On Your Machine
 
     1- Download mingw-w64 From https://sourceforge.net/projects/mingw-w64/
     
     2- Copy The bin Folder Path
 ![untitled](https://user-images.githubusercontent.com/33217386/42107796-f21569c8-7bd8-11e8-9411-fcf6f9ed4007.png)
 
     3- Past The Path of the bin Folder in the Path windows Environmental Variable
       
![capture](https://user-images.githubusercontent.com/33217386/42108232-35c5cd1a-7bda-11e8-8843-667e76c8dee0.PNG)


![3](https://user-images.githubusercontent.com/33217386/42110253-b5bea07c-7be0-11e8-8ae9-991b991e5474.PNG)


    4- Test The GCC instrallation
  
![sa](https://user-images.githubusercontent.com/33217386/42110482-85c7cc12-7be1-11e8-913d-993fafb7d0f6.PNG)



 - Install Eclipse C/C++ Development Tool (CDT)

Two ways to install CDT, depending on whether you have previously installed an Eclipse:

    If you have already installed "Eclipse for Java Developers" or other Eclipse packages, you could install the CDT plug-in as follows:
    Launch Eclipse ⇒ Help ⇒ Install New Software ⇒ In "Work with" field, pull down the drop-down menu and select "Kepler - http://download.eclipse.org/releases/kepler" (or juno for Eclipse 4.2; or helios for Eclipse 3.7).
    In "Name" box, expand "Programming Language" node ⇒ Check "C/C++ Development Tools" ⇒ "Next" ⇒ ... ⇒ "Finish".
    If you have not install any Eclipse package, you could download "Eclipse IDE for C/C++ Developers" from http://www.eclipse.org/downloads, and unzip the downloaded file into a directory of your choice.

Step 2: Configuration

You do NOT need to do any configuration, as long as the Cygwin or MinGW binaries are included in the PATH environment variable. CDT searches the PATH to discover the C/C++ compilers.
