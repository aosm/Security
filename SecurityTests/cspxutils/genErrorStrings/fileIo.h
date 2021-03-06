/*
 * Read entire file. 
 */
#ifdef __cplusplus
extern "C" {
#endif

int readFile(
	const char			*fileName,
	unsigned char		**bytes,		// mallocd and returned
	unsigned			*numBytes);		// returned

int writeFile(
	const char			*fileName,
	const unsigned char	*bytes,
	unsigned			numBytes);

#ifdef __cplusplus
}
#endif
