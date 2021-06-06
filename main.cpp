#include <iostream>
#include <stdio.h>
#include <Windows.h>
#define NALOG1 0.15 // тариф за первые 300$
#define NALOG2 0.20 // тариф за следующие 150$
#define NALOG3 0.25 // тариф за остальные (>450$) 
#define HOUR 40.0 // Количество часов
#define COEF 1.5 // Коэффициент за с/у
#define SUM1 300.0 // Первые 300$
#define SUM2 450.0 // Следующие 150$
#define STAVKA1 8.75 // Тарифная ставка 10$/час
#define STAVKA2 9.33 // Тарифная ставка 10$/час
#define STAVKA3 10.0 // Тарифная ставка 10$/час
#define STAVKA4 11.20 // Тарифная ставка 10$/час

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    double hour;
    double sum = 0, sum1 = 0, nalog = 0, zp = 0;
    int x = 1;

    while (1)
    {
        if (x == 5)
            break;
        printf("Введите число, соответствующее желаемой тарифной ставке или действию:\n\
1) $%.2lf/ч     2) $%.2lf/ч\n\
3) $%.2lf/ч    4) $%.2lf/ч\n\
5) Выход\n", STAVKA1, STAVKA2, STAVKA3, STAVKA4);
        scanf_s("%d", &x);

        switch (x)
        {
            case 1:
                printf("Введите количество часов работы.\n");
                scanf_s("%lf", &hour);

                if (hour <= HOUR)
                {
                    sum = STAVKA1 * hour;
                    if (sum <= SUM1)
                        nalog = sum * NALOG1;
                    else
                        nalog = sum * NALOG2;
                }
                zp = sum - nalog;

                if (hour > HOUR)
                {
                    sum1 = (STAVKA1 * hour - STAVKA1 * HOUR) * COEF;
                    sum = STAVKA1 * HOUR + sum1;

                    if (sum <= SUM2)
                        nalog = sum * NALOG2;
                    else
                        nalog = sum * NALOG3;
                }
                zp = sum - nalog;

                printf("За %.lf часов работы следующий расчет:\nСумма $%1.2f\n\
Налог $%1.2f\nЧистые $%1.2f.\n", hour, sum, nalog, zp);
                break;

             case 2:
                printf("Введите количество часов работы.\n");
                scanf_s("%lf", &hour);

                if (hour <= HOUR)
                {
                    sum = STAVKA2 * hour;
                    if (sum <= SUM1)
                        nalog = sum * NALOG1;
                    else
                        nalog = sum * NALOG2;
                }
                zp = sum - nalog;

                if (hour > HOUR)
                {
                    sum1 = (STAVKA2 * hour - STAVKA2 * HOUR) * COEF;
                    sum = STAVKA2 * HOUR + sum1;

                    if (sum <= SUM2)
                        nalog = sum * NALOG2;
                    else
                        nalog = sum * NALOG3;
                }
                zp = sum - nalog;

                printf("За %.lf часов работы следующий расчет:\nСумма $%1.2f\n\
Налог $%1.2f\nЧистые $%1.2f.\n", hour, sum, nalog, zp);
                break;

            case 3:

                printf("Введите количество часов работы.\n");
                scanf_s("%lf", &hour);

                if (hour <= HOUR)
                {
                    sum = STAVKA3 * hour;
                    if (sum <= SUM1)
                        nalog = sum * NALOG1;
                    else
                        nalog = sum * NALOG2;
                }
                zp = sum - nalog;

                if (hour > HOUR)
                {
                    sum1 = (STAVKA3 * hour - STAVKA3 * HOUR) * COEF;
                    sum = STAVKA3 * HOUR + sum1;

                    if (sum <= SUM2)
                        nalog = sum * NALOG2;
                    else
                        nalog = sum * NALOG3;
                }
                zp = sum - nalog;

                printf("За %.lf часов работы следующий расчет:\nСумма $%1.2f\n\
Налог $%1.2f\nЧистые $%1.2f.\n", hour, sum, nalog, zp);
                break;

            case 4:
                printf("Введите количество часов работы.\n");
                scanf_s("%lf", &hour);

                if (hour <= HOUR)
                {
                    sum = STAVKA4 * hour;
                    if (sum <= SUM1)
                        nalog = sum * NALOG1;
                    else
                        nalog = sum * NALOG2;
                }
                zp = sum - nalog;

                if (hour > HOUR)
                {
                    sum1 = (STAVKA4 * hour - STAVKA4 * HOUR) * COEF;
                    sum = STAVKA4 * HOUR + sum1;

                    if (sum <= SUM2)
                        nalog = sum * NALOG2;
                    else
                        nalog = sum * NALOG3;
                }
                zp = sum - nalog;

                printf("За %.lf часов работы следующий расчет:\nСумма $%1.2f\n\
Налог $%1.2f\nЧистые $%1.2f.\n", hour, sum, nalog, zp);
                break;

            case 5:
                break;
            default:
                printf("Вы ввели неверные данные. Доступно 1-5\n");
        }
    }

    return 0;
}

