# Project: wordcount
An open source tool can be used to counting words.

# Getting Started

## Prerequisites

System: GNU/Linux

Compiler: GCC(All Versions)

C Standard Library: The GNU C Library(glibc)(All Versions)

## Installation

GNU/Linux:

git clone https://github.com/rymeng/wordcount.git

cd copytf

make

cd bin

./wc.ARCH (Comment: ARCH is the output string by shell command "uname -m")

## Standard Input Stream

WARNING: Only support STANDARD INPUT STREAM!

1.) The input stream consists of (0 ~ n) LINE(s).

2.) Each line is terminated by a NEWLINE character (\\n in the C Programming Language). It is FORBIDDEN to enter a "line" that does not contain a newline character and is directly terminated by EOF symbol.

3.) After all line(s), the input stream is terminated by the EOF symbol. Empty input stream containing only EOF symbol and no lines is allowed.

# Release History

2024-03-10 Version 1.0.0: Implement basic functions & README file Version 1.0

2024-03-14 Version 2.0.0: Add Functions: Count characters and lines $ README file Version 1.1

2024-03-26 Version 3.0.0: Allows compilation on CPUs of different architectures && README file Version 2.0

# Author

Rainer Yutai Meng

E-mail: rainer.yutai.meng@gmail.com

# License

GNU General Public License(GPL) v2.0
