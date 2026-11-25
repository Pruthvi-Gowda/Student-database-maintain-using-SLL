student:stud_main.o stud_deleteall.o stud_exit.o stud_read.o stud_save.o stud_sort.o stud_add.o stud_delete.o stud_modify.o stud_reverse.o stud_show.o 
	cc stud_main.o stud_deleteall.o stud_exit.o stud_read.o stud_save.o stud_sort.o stud_add.o stud_delete.o stud_modify.o stud_reverse.o stud_show.o -o student
stud_deleteall.o:stud_deleteall.c
	cc -c stud_deleteall.c
stud_exit.o : stud_exit.c
	cc -c stud_exit.c
stud_read.o : stud_read.c
	cc -c stud_read.c
stud_save.o : stud_save.c
	cc -c stud_save.c
stud_sort.o : stud_sort.c
	cc -c stud_sort.c
stud_add.o : stud_add.c
	cc -c stud_add.c
stud_delete.o : stud_delete.c
	cc -c stud_delete.c
stud_modify.o : stud_modify.c
	cc -c stud_modify.c
stud_reverse.o : stud_reverse.c
	cc -c stud_reverse.c
stud_show.o : stud_show.c
	cc -c stud_show.c
clear : 
	@echo "cleaning up--"
	@rm -rv *.o
