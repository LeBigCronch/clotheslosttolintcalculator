install: clotheslosttolintcalculator.c
	cc clotheslosttolintcalculator.c -o clotheslosttolintcalculator
	mv clotheslosttolintcalculator /usr/bin
uninstall: /usr/bin/clotheslosttolintcalculator
	rm /usr/bin/clotheslosttolintcalculator
