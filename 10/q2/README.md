Q2
==========================================

Write a C program, `print_diary.c`, which prints
the contents of the file `$HOME/.diary` to `stdout`.

But, what is `$`?

If we prefix an identifier in `bash` with `$`,
we get the value for that variable.

```bash
$ echo $HOME
/home/cambou
```

For the moment, you can _think_ of `$<name>` as `getenv(<name>)`.

How would we implement this question using `bash` commands?

```bash
$ cat $HOME/.diary
week 1: start T3
week 2: uni work is hectic.
week 3: uni work is even more hectic.
week 4: when is flexi-week again?
week 5: I think I need more sleep.
week 6: damn, flexi-week is still a week away.
...
```

Interesting! So we need to implement the equivalent
of `cat $HOME/.diary` as a `C` program.

Let's go to `./print_diary.c`
