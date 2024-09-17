# my makefile to manage sep5.h, sep5.cc. se5.o, sep5Driver.cc, driver
compiler = g++
options = -Wall -std=c++17
compile = $(compiler) $(options) -c
link = $(compiler) $(options)

sept5.o : sept5.cc sept5.h
	$(compile) $<

driver.o : driver.cc sept5.h
	$(compile) $<

driver : driver.o sept5.o
	$(link) $^ -o $@
	./$@
