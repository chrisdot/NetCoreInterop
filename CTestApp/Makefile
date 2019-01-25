all:
	gcc -c Main.c
	gcc -o CTestApp Main.o -lmathcpp -L../libMathCpp
	cp ../libMathCpp/libmathcpp.so .


clean:
	rm -f *.o *.so CTestApp