StaticMath.cpp
ar -crv libstaticmath.a StaticMath.o
g++ TestStaticLibrary.cpp -L../StaticLibrary -lstaticmath
