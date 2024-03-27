#include <elf.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

void print_elf_header_info(Elf64_Edhr *header)
{
	

/**
 * main - To print out elf headers from elf files
 * @ac: count of passed pariables
 * @av: pointer to the first passed variable
 */

void main(ac, **av)

{
	if (ac != 2)
	{
		printf("Usage: elf_header elf_filename");
		return;
	}

