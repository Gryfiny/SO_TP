CC=gcc
CFLAGS=-I.
CLIENTE = Cliente/cliente
GESTOR = Gestor/gestor
VERI = Verificador/verificador

.Phony = $(GESTOR) $(CLIENTE) $(VERI)

all: clean
	#$(CC) -o $(CLIENTE) $(CLIENTE).c
	$(CC) -o $(GESTOR) $(GESTOR).c
	#$(CC) -o $(VERI) $(VERI).c

cliente: clean
	$(CC) -o $(CLIENTE) $(CLIENTE).c

gestor: clean
	$(CC) -o $(GESTOR) $(GESTOR).c

verificador: clean
	$(CC) -o $(VERI) $(VERI).c

clean:
	clear
	rm -f $(CLIENTE) $(VERI) $(GESTOR)

