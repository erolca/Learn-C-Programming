# Array

An array is a collection of data that holds fixed number of values of same type.
For example: if you want to store marks of 100 students, you can create an array for it.

```bash
float marks[100];
```
The size and type of arrays cannot be changed after its declaration.

###  How to declare an array in C?

```bash

data_type array_name[array_size];

```
For example,

```bash
float mark[5];
```

Here, we declared an array, mark, of floating-point type and size 5. Meaning, it can hold 5 floating-point values.

###  Elements of an Array and How to access them?
You can access elements of an array by indices.

Suppose you declared an array mark as above. The first element is mark[0], second element is mark[1] and so on.

mark[0] | mark[1] | mark[2] | mark[3] | mark[4] |
------- | ------- | ------- | ------- | ------- |

### Few key notes:

* Arrays have 0 as the first index not 1. In this example, mark[0]
* If the size of an array is n, to access the last element, (n-1) index is used. In this example, mark[4]
* Suppose the starting address of mark[0] is 2120d. Then, the next address, a[1], will be 2124d, address of a[2] will be 2128d and so on. It's
because the size of a float is 4 bytes.










# Structure

Combine variables into a single package called a structure.
```bash
struct sampleName
{
    int a;
    char b;
}

```

*	This structure is named sampleName.
*	It contains two variables: an integer named a and a character named b.
*	The above command only creates the structure.(it doesn't declare any variables.)

The following line declares a structure variable named s1.
```bash
struct sample s1;
```

Items within the structure are referred to by using dot notation.

```bash
printf("Character 1 is %s\n",g1.name);
```
Link :
(http://www.java2s.com/Tutorial/C/0180__Structure/Catalog0180__Structure.htm)

### Pointers to Structures

```bash
struct Books {
   char  title[50];
   char  author[50];
   char  subject[100];
   int   book_id;
};
```

You can define pointers to structures in the same way as you define pointer to any other variable −
```bash
struct Books *struct_pointer;
```

Now, you can store the address of a structure variable in the above defined 
pointer variable. To find the address of a structure variable, place the '&';
operator before the structure's name as follows −
```bash
struct_pointer = &Book1;
```

To access the members of a structure using a pointer to that structure, you must use the → operator as follows −
```bash
struct_pointer->title;
```