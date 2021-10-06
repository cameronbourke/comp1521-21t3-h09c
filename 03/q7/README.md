Q7
==========================================

```c
struct {
    int a;
    float b;
} x1;

If x1 was located at &x1 == 0x1000,
what would be the values of:
- `&x1.a`
- `&x1.b`

...










       -----------------
0x1000 | 0xFF FF FF FF | int a
       -----------------
0x1004 | 0xFF FF FF FF | float b
       -----------------
```

```c
union {
    int a;
    float b;
} x2;
```

If x2 was located at &x2 == 0x2000,
what would be the values of:
- `&x2.a`
- `&x2.b`

...





       -----------------
0x2000 | 0xFF FF FF FF | int a OR float b
       -----------------

```c
union {
    int a
    char b;
} x2;
```

					|---- a ---|
       -----------------
0x2000 | 0xFF FF FF FF | int a OR float b
       -----------------
           ||
            b
