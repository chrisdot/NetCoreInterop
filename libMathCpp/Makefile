all:
	g++ -c *.cpp
	g++ -shared -o libmathcpp.so *.o -lc

# static:
# 	g++ -c *.cpp
# 	ar rvs libMathCpp.a *.o 

clean:
	rm -f *.o *.a *.so
