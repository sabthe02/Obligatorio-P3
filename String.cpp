#include "String.h"

void strcrear (String &s)
{

    s = new char [1];
    s[0] = '\0';


}

void strdestruir (String &s)
{
    delete []s;
    s = NULL;
}

int strlar (String s)
{
    int i = 0;
    while (s[i] != '\0')
        i++;
    return i;
}

void print (String s)
{
    int i = 0;
    while (s[i]!= '\0')
    {
        printf ("%c", s[i]);
        i++;
    }
}

void scan (String &s)
{
    String aux = new char[MAX];
    int i=0;
    char c;
    fflush (stdin);
    scanf ("%c", &c);

    while (c!= '\n' && i < MAX-1)
    {
        aux[i] = c;
        i++;
        scanf ("%c", &c);
    }
    aux[i] = '\0';
    strcop (s,aux);
    strdestruir (aux);
}


boolean streq (String s1, String s2)
{
    int i = 0;
    boolean iguales = TRUE;
    while (iguales && (s1[i] != '\0') && (s2[i] != '\0'))
    {
        if (s1[i] != s2[i])
            iguales = FALSE;
        i++;
    }
    if ((s1[i] != '\0') || (s2[i] != '\0'))
        iguales = FALSE;
    return iguales;
}

void strcop (String &s1,String s2)
{
    int i = 0;
    int largo = strlar(s2) + 1;
    delete [] s1;
    s1 = new char[largo];

    while (s2[i] != '\0')
    {
        s1[i] = s2[i];
        i++;
    }
    s1[i] = '\0';
}

boolean esVacio (String s)
{
    boolean es;

    if (strlar(s) == 0)
    {
        es = TRUE;
    }
    else
    {
        es = FALSE;
    }
    return es;

}

void strswp (String &s1,String &s2)
{
    String aux;
    strcop (aux,s1);
    strcop (s1,s2);
    strcop (s2,aux);
}

boolean strmen (String s1, String s2)
{
    int i = 0;
    boolean encontre = FALSE;
    boolean menor = FALSE;

    while ((!encontre) && (s1[i] != '\0') && (s2[i] != '\0'))
    {
        if (s1[i] != s2[i])
            encontre = TRUE;

        if (s1[i] < s2[i])
            menor = TRUE;
        i++;
    }
    if ((!encontre) && (s2[i]!='\0'))
        menor = TRUE;

    return menor;
}

boolean CompararStrings(String s1, String s2)
{
    boolean resp = TRUE;
    int i = 0;


    while(resp == TRUE && (s1[i] != '\0' || s2[i] != '\0'))
    {
        if(s1[i] != s2[i])
        {
            resp = FALSE;
        }

        i++;
    }


    return resp;
}


boolean validarAlfanumerico (String s)
{
    boolean es = TRUE;
    int i = 0;

    if (!esVacio(s))
    {

        while (es && (s[i] != '\0'))
        {
            if (!((s[i] >=  'a' && s[i] <= 'z') || ((s[i] >=  'A' && s[i] <= 'Z')) || ((s[i] >=  '0' && s[i] <= '9'))))
            {
                es = FALSE;
            }
            else
            {
                i++;
            }
        }

        if ((s[i] != '\0'))
        {
            es = FALSE;
        }
    }
    else
    {
        es = FALSE;
    }

    return es;
}

