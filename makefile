CC = gcc
OUT = calcMain
SRCS = calcMain.c operaciones.c
CFLAGS = -Wall
LDFLAGS = -lm
SRCSGT = calcMain.c
all: compilar

compilar: $(SRCS)
	$(CC) $(CFLAGS) $(SRCS) -o $(OUT) $(LDFLAGS)

gettext: $(SRCSGT)
	xgettext --package-name calcMain --package-version 0.1 --default-domain calcMain --output po/calcMain.pot --from-code=utf-8 --copyright-holder="Stallmans" --msgid-bugs-address="nlira42@gmail.com" -s -k_ -L C calcMain.c operaciones.c
	msgmerge -s -U po/es.po po/calcMain.pot
.PHONY: clean

clean:
	rm $(OUT)

