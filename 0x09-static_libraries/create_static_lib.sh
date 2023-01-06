#!/bin/bash
gcc -c $(echo `ls *.c`) && ar rc liball.a $(echo `ls *.o`)
