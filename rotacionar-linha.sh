#!/bin/sh

# # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # #
#                                                                              #
# C build script.                                                              #
#                                                                              #
# @author: Cris Stanza, 20-Aug-2016                                            #
#                                                                              #
# # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # #

THIS_FILE_NAME=$(basename $0)

SRC_NAME=rotacionar-linha.c
EXE_NAME=${SRC_NAME}.exe

function clean {
	[ -d bin ] && rm -R bin
}

function build {
	[ -d bin ] || mkdir bin
	cd src
	gcc ${SRC_NAME} -o ../bin/${EXE_NAME}
	cd ..
}

function run() {
	cd bin
	./${EXE_NAME}
	cd ..
}

///////////////////////////////////////////////////////////////////////////////

function __config_git__() {
	// TODO
}

function init() {
	clear
}

///////////////////////////////////////////////////////////////////////////////

init

if [ -z "$1" ] ; then
	echo
	echo "Error! Usage: ./${THIS_FILE_NAME} [commands...]"
	echo "------"
	echo
	echo "Available commands:"
	echo "              ./${THIS_FILE_NAME} clean | build | run"
	echo
else
	while test ${#} -gt 0 ; do
		if [ "$1" == "-s" ] ; then
			shift
			THIS_FILE_NAME=$1
			SRC_NAME=$1.c
			EXE_NAME=${SRC_NAME}.exe
			shift
		else
			$1 ; shift
		fi
	done
fi
