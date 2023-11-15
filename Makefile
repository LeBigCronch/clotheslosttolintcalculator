install: clotheslosttolintcalculator.c
	cc clotheslosttolintcalculator.c -o clotheslosttolintcalculator
	mv clotheslosttolintcalculator /usr/bin
uninstall:
	rm /usr/bin/clotheslosttolintcalculator
