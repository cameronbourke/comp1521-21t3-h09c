Q1
==========================================

### Where did this EGG format come from? 🥚

Was this archival format the brainchild of Andrew Taylor?
Turns out, no! We have [ESTSoft](https://en.wikipedia.org/wiki/EGG_(file_format) to thank
for giving us the EGG file format.

### Okay. What is a archive format?

If you are like me, you started your archival
journey with the all too friendly `zip` format.

Let's use `zip` to get a feel for how `chicken` is meant to work.

```bash
$ echo hello Andrew > hi.txt
$ echo Good bye Andrew > bye.txt
$ zip a.zip hi.txt bye.txt # 1521 chicken -c a.egg hi.txt bye.txt (subset 2)
$ unzip -Z1 a.zip 				 # 1521 chicken -l a.egg (subset 0)
$ unzip -Zs a.zip 				 # 1521 chicken -L a.egg (subset 0)
$ unzip a.zip 						 # 1521 chicken -x a.egg (subset 1)
$ echo HELLO ANDREW > hi.txt
													 # chicken doesn't support CRUD operations
$ zip -u hi.txt						 
$ zip a.zip cya.txt				 
...
```

[ ] Explain the output of `print_bytes` below:

```bash
$ 1521 chicken -c a.egg hi.txt bye.txt
$ print_bytes a.egg
```

But, what if `print_bytes` is not available to us?
We could write it ourselves (isn't that an exercise from lab 08? Yes),
or we could use a `unix` command called `xxd`!

Let's decode `a.egg` using `xxd`.

```bash
$ xxd a.egg
$ xxd -g 1 -c 8 a.egg
```

> Look at "Egglicious" slide.

Imagine you are working on the assignment,
and using `xxd`, you only want to show the
bytes for the file permission of the first `egglet`.

```
-----------------------------------
| How would you do it? (2mins ⌛) |
-----------------------------------
```

> Hint: look at available flags with `$ man xxd`

Turns out `zip` also has a magic number!

```bash
$ xxd -g 1 -c 8 a.zip | head -n 1
```

> Poll: Why is having a _magic_ byte useful? 🧙

What if you wanted to edit a `.egg` file? Hmm 🤔.

This is where a tool called a hex editor comes to the rescue!

Let's checkout `hexedit`.

```bash
$ hexedit -l 8 a.egg
```

Commands
- `>` - end of file
- `<` - start of file
- `arrow keys` - move to adj char
- `tab` - toggle to hex/ascii
- `/` - search
- `Ctrl+C` - exit without saving
- `Ctrl+X` - exit with saving
- `Ctrl+W` - save changes to file

> Find all `hexedit` commands under COMMANDS section in `$ man hexedit`
