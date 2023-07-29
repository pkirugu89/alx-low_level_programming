#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/**
 * _checkif - checks if the file is elf type
 *
 * @h: header
 *
 * Return: No return
 */
void _checkif(char *h)
{
	if (h[0] != 0x7f || h[1] != 'E' || h[2] != 'L' || h[3] != 'F')
		dprintf(STDERR_FILENO, "Error: Wrong file type\n"), exit(98);
}

/**
 * _magic - print elf magic
 *
 * @x: header
 *
 * Return: No Return
 */
void _magic(char *x)
{
	int i;

	printf("ELF Header:\n  Magic:   ");

	for (i = 0; i < 15; i++)
		printf("%02x ", (unsigned int)x[i]);
	printf("%02x", (unsigned int)x[i]);

	printf("\n");
}
/**
 * _class - print elf class
 *
 * @x: header
 * @x64: 1 if x64, 0 if x32
 *
 * Return: No Return
 */
void _class(char *x, int x64)
{
	if (x[4] != 1 && x[4] != 2)
	{
		printf("<unknown: %02hx>\n", x[4]);
		return;
	}
	printf("  %-35s", "Class:");
	if (x64 == 0)
		printf("ELF32\n");
	else if (x64 == 1)
		printf("ELF64\n");
}
/**
 * _data - print elf data
 *
 * @x: header
 *
 * Return: No Return
 */
void _data(char *x)
{
	printf("  %-35s", "Data:");
	printf("2's complement, ");
	if (x[5] == 1)
		printf("little endian\n");
	else if (x[5] == 2)
		printf("big endian\n");
	else
		printf("<unknown: %02hx>\n", x[5]);
}
/**
 * _version - print elf version
 *
 * @x: header
 *
 * Return: No Return
 */
void _version(char *x)
{
	int EV_CURRENT = 1;
	
	printf("  %-35s", "Version:");
	if (x[6] == EV_CURRENT)
	{
		printf("%d (current)\n", x[6]);
	}
	else if (x[6] != EV_CURRENT)
	{
		printf("%d\n", x[6]);
	}
}
/**
 * _os - print elf os/ABI
 *
 * @x: header
 *
 * Return: No Return
 */
void _os(char *x)
{
	printf("  %-35s", "OS/ABI:");

	if (x[7] == 0)
		printf("UNIX - System V\n");
	else if (x[7] == 1)
		printf("UNIX - HP-UX\n");
	else if (x[7] == 2)
		printf("UNIX - NetBSD\n");
	else if (x[7] == 3)
		printf("UNIX - Linux\n");
	else if (x[7] == 4)
		printf("UNIX - GNU Hurd\n");
	else if (x[7] == 6)
		printf("UNIX - Solaris\n");
	else if (x[7] == 7)
		printf("UNIX - AIX\n");
	else if (x[7] == 8)
		printf("UNIX - IRIX\n");
	else if (x[7] == 9)
		printf("UNIX - FreeBSD\n");
	else if (x[7] == 10)
		printf("UNIX - Tru64\n");
	else if (x[7] == 11)
		printf("UNIX - Novell Modesto\n");
	else if (x[7] == 12)
		printf("UNIX - OpenBSD\n");
	else if (x[7] == 13)
		printf("UNIX - Open VMS\n");
	else if (x[7] == 14)
		printf("UNIX - NonStop Kernel\n");
	else if (x[7] == 15)
		printf("UNIX - AROS\n");
	else if (x[7] == 16)
		printf("UNIX - Fenix OS\n");
	else if (x[7] == 17)
		printf("UNIX - CloudABI\n");
	else
		printf("<unknown: %02hx>\n", x[7]);
}
/**
 * _abiv - checks abi version
 *
 * @x: header
 *
 * Return: No Return
 */
void _abiv(char *x)
{
	printf("  %-35s", "ABI Version:");
	printf("%d\n", x[8]);
}
/**
 * _type - print elf type
 *
 * @x: header
 * @x64: variable to check if x64 (1) or x32 (0)
 *
 * Return: No Return
 */
void _type(char *x, int x64)
{
	int xtype = 17;

	(void) x64;

	if (x[5] == 1)
		xtype = 16;

	printf("  %-35s", "Type:");

	switch (x[xtype])
	{
	case 0:
		printf("NONE\n");
		break;
	case 1:
		printf("REL (Relocatable file)\n");
		break;
	case 2:
		printf("EXEC (Executable file)\n");
		break;
	case 3:
		printf("DYN (Shared object file)\n");
		break;
	case 4:
		printf("CORE (Core file)\n");
		break;
	default:
		printf("<unknown>: %02x\n", x[xtype]);
	}
}
/**
 * _entry - print elf entry point access by directly accesing
 * the elf header struct
 *
 * @x: header
 * @x64: check 1 for x64 and 0 x32
 *
 * Return: No Return
 */
void _entry(char *x, int x64)
{
	int count = 27, i;

	printf("  %-35s0x", "Entry point address:");

	if (x64 == 1)
		count = 31;

	if (x[5] == 1)
	{
		/* Little Endian */
		i = count;
		while (x[i] == 0 && i > 24)
			i--;
		printf("%x", x[i]);
		i--;

		while (i >= 24)
		{
			printf("%02x", (unsigned char) x[i]);
			i--;
		}
	}
	else
	{
		/* Big Endian */

		i = 24;
		while (x[i] == 0)
			i++;
		printf("%x", x[i]);
		i++;

		while (i <= count)
		{
			printf("%02x", (unsigned char) x[i]);
			i++;
		}
	}
	printf("\n");
}

/**
 * main - displays the details contained in the ELF header at
 * the start of an ELF file.
 *
 * Usage: elf_header elf_filename
 * displayed details: (not less, not more)
 * Magic
 * Class
 * Data
 * Version
 * OS/ABI
 * ABI Version
 * Type
 * Entry point address
 *
 * @argc: Counts the number of parameters that go into main
 * @argv: Pointer of array of pointers containing strings entering main
 *
 * Return: Always 0 on (Success)
 *
 * if the file is not an ELF file, or on error, exit with status code 98
 *  and display a comprehensive error message to stderr
 */
int main(int argc, char **argv)
{
	int fdelf, relf, closecheck, x64 = 0;
	char h[32];

	if (argc != 2)
		dprintf(STDERR_FILENO, "Wrong # of Arguments\n"), exit(98);
	if (argv[1] == 0)
		dprintf(STDERR_FILENO, "Null name\n"), exit(98);
	fdelf = open(argv[1], O_RDONLY);
	if (fdelf == -1)
		dprintf(STDERR_FILENO, "Can't Open File\n"), exit(98);
	relf = read(fdelf, h, 32);
	if (relf == -1)
		dprintf(STDERR_FILENO, "Error Reading File\n"), exit(98);

	_checkif(h);

	if (h[4] == 2)
		x64 = 1;

	_magic(h);
	_class(h, x64);
	_data(h);
	_version(h);
	_os(h);
	_abiv(h);
	_type(h, x64);
	_entry(h, x64);

	closecheck = close(fdelf);

	if (closecheck == -1)
		dprintf(STDERR_FILENO, "Error Closing File\n"), exit(98);

	return (0);
}
