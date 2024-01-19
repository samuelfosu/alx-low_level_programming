# C - More malloc, free

malloc and free are functions in C and C++ used for dynamic memory allocation and deallocation. 

#malloc (Memory Allocation):

malloc stands for "memory allocation."
It is used to request a specific amount of memory from the heap, which is a region of the computer's memory used for dynamic memory allocation.
You need to specify the size of the memory you want in bytes, and malloc returns a pointer to the allocated memory if successful.
If malloc cannot allocate the requested memory, it returns a NULL pointer.
The allocated memory is uninitialized, meaning it may contain random data.

#free (Memory Deallocation):

free is used to release the memory previously allocated by malloc or similar functions.
It takes a pointer to the memory block as its argument.
After calling free, the memory is deallocated and can be used for other purposes.
It's important to free memory when you're done using it to prevent memory leaks.
