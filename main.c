#include <stdio.h>
#include <time.h>

int main()
{
    time_t     now;
    struct tm *ts;
    char       buf[99];
    int dias;

    now = time(NULL);
    ts = localtime(&now);
    strftime(buf, sizeof(buf), "%d/%m/%Y %H:%M", ts);

    printf("Acrescentar quantos dias: ");
    scanf("%d",&dias);

    dias=dias*86400;

    printf("\n%s",buf);

    now = time(NULL)+dias;
    ts = localtime(&now);
    strftime(buf, sizeof(buf), "%d/%m/%Y %H:%M", ts);

    printf("\n%s\n\n",buf);

    return 0;
}
