#
#CC   = gcc
#OBJS = main.o func_usage.o
#DIR  = /home/ryota/Documents/practice/func_usage/4.0.0/inc
#INC  = ./inc

#main: $(OBJS)
#	$(CC) -o main.exe $(OBJS)  

#main.o: main.c
#	$(CC) -c main.c

#func_usage.o: func_usage.c 
#	$(CC) -c func_usage.c -I $(INC)

#clean:
#	rm -f main.exe $(OBJS)

COMPILER  = gcc
AR        = ar
CFLAGS    = -g -MMD -MP -Wall
ifeq "$(shell getconf LONG_BIT)" "64"
  LDFLAGS = -lm
else
  LDFLAGS = -lm
endif
LIBS      = 
INCLUDE   = -I./inc
ifneq ($(OS),Windows_NT)
#for linux
TARGET    = ./bin/$(shell basename `readlink -f .`)
else
#for windows
TARGET    = ./bin/$(shell basename `readlink -f .`)
endif
LIBDIR    = ./lib
#LIBTARGET = trignometric_data_lib.a
ifneq ($(OS),Windows_NT)
LIBTARGET = ./lib/$(shell basename `readlink -f .`).a
else
#for windows
LIBTARGET = ./lib/$(shell basename `readlink -f .`).a
endif
SRCDIR    = ./src
ifeq "$(strip $(SRCDIR))" ""
  SRCDIR  = .
endif
SOURCES   = $(wildcard $(SRCDIR)/*.c)
OBJDIR    = ./obj
ifeq "$(strip $(OBJDIR))" ""
  OBJDIR  = .
endif
OBJECTS   = $(addprefix $(OBJDIR)/, $(notdir $(SOURCES:.c=.o)))
DEPENDS   = $(OBJECTS:.o=.d)

#create the exe file from the lib made previously and main.o 
$(TARGET): $(filter $(OBJDIR)/main.o,$(OBJECTS)) $(LIBTARGET)
	$(COMPILER) -o $(TARGET) $^ $(LDFLAGS)

#create lib without main.o
$(LIBTARGET): $(filter-out $(OBJDIR)/main.o,$(OBJECTS))
  #make dir libs if there isn't 
	-mkdir -p $(LIBDIR)
	$(AR) -r -o $(LIBTARGET) $^

#.o file from .c file
$(OBJDIR)/%.o: $(SRCDIR)/%.c
  #make dir objs if there isn't
	-mkdir -p $(OBJDIR)
	$(COMPILER) $(CFLAGS) $(INCLUDE) -o $@ -c $<

all: clean $(LIBTARGET) $(TARGET)

clean:
	-rm -f $(OBJECTS) $(DEPENDS) $(TARGET) $(LIBTARGET)

-include $(DEPENDS)
