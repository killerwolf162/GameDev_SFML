This project is dependend on DLL's provided by Microsoft Visual Studio, without a version of Visual Studio installed(I use VS 2019) the project will NOT run!!

This repository contains the official SFML 2.6.X branch code for ease of use, official github file location: https://github.com/SFML/SFML/tree/2.6.x

The repository includes the visual studio project settings I use, to make sure it works unzip the "Cmake_SFML.zip" file into your C:\ drive so Visual studio knows where to find the libraries.

if you dont want the SFML libaries there you can move them, just make sure to also update the project settings:
(C/C++ -> general, Linker -> general+inputfor more info about setting up SFML with VS see: https://www.sfml-dev.org/tutorials/2.6/start-vc.php).

Cmake_SFML also contains the directory with the project's executable + needed files extra to run the it.
