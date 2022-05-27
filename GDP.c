#include <stdio.h>
#include <string.h>
#define SIZE 31
typedef struct provice
{
    char name[SIZE];
    double gdp;
} pro;
int main()
{
    pro arr[SIZE] = {
    {"安徽", 42959.2}, 
    {"北京", 40269.6}, 
    {"福建", 48810.36}, 
    {"甘肃", 10243.3},
    {"广东", 124369.67}, 
    {"广西", 24740.86}, 
    {"贵州", 19586.42}, 
    {"海南", 6475.2}, 
    {"河北", 40391.3}, 
    {"河南", 58887.41},
    {"黑龙江", 14879.2}, 
    {"湖北", 50012.94}, 
    {"湖南", 46063.09}, 
    {"吉林", 13235.52}, 
    {"江苏", 116364.2}, 
    {"江西", 29619.7}, 
    {"辽宁", 27584.1}, 
    {"内蒙古", 20514.2}, 
    {"宁夏", 4522.31}, 
    {"青海", 3346.63}, 
    {"山东", 83095.9}, 
    {"山西", 22590.16}, 
    {"陕西", 29800.98}, 
    {"上海", 43214.85}, 
    {"四川", 53850.79}, 
    {"天津", 15695.05}, 
    {"西藏", 2080.17}, 
    {"新疆", 15983.65}, 
    {"云南", 27146.76}, 
    {"浙江", 73516}, 
    {"重庆", 27894.02}};
    int i, j, t;
    double gdp;
    char arr2[SIZE];
    for (i = 0; i < SIZE; i++)
        for (j = 0; j < SIZE; j++)
            if (arr[j].gdp < arr[j + 1].gdp)
            {
                gdp = arr[j].gdp;
                arr[j].gdp = arr[j + 1].gdp;
                arr[j + 1].gdp = gdp;
                strcpy(arr2, arr[j].name);
                strcpy(arr[j].name, arr[j + 1].name);
                strcpy(arr[j + 1].name, arr2);
            }
    for (j = 0; j < SIZE; j++)
        printf("%d\t %s\t %.2lf\n", j + 1, arr[j].name, arr[j].gdp);
    getchar();
    return 0;
}