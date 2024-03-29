# Synpsis
The goal of this exercise is apply C++ memory-management related best pracitces while turning the invoice program into an interactive one.

To compile and run the program use cmake and make (or cmake and `mingw32-make.exe` on Windows). From the `lab14` working directory:

Mac/Linux/Codespaces:
```sh
cmake .
make
./prog
```

Windows:
```ps
cmake .
mingw32-make.exe
.\prog.exe
```

Next, we outline the changes with regards to memory management.

## Catalog
This class is introduced to load products from a file. The assumption is that there are many products, so we want to avoid in our program
any copying of catalog either on purpose or by accident (e.g. passing by value).

This is why we:
- Delete the copy constructor, generated by default by the compiler. This way, you cannot pass `Catalog` by value (similarly to the `istream` and `ostream` from the standard library).
- Delete the assignment operator, generated by the compiler. Assinging one `Catalog` to another, e.g. `c1 = c2;` has similar effect to a default copy constructor. We want to avoid that, so we delete it.
- Define a destructor that deletes allocated products. General rule is we call `delete` for every `new` called in the constructor.

## Item
Item now holds a pointer to a product. However, since the catalog (where the product pointer is coming from) might be destroyed before the invoice (where the item is),
we want to make a copy of the product in the item. This way, even if the catalog is destroyed, we are not having a danling pointer to an already de-allocated memory.

In contrast to the catalog, we allow copying and assignments of the item. However, to handle those correctly, we must:
- override the copy constructor and the assignment operator, otherwise they will just copy the address of the `product` pointer, not the product itself.
- define a destructor where we delete the allocated product copy.

Item also prints on `cerr` logs about allocations and deallocations. Notice when objects are created and deleted when you add and remove products from the invoice.