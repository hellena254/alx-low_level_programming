# C - Structures and Typedef

## Structures

A structure is a composite data type that groups variables of different data types under a single name. It's used to represent complex data structures like records or objects.

**Declaration**
```bash
    struct Point {
    int x;
    int y;
    };
```

**Initialization:**
```
struct Point p1 = {1, 2};
```

**Accessing members**
```
p1.x = 3;
p1.y = 4;
```

**Nested Structures:** Structures can be nested within other structures, creating hierarchical data structures.
```
struct Address {
    char street[100];
    char city[50];
    char state[20];
    int postal_code;
};

struct Person {
    char name[50];
    int age;
    struct Address address;
};
```

**Arrays of Structures:**
```
struct Student {
    char name[50];
    int roll_number;
};

struct Student class[10];
```

## Typedef

Typedef is used to define new data types or aliases for existing data types. It improves code readability and portability.

**Declaration**
```
typedef int INT32; // Typedef for int
typedef struct {
    int x;
    int y;
} Point; // Typedef for a structure
```

**Usage**
```
INT32 num = 42;
Point p1 = {1, 2};
```

## Additional Resources

 - [C Programming Wikibooks: Structs](https://en.wikibooks.org/wiki/C_Programming/Structs)
 - [C Programming Wikibooks: Typedef](https://en.wikibooks.org/wiki/C_Programming/Structs)
