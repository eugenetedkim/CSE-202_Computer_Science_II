char to_lower(char c)
{
    if (c >= 'A' and c <= 'Z')
    {
        return c - 'A' + 'a';
    }
    return c;
}
