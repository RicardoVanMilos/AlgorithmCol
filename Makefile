all:
	gcc -o sort.exe ./Sort/quick_sort.c ./Sort/sort_test.c ./Sort/sort.h ./Sort/binary_insert_sort.c ./Search/binary_search.c ./Search/search.h

sort:
	gcc -o sort.exe ./Sort/quick_sort.c ./Sort/sort_test.c ./Sort/sort.h ./Sort/binary_insert_sort.c ./Search/binary_search.c ./Search/search.h

clean:
	del /s /q *.exe *.gch