Check it out

112 Клипалко Михаил Михайлович

Сделал медленную сортировку(обменами), сортировку слиянием и использовал быструю сортировку qsort() из stdlib.h.

В файле time.txt написано время работы каждой сортировки

В файле source.txt находится исходный массив(сгенерированный)

В файле out.txt находятся все отсортированные последовательности

В файле in.txt находятся все неотсортированные последовательности

Программа разбита на модули. Каждая функция находится в определенных файлах (.c и txt)

Есть функции:

mass_generation - заполнение массива случайными числами

mass_read - запись сгенерированного массива для других сортировок

merge_mass - функция слияния двух упорядоченных массивов

merge_sort - функция сортировки слиянием

min_index - функция нахождения минимума из двух целых чисел

slow_sort - функция медленной сортировки обменами

test_sort - проверка упорядоченности массива

compare - функция сравнения для qsort()

В headers.h содержатся все определения функций и вспомогательные библиотеки (stdlib.h, stdio.h, time.h)
