/**
  * *_memcpy - function copies n bytes from memory area src to memory area dest
  * @dest: area memory copied to
  * @src: area memory copied from
  * @n: bytes copied
  *
  * Return: pointer to dest
  *
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
