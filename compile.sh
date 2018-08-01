#!/bin/bash

C_SRC=$1
C_ARGS='-Wall -O3 -std=c99'

gcc -o $1 $1.c $C_ARGS
