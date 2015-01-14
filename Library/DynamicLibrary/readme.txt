g++ -fPIC -c DynamicMath.cpp
g++ -shared -o libdynmath.so DynamicMath.o
g++ TestDynamicLibrary.cpp -L../DynamicLibrary -ldynmath
vi /etc/ld.so.conf  /home/swy/cpp/DynamicLibrary
sudo ldconfig
