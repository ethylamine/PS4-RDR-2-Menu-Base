LIBPS4	:=	$(PS4SDK)/libPS4

CC		:=	gcc
AS		:=	gcc
OBJCOPY	:=	objcopy
ODIR	:=	build
SDIR	:=	source
IDIRS	:=	-I$(LIBPS4)/include -I. -Iinclude
LDIRS	:=	-L$(LIBPS4) -L. -Llib
CFLAGS	:=	$(IDIRS) -O2 -std=c11 -ffunction-sections -fdata-sections -fno-stack-protector  -fno-builtin -nostartfiles -nostdlib -Wall -masm=intel -march=btver2 -mtune=btver2 -m64 -mabi=sysv -mcmodel=small -fpie
SFLAGS	:=	-nostartfiles -nostdlib -march=btver2 -mtune=btver2  -m64 -mabi=sysv -mcmodel=large
LFLAGS	:=	$(LDIRS) -Xlinker -T $(LIBPS4)/linker.x -Wl,--build-id=none
CFILES	:=	$(wildcard $(SDIR)/*.c)
SFILES	:=	$(wildcard $(SDIR)/*.s)
OBJS	:=	$(patsubst $(SDIR)/%.c, $(ODIR)/%.o, $(CFILES)) $(patsubst $(SDIR)/%.s, $(ODIR)/%.o, $(SFILES))

LIBS	:=	-lPS4

TARGET = $(shell basename $(CURDIR)).bin

$(TARGET): makeGtaPayload requiredClean $(ODIR) $(OBJS)
	$(CC) $(LIBPS4)/crt0.s $(ODIR)/*.o -o temp.t $(CFLAGS) $(LFLAGS) $(LIBS)
	$(OBJCOPY) -O binary temp.t $(TARGET)
	rm -f temp.t

$(ODIR)/%.o: $(SDIR)/%.c
	$(CC) -c -o $@ $< $(CFLAGS)

$(ODIR)/%.o: $(SDIR)/%.s
	$(AS) -c -o $@ $< $(SFLAGS)

$(ODIR):
	@mkdir $@

.PHONY: $(TARGET)

makeGtaPayload:
	$(MAKE) -C gtaPayload $?

requiredClean:
	rm -f $(TARGET) $(ODIR)/embed.o

clean:
	rm -f $(TARGET) $(ODIR)/*.o