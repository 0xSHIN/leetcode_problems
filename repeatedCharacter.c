char repeatedCharacter(char *s)
{
    bool visited[128] = {false};
    int i = 0;
    while (s[i] != '\0')
    {
        if (visited[(int)s[i]])
            return s[i];
        visited[(int)s[i]] = true;
        i++;
    }
    return ('\0');
}
