# my makefile to manage sep3.h, sep3.cc. se3.o, sep3Driver.cc, driver
compiler = g++
options = -Wall -std=c++17
compile = $(compiler) $(options) -c
link = $(compiler) $(options)

sept3.o : sept3.cc sept3.h
	$(compile) $<

driver.o : driver.cc sept3.h
	$(compile) $<

driver : driver.o sept3.o
	$(link) $^ -o $@
	./$@
