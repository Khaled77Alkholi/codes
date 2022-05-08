# Plain text flag finder
I made this tool so that I could grab flags from the output of a program(or a file) in termianl.

### For example, let's consider the following python program named "printFlag.py":

```
print("flag picoCTF{never_gonna_give_you_uuuup}")
```

And I wanna execute this python program and get the flag from it without the need to search for the flag. So, I just type the following in terminal:

``` python3 printFlag.py | ./findFlag ```

It'll output the following: ```  picoCTF{never_gonna_give_you_uuuup} ```
Then I can just copy that text to clipboard using xclip. --> ``` python3 printFlag.py | ./findFlag | xclip -sel c```


## My journey while making this little tool:

First of all I thought I would be getting the text from command line argument. So, I made the c program so that it reads the input from 
the command line argument. Turns out that this only works if I only passed the text as argument to the program. By doing the following 
``` ./findFlag "flag picoCTF{never_gonna_give_you_uuuup}" ```, which is not what I aimed for. So, I've done a bit research and found out
that piping a command doesn't output the text as command line argument, but sends data through standard output. In other words, the program
just needed to read the text from stdin(stdin means standard input, which can also be from keyboard). I used fgets() function as scanf() 
function doesn't read spaces.

# I know this isn't something to spend much time on, but I like to do research and make extra stuff.
