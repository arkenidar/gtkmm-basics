/*
 ============================================================================
 Name        : hello-gtkmm.cpp
 Author      : Dario Cangialosi
 Version     :
 Copyright   : 
 Description : Hello World in gttkmm
 ============================================================================
 */

#include "HelloWorld.h"
#include <gtkmm/main.h>

int main (int argc, char *argv[])
{
  Gtk::Main kit(argc, argv);

  HelloWorld helloworld;
  //Shows the window and returns when it is closed.
  Gtk::Main::run(helloworld);

  return 0;
}
