# 01-KONFIGURACJA-MIKROKONTROLERA

Plik nagłówkowy DeviceConfig.h zawiera konfiguracje fusebitów oraz funkcję Set_MaxSpeed_Mode(). Fusebity konfigurują
mikrokontroler PIC32MK1024MCM064 do pracy z największą możliwą częstotliwością (120MHz) używając wewnętrznego generatora 8MHz
i pętli PLL. Funkcja Set_MaxSpeed_Mode() włącza wszystkie peryferyjne linie zegarowe i ustawia najwyższą możliwą częstotliwość
pracy dla każdego z nich. W części głównej programu, wyłaczane są analogowe opcje wszyatkich dostępnych portów. W celu użycia
wybranego pinu lub portu jako analogowy, należy to jawnie wskazać.

W celu uruchomienia mikrokontrolera należy:
1) Dołączyć plik DeviceConfig.h do folderu z projektem
2) Dodać plik nagłówkowy do projektu, do części "Header Files"
3) Do pliku głównego dołączyć plik nagłówkowy #include "DeviceConfig.h"
4) W funkcji main wywołać funkcję Set_MaxSpeed_Mode()
5) Mikrokontroler jest gotowy do działania
