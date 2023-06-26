#include <Python.h>
<<<<<<< HEAD

void print_python_list_info(PyObject *p)
{
	Py_ssize_t size_p, allocated, idx = 0;
	PyObject *element;

	size_p = PyList_Size(p);
	allocated = ((PyListObject *)p)->allocated;
	printf("[*] Size of the Python List = %ld\n", size_p);
	printf("[*] Allocated = %ld\n", allocated);
	while (idx < size_p)
	{
		element = PyList_GET_ITEM(p, idx);
		printf("Element %ld: %s\n", idx, element->ob_type->tp_name);
		idx++;
=======
#include <stdio.h>
/**
 * print_python_list_info - print python
 * @p: input
 */
void print_python_list_info(PyObject *p)
{
	unsigned int l_idx;
	unsigned int len;
	unsigned int allocated;
	PyTypeObject *type;
	const char *name;

	if (p == NULL)
		return;

	len = (unsigned int) PyList_Size(p);
	allocated = (unsigned int) ((PyListObject *)p)->allocated;
	printf("[*] Size of the Python List = %d\n", len);
	printf("[*] Allocated = %d\n", allocated);

	for (l_idx = 0; l_idx < len; l_idx++)
	{
		type = PyList_GET_ITEM(p, l_idx)->ob_type;
		name = type->tp_name;
		printf("Element %d: %s\n", l_idx, name);
>>>>>>> ff42ee646487c55fd40b6e0d8fd799157ed9bf41
	}
}
