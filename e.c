

char *ft_strdup(const char *s)
{
    char    *ptr;
    int     i;
    int     len;
    
    // Calculate length of string
    len = 0;
    while (s[len] != '\0')
        len++;
    
    // Allocate memory (length + 1 for '\0')
    ptr = (char *)malloc(sizeof(char) * (len + 1));
    if (ptr == NULL)
        return (NULL);  // malloc failed!
    
    // Copy the string
    i = 0;
    while (s[i] != '\0')
    {
        ptr[i] = s[i];
        i++;
    }
    ptr[i] = '\0';  // Don't forget the null terminator!
    
    return (ptr);
}