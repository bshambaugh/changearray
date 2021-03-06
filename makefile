# ==========================================
#   Unity Project - A Test Framework for C
#   Copyright (c) 2007 Mike Karlesky, Mark VanderVoord, Greg Williams
#   [Released under MIT License. Please refer to license.txt for details]
# ==========================================

#We try to detect the OS we are running on, and adjust commands as needed
ifeq ($(OS),Windows_NT)
  ifeq ($(shell uname -s),) # not in a bash-like shell
	CLEANUP = del /F /Q
	MKDIR = mkdir
  else # in a bash-like shell, like msys
	CLEANUP = rm -f
	MKDIR = mkdir -p
  endif
	TARGET_EXTENSION=.exe
else
	CLEANUP = rm -f
	MKDIR = mkdir -p
	TARGET_EXTENSION=.out
	TARGET_OBJ_EXTENSION=.o
endif

C_COMPILER=gcc
ifeq ($(shell uname -s), Darwin)
C_COMPILER=clang
endif

UNITY_ROOT=.

CFLAGS=-std=c89
CFLAGS += -Wall
CFLAGS += -Wextra
CFLAGS += -Wpointer-arith
CFLAGS += -Wcast-align
CFLAGS += -Wwrite-strings
CFLAGS += -Wswitch-default
CFLAGS += -Wunreachable-code
CFLAGS += -Winit-self
CFLAGS += -Wmissing-field-initializers
CFLAGS += -Wno-unknown-pragmas
CFLAGS += -Wstrict-prototypes
CFLAGS += -Wundef
CFLAGS += -Wold-style-definition
#CFLAGS += -Wno-misleading-indentation

TARGET_BASE1=test1
TARGET_BASE2=test2
TARGET_BASE3=test3
TARGET1 = $(TARGET_BASE1)$(TARGET_EXTENSION)
TARGET1P = $(TARGET_BASE1)$(TARGET_OBJ_EXTENSION)
TARGET2 = $(TARGET_BASE2)$(TARGET_EXTENSION)
TARGET2P = $(TARGET_BASE2)$(TARGET_OBJ_EXTENSION)
TARGET3 = $(TARGET_BASE3)$(TARGET_EXTENSION)
TARGET3P = $(TARGET_BASE3)$(TARGET_OBJ_EXTENSION)
SRC_FILES1=$(UNITY_ROOT)/test/unity/src/unity.c test/TestfloatToIEEE754Binary.c  test/test_runners/TestfloatToIEEE754Binary_Runner.c
SRC_FILES1P=src/floatToIEEE754Binary.c
SRC_FILES2=$(UNITY_ROOT)/test/unity/src/unity.c test/TestbinaryToHexArray.c test/test_runners/TestbinaryToHexArray_Runner.c
SRC_FILES2P=src/binaryToHexArray.c
SRC_FILES3=$(UNITY_ROOT)/test/unity/src/unity.c test/TestfloatToHexArray.c test/test_runners/TestfloatToHexArray_Runner.c
SRC_FILES3P=src/floatToHexArray.c
INC_DIRS=-Isrc -I$(UNITY_ROOT)/test/unity/src
SYMBOLS=

all: clean default

default: $(SRC_FILES1) $(SRC_FILES2) $(SRC_FILES1P) $(SRC_FILES2P) $(SRC_FILES3P)
	$(C_COMPILER) $(CFLAGS) $(SYMBOLS) -c  $(SRC_FILES1P) -o $(TARGET1P)
	$(C_COMPILER) $(CFLAGS) $(SYMBOLS) -c  $(SRC_FILES2P) -o $(TARGET2P)
	$(C_COMPILER) $(CFLAGS) $(SYMBOLS) -c  $(SRC_FILES3P) -o $(TARGET3P) 
	$(C_COMPILER) $(CFLAGS) $(INC_DIRS) $(SYMBOLS) $(TARGET1P) $(SRC_FILES1) -o $(TARGET1)
	$(C_COMPILER) $(CFLAGS) $(INC_DIRS) $(SYMBOLS) $(TARGET2P) $(SRC_FILES2) -o $(TARGET2)
	$(C_COMPILER) $(CFLAGS) $(INC_DIRS) $(SYMBOLS) $(TARGET1P) $(TARGET2P) $(TARGET3P) $(SRC_FILES3) -o $(TARGET3)
	- ./$(TARGET1)
	- ./$(TARGET2)
	- ./$(TARGET3)

test/test_runners/TestfloatToIEEE754Binary_Runner.c: test/TestfloatToIEEE754Binary.c
	ruby $(UNITY_ROOT)/auto/generate_test_runner.rb test/TestfloatToIEEE754Binary.c  test/test_runners/TestfloatToIEEE754Binary_Runner.c
test/test_runners/TestbinaryToHexArray_Runner.c: test/TestbinaryToHexArray.c
	ruby $(UNITY_ROOT)/auto/generate_test_runner.rb test/TestbinaryToHexArray.c test/test_runners/TestbinaryToHexArray_Runner.c
test/test_runners/TestfloatToHexArray_Runner.c: test/TestfloatToHexArray.c
	ruby $(UNITY_ROOT)/auto/generate_test_runner.rb test/TestfloatToHexArray.c  test/test_runners/TestfloatToHexArray_Runner.c


clean:
	$(CLEANUP) $(TARGET1) $(TARGET2) $(TARGET3) $(TARGET1P) $(TARGET2P) $(TARGET3P)

ci: CFLAGS += -Werror
ci: default
