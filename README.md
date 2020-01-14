# Chatbot Project

## Dependencies
* cmake >= 3.11
  * All OSes: [click here for installation instructions](https://cmake.org/install/)
* make >= 4.1 (Linux, Mac), 3.81 (Windows)
  * Linux: make is installed by default on most Linux distros
  * Mac: [install Xcode command line tools to get make](https://developer.apple.com/xcode/features/)
  * Windows: [Click here for installation instructions](http://gnuwin32.sourceforge.net/packages/make.htm)
* gcc/g++ >= 5.4
  * Linux: gcc / g++ is installed by default on most Linux distros
  * Mac: same deal as make - [install Xcode command line tools](https://developer.apple.com/xcode/features/)
  * Windows: recommend using [MinGW](http://www.mingw.org/)
* wxWidgets >= 3.0
  * Installation instructions can be found [here](https://wiki.wxwidgets.org/Install). Some version numbers may need to be changed in instructions to install v3.0 or greater.
  * Linux: `sudo apt-get install libwxgtk3.0-dev libwxgtk3.0-0v5`
  * Mac: There is a [homebrew installation available](https://formulae.brew.sh/formula/wxmac).

## Basic Build Instructions
1. Clone this repository
2. Make a build directory in the top level directory: `mkdir build && cd build`
3. Compile: `cmake ..`
   `make`  
4. Run it: `./chatbot_project`

## Known Issues
* If you get this error *Gtk-Message: Failed to load module "canberra-gtk-module"*  
  The solution is to install gtk and gtk3 module:  
  `sudo apt install libcanberra-gtk-module libcanberra-gtk3-module`

## Acknowledgement
Boilerplate starter code template provided by [Udacity](https://github.com/udacity/CppND-Memory-Management-Chatbot).
