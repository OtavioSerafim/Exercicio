#!/bin/bash
cd acessorios-cpp/
g++ -c *.cpp 
cd ..
cd core-simulador-cpp/
g++ -c *.cpp 
cd ..
cd personagens-cpp/
g++ -c *.cpp
cd ..
g++ acessorios-cpp/*.o core-simulador-cpp/*.o personagens-cpp/*.o principal/main.cpp -o simulador