# simple_shell 💻

## Description
This program is shell-based, that is, it behaves like a command line interpreter. Like Shell, this program receives input, interprets it for the operating system, and manages the output.

## Usage
1. Clone the repository:
    ```
    git clone https://github.com/yuriquezada/simple_shell.git
    ```
2. Locate ourselves in the root folder of the directory.
    
3. Inside the simple_shell folder, run the following command:
    ```
    valgrind  gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o shell
    ```
4. Finally run the program by typing the following:
    ```
    ./shell
    ```
    The output of the new shell is the following:
    ```
    julien@ubuntu:~/shell$./shell
    $
    ```
## Project structure

| File | Description |
| --- | --- |
| `README.md` | Contains summary and key information about this project. |
| `AUTHORS` | List all the people who have contributed content to the repository |
| `man_1_simple_shell` | Display the user manual of any command that we can run on the terminal. It provides a detailed view of the command which includes NAME, SYNOPSIS, DESCRIPTION, BUGS, SEE ALSO, NOTES, and AUTHORS |
| `hack/generate-authors.sh` | Generates the list of project authors |
| `shell` | Allows us to run the new Shell |
| `file.h` | Contains C function declarations and macro definitions to be shared between several source files |
| `main.c` | Contains our ``main()`` function |
| `tokenizer.c` | It receives an input in the shell and identifies each value entered |
| `matcher.c` | Relates the input entered with the function to be executed in shell |
| `prints.c` | Prints the octal unsigned integer conversion |
| `free.c` | Contains the function to free up memory |
| `env.c` | Prints the environment of the current process |

## Example

If we want to print all the variables of the current environment, we will write ``env`` in our new ``shell``
````
user@ubuntu:~/shell$ ./shell
$ env
HOSTNAME=ef1189cc98cb
LANGUAGE=en_US:en
PWD=/root/simple_shell
TZ=America/Los_Angeles
HOME=/root
LANG=en_US.UTF-8
LS_COLORS=rs=0:di=01;34:ln=01;36:mh=00:pi=40;33:so=01;35:do=01;35:bd=40;33;01:cd                            =40;33;01:or=40;31;01:mi=00:su=37;41:sg=30;43:ca=30;41:tw=30;42:ow=34;42:st=37;4                            4:ex=01;32:*.tar=01;31:*.tgz=01;31:*.arc=01;31:*.arj=01;31:*.taz=01;31:*.lha=01;                            31:*.lz4=01;31:*.lzh=01;31:*.lzma=01;31:*.tlz=01;31:*.txz=01;31:*.tzo=01;31:*.t7                            z=01;31:*.zip=01;31:*.z=01;31:*.dz=01;31:*.gz=01;31:*.lrz=01;31:*.lz=01;31:*.lzo                            =01;31:*.xz=01;31:*.zst=01;31:*.tzst=01;31:*.bz2=01;31:*.bz=01;31:*.tbz=01;31:*.                            tbz2=01;31:*.tz=01;31:*.deb=01;31:*.rpm=01;31:*.jar=01;31:*.war=01;31:*.ear=01;3                            1:*.sar=01;31:*.rar=01;31:*.alz=01;31:*.ace=01;31:*.zoo=01;31:*.cpio=01;31:*.7z=                            01;31:*.rz=01;31:*.cab=01;31:*.wim=01;31:*.swm=01;31:*.dwm=01;31:*.esd=01;31:*.j                            pg=01;35:*.jpeg=01;35:*.mjpg=01;35:*.mjpeg=01;35:*.gif=01;35:*.bmp=01;35:*.pbm=0                            1;35:*.pgm=01;35:*.ppm=01;35:*.tga=01;35:*.xbm=01;35:*.xpm=01;35:*.tif=01;35:*.t                            iff=01;35:*.png=01;35:*.svg=01;35:*.svgz=01;35:*.mng=01;35:*.pcx=01;35:*.mov=01;                            35:*.mpg=01;35:*.mpeg=01;35:*.m2v=01;35:*.mkv=01;35:*.webm=01;35:*.ogm=01;35:*.m                            p4=01;35:*.m4v=01;35:*.mp4v=01;35:*.vob=01;35:*.qt=01;35:*.nuv=01;35:*.wmv=01;35                            :*.asf=01;35:*.rm=01;35:*.rmvb=01;35:*.flc=01;35:*.avi=01;35:*.fli=01;35:*.flv=0                            1;35:*.gl=01;35:*.dl=01;35:*.xcf=01;35:*.xwd=01;35:*.yuv=01;35:*.cgm=01;35:*.emf                            =01;35:*.ogv=01;35:*.ogx=01;35:*.aac=00;36:*.au=00;36:*.flac=00;36:*.m4a=00;36:*                            .mid=00;36:*.midi=00;36:*.mka=00;36:*.mp3=00;36:*.mpc=00;36:*.ogg=00;36:*.ra=00;36:*.wav=00;36:*.oga=00;36:*.opus=00;36:*.spx=00;36:*.xspf=00;36:
LESSCLOSE=/usr/bin/lesspipe %s %s
TERM=xterm
LESSOPEN=| /usr/bin/lesspipe %s
SHLVL=1
LC_ALL=en_US.UTF-8
PATH=/usr/local/sbin:/usr/local/bin:/usr/sbin:/usr/bin:/sbin:/bin
OLDPWD=/root/simple_shell/hack
_=./shell
$
````

## Authors ✏️

Rayd Trujillo - [rayd1893](https://github.com/rayd1893)

Yuri Quezada - [yuriquezada](https://github.com/yuriquezada)
